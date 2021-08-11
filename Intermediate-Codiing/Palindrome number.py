"""

Palindrome number

Eg = 123321
O/p = Yes, Palindrome
"""

number = int (input ("Enter the Number: => ")) 
temp = number 
reverse = 0 

while number>0:
 remainder = number % 10 
 reverse = (reverse * 10) + remainder 
 number = number	// 10
    
if temp== reverse:
  print ("Given number {} is Palindrome".format (temp)) 
else:
  print ("Given number {} is not Palindrome".format (temp))
