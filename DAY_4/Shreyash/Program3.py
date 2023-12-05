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
    

