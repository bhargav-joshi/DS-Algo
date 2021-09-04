"""Fanny's Occurences

Fanny is given a string along with the string which contains single character x. She has to remove the character x from the given string. Help her write a function to remove all occurrences of x character from the given string.

Input Specification:

input1: input string s 

input2: String containing any character x

Output Specification:

String without the occurrence of character x

Example 1:

input1: welcome to mettl 

input2: l

Output: wecome to mett

Explanation: As I is the character which is required to be removed, therefore all the occurrences of I are removed, keeping all other characters.

Input:

welcome to faceprep

o"""



## Solution 

def extractSecretMessage(Str, Sub): 
	return Str.replace(Sub, "")
Str = input("")
Sub = input("")
print(extractSecretMessage(Str, Sub))
