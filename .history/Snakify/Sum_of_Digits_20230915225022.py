'''Question
#- Given a three-digit number. Find the sum of its digits.
'''
#  Solution
a = int(input())
hud = a//100
ten = a%100//10
one = a%10
ans = hud + ten + one
print(ans)