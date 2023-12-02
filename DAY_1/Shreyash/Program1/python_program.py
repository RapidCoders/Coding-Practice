# Q1. Write a program which accept number from the user and check whether it is prime or not.
# Input: 31
# Output: Is is a prime number.

# Input: 20
# Output: It is not a prime number.

# Author: Vaibhav

# Code
input_num = int(input("Enter the Number :"))
flag = 0
for i in range(2,input_num):
  if input_num%i==0:
    flag = 1
    break
if flag == 1:
  print(f"{input_num} is Not Prime")
else:
  print(f"{input_num} is Prime")


# Function Code
def prn(input_num):
    flag = 0
    for i in range(2,input_num):
        if input_num%i==0:
            flag = 1
            break
    if flag == 1:
        print(f"{input_num} Not Prime")
    else:
         print(f"{input_num} Prime")


if __name__ == "__main__":
    input_num = int(input("Enter the Number :"))
    prn(input_num)
