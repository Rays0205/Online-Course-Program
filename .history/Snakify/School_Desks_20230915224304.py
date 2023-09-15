'''Question
#- A school decided to replace the desks in three classrooms. Each desk sits two students. Given the number of students in each class, print the smallest possible number of desks that can be purchased.
#! The program should read three integers: the number of students in each of the three classes,"a", "b" and "c" respectively.

#> In the first test there are three groups. 
#> The first group has 20 students and thus needs 10 desks.
#> The second group has 21 students, so they can get by with no fewer than 11 desks.
#> 11 desks is also enough for the third group of 22 students.
#> So we need 32 desks in total.
'''
#   Solution
import math
c1 = int(input())
c2 = int(input())
c3 = int(input())
t1 = c1/2
t2 = c2/2
t3 = c3/2
num1 = math.ceil(t1)
num2 = math.ceil(t2)
num3 = math.ceil(t3)
print(num1+num2+num3)
''''''
