"""
I/p - level
O/p - 1

or
I/p - father
O/p - 0
"""

def Pol(n):
  if(n==n[::-1]):
    return 1
  else:
    return 0
    
n=input()
print(Pol(n))
