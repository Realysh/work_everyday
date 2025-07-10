#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
public:
    Student(string name,int score){
        this->name = name;
        this->score = score;
    }
    string name;
    int score;
};
class ScoreManager{
    vector<Student> list;
    string name;
    void input();
    void search();
public:
    ScoreManager(string name){this->name=name;}
    void run(); //전원만 넣는다.
};

void ScoreManager::run(){
    cout<<"***** 점수 관리 프로그램 "<<name<<"을 시작합니다."<<endl;
    while(true){
        cout<<"입력:1, 조회:2, 종료:3>>";
        int menu;
        cin>>menu;
        switch(menu){
            case 1: input(); break;
            case 2: search(); break;
            case 3: cout<<"프로그램을 종료합니다..."<<endl; break;
            default: return;
        }
    }
}

void ScoreManager::input(){
    cout<<"이름과 점수>>";
    string name;
    int score;
    cin>>name>>score;
    list.push_back(Student(name,score)); //stack처럼 넣는 건가?
    cout<<list.size()<<"개 저장됨"<<endl;
}

void ScoreManager::search(){
    cout<<"이름>>";
    string name;
    int score;    
    cin>>name;
    for(int i=0;i<list.size();i++){
        Student s=list.at(i);
        if(s.name==name){ //found;
            cout<<name<<"의 점수는"<<s.score<<"입니다"<<endl;
            return;
        }
    }
    cout<<name<<"은 없는 학생입니다."<<endl;
    return;
}

int main(){ //메인은 entry 파일 개념임
    ScoreManager sMan("AI Score");
    sMan.run();
}