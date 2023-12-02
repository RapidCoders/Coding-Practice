# Q3. Write a program which takes a year as input and check whether it is leap year or not.
# Input: 2000
# Output: True.

# Input: 2013
# Output: False.

# Author: Shreyash

# Code

input_num = int(input("Enter the Year:"))
if input_num%4 == 0:
    print(f"{input_num} Leap")
else:
    print(f"{input_num} Not leap")
