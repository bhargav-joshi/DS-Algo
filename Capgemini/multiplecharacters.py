"""
Problem Statement –

Capgemini in its online written test have a coding question, 
wherein the students are given a string with multiple characters that are repeated consecutively. 
You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

Input :

aabbbbeeeeffggg

Output:

a2b4e4f2g3

Input :

abbccccc

Output:

ab2c5

"""



""" Solution :- """

def soln(s):
     res = ""
     c = 1
     for i in range (len(s)-1):
         if (s[i] == s[i+1]):
             c= c+1
         else:
             if (c == 1):
                 res = res + s[i]
             else: 
                 res = res + s[i] + str(c)
             c = 1
     if (c == 1):
         res = res + s[i+1]
     else:
         res = res + s[i+1] + str(c)
     return res

s = input()
print(soln(s))
