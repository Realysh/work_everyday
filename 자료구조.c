#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MaxStackSize 100

typedef struct{
    short r;
    short c;
}element;

typedef struct{
    element data[MaxStackSize];
    int top;
}Stack;

void init_stack(Stack *p){
    p->top=-1;
}
int is_empty(Stack *p){
    return (p->top==-1);
}
int is_full(Stack *p){
    return (p->top==(MaxStackSize-1));
}
void push(element item,Stack *p){
    if(is_full(p)){
        fprintf(stderr,"스택 포화 에러\n");
        return;
    }
    p->data[++p->top]=item;
}

element pop(Stack *p){
    if(is_empty(p)){
        fprintf(stderr,"스택 공백 에러\n");
        exit(1);
    }
    else return p->data[(p->top)--];
}
element peek(Stack *p){
    if(is_empty(p)){
        fprintf(stderr,"스택 공백 에러\n");
        exit(1);
    }
    else return p->data[p->top];
}

char getch() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

char maze[8][8] = {
    {'1','1','1','1','1','1','1','1'},
    {'e','0','0','0','1','0','B','1'},
    {'1','0','1','0','1','0','1','1'},
    {'1','B','1','0','0','0','1','1'},
    {'1','1','1','0','1','0','0','1'},
    {'1','0','1','0','1','1','0','1'},
    {'1','0','0','0','B','1','0','x'},
    {'1','1','1','1','1','1','B','1'}
};

element entry={1,0}, here={1,0};

int main(){
    Stack s;
    init_stack(&s);
    int r,c;
    here=entry;

    char move;
    bool moved = false;

    maze[here.r][here.c] = '*';  // 시작 위치 표시

    while (maze[here.r][here.c] != 'x') {
        if (moved) {
            printf("\033[H\033[J"); // 화면 지우기
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                printf("%c ", maze[i][j]);
            }
            printf("\n");
        }

        printf("Move (w/a/s/d): ");
        move = getch();

        int nr = here.r, nc = here.c;

        switch (move) {
            case 'w': nr--; break;
            case 's': nr++; break;
            case 'a': nc--; break;
            case 'd': nc++; break;
            default:
                printf("Invalid input!\n");
                continue;
        }

        // 벽 검사
        if (nr < 0 || nr >= 8 || nc < 0 || nc >= 8 || maze[nr][nc] == '1') {
            printf("벽입니다! 이동 불가\n");
            moved = false;
            continue;
        }
        // 폭탄 검사
        if (maze[nr][nc] == 'B') {
            printf("폭탄 발견, 처음으로 돌아갑니다\n");
            // 스택 초기화
            init_stack(&s);
            // 이전 표시 지우기
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if (maze[i][j] == '*') maze[i][j] = '0';
                }
            }
            // 시작 지점으로 복귀
            here = entry;
            maze[here.r][here.c] = '*';
            moved = false;
            continue;
        }

        // 현재 위치 저장 (출발점 또는 이전 위치)
        push(here, &s);
        // 이전 위치 원복
        maze[here.r][here.c] = '0';
        // 새 위치로 이동
        here.r = nr;
        here.c = nc;
        // 도착 지점 도달 시 새 위치도 스택에 저장 후 루프 탈출
        if (maze[here.r][here.c] == 'x') {
            push(here, &s);
            break;
        }
        // 현재 위치 표시
        maze[here.r][here.c] = '*';
        moved = true;
    }

    printf("\n도착 지점(x)에 도달했습니다!\n이동 경로:\n");

    while (!is_empty(&s)) {
        element step = pop(&s);
        printf("(%d, %d)\n", step.r, step.c);
    }
    
    return 0;
}