"""
product day question

Eg : 
4 4
100 198 251 22 
11 22 44 88
77 55 24 35
54 23 87 66

O/p = 251 88 77 87

"""


n,m = map(int,input().split())

ans =[]

for i in range(0,n):
	a = list(map(int,input().split()))
	ans.append(max(a))

print(*ans)
