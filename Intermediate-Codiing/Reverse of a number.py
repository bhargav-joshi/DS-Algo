"""
Reverse of a number

eg  - 54321 
o/p = 12345
"""

# Accepting No
num = int (input ("Enter the Number:=> ")) 
# storing no to temp
temp = num 
# initiating rev to 0
reverse = 0 

# if entered no is greater than 0 then
while num>0:
 remainder = num % 10 
 reverse = (reverse * 10) + remainder 
 num = num	// 10
    
print ("The Given number is {} and Reverse is {}".format (temp, reverse))
