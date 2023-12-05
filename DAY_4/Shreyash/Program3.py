
# Q3. Write a program which accept N number from the user and return smallest number from it.
# Input: 5
# Input: 10 20 30 40 50
# Output: 10

# Input: 6
# Input: 85 69 21 45 73 25
# Output: 21
# Author: Shreyash

def min_input():
        arr = []
        inputt = int(input("How many number you to input :"))
        for i in range(1,inputt+1):
            ele = int(input(f"Input {i} number :"))
            arr.append(ele)

        min = arr[0]
        for j in range(len(arr)):
            if min>arr[j]:
                min = arr[j]
        print(f"Smallest number from your input is {min}")



if __name__ == "__main__":
     min_input()
    

