## Program for palindrome


s = input()
print("You have Entered", s)
s1=s[::-1]

if(s1 == s):
  print("Entered String is Palindrome")
else:
  print("Entered String is Not palindrome")
