"""
I/p - Csharpstarz
O/p - Csharptz
"""

def RemovingChars(n):
  s=""
  for i in n:
    if i in s:
      pass
    else:
      s+=i
  return s

n=input()
print(RemovingChars(n))
