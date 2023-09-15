'''Question
#- Write a program that reads an integer number and prints its previous and next numbers. See the examples below for the exact format your answers should take. There shouldn't be a space before the period.
#! Remember that you can convert the numbers to strings using the function "str".
#? "x+y" are concatenate two values together and print ,
#? while "x" and "y" are two separate values and are multiplied 5 times
'''
#  Solution
a=int(input())
b=a+1
c=a-1
A= str(a)
B= str(b)
C= str(c)
print("The next number for the number "+A+" is "+B+".")
print("The previous number for the number "+A+" is "+C+".")

'''Model Solution
n = int(input())
print('The next number for the number ' + str(n) + ' is ' + str(n + 1) + '.')
print('The previous number for the number ' + str(n) + ' is ' + str(n - 1) + '.')//
'''
