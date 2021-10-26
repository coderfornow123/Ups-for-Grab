'''
Given a number n, print the nth Lucas Number. Numbering starts from 0.
'''
n=int(input())
a=2
b=1
if(n==0):
    print(a)
else:
    for i in range(2,n+1):
        c=a+b
        a=b
        b=c
    print(b)


'''
Example Input

2

Output

3
'''
