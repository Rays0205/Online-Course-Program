'''Question
#- Given an integer. Print its tens digit.
'''
#  Solution
a = int(input())
ten = a%100//10
print(ten)
'''Model Solution
n = int(input())
print(n // 10 % 10)
'''
