t = input()
def func(n):
    if(n%2==0):
        i=n/2
        d=[1]*int(i)
        print(*d,sep='')
    else:
        a=[7]
        i=(n-1)/2
        d=[1]*int(i-1)
        a=a+d
        print(*a, sep='')
for i in range(int(t)):
    n = input()
    func(int(n))