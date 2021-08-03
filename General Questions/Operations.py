""" Write a program to accept two integers and perform all the following operations on them-:
Addition
Subtraction
Multiplication
Division
Modulus
Power
Square Root """


a = int(input("enter first number: "))
b = int(input("enter second number: "))

sum = a + b
sub = a - b
product = a * b
quo = a / b
mod = a % b
power = pow(a,b)
print("sum:", sum)
print("subtraction:", sub)
print("product:", product)
print("quotient:", quo)
print("remainder:", mod)
print("power:", power)
