import sys
t=int(sys.stdin.readline())
dict={}
for _ in range(t):
    name,stay=map(str,sys.stdin.readline().split())
    if stay=="enter" and name not in dict:
        dict[name]=stay
    elif stay=="leave" and name in dict and dict[name]=="enter":
        del dict[name]
#정렬하기
for key in sorted(dict.keys(),reverse=True):
    print(key)