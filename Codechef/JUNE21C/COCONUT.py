T = int(input())
for i in range(T):
    xa,xb,Xa,Xb = map(int, input().split())
    TypeA=Xa/xa
    TypeB=Xb/xb
    print(int(TypeA+TypeB))
