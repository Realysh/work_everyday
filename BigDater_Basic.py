def square(x):
    return x*x
def sumsq(x):
    temp=[]
    for i in range(1,x+1):
        temp_s=square(i)
        temp.append(temp_s)
    return sum(temp)

print(sumsq(10))

