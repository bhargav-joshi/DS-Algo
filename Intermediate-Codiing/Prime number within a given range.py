"""
A number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11). 
The C program reduces the number of iteration within the for loop. It is made to identify or calculate the prime numbers within a given range 
of numbers inserted by the user. Ex:- if user enter a range as 40-50 In that range 41,43,47 these three number are prime number.
"""
first = int (input ("Enter the first number:")) 
second = int (input ("Enter the Second Number:")) 

for i in range (first, second):
 for j in range (2, i//2):
   if i % j == 0:	    
     break 
   else:		    
     print ("Prime Number", i)
