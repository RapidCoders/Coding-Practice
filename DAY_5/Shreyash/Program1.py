def min_input(arr):
        arr2 = []
        for k in arr:
              sum = 0
              while(k>0):
                    r = k %10
                    r = int(r)
                    sum  = sum + r
                    k = k / 10
              arr2.append(sum)

        for i in arr2:
              print(i,end=" ")
                




if __name__ == "__main__":
     arr = []
     inputt = int(input("How many number you to input :"))
     for i in range(1,inputt+1):
         ele = int(input(f"Input {i} number :"))
         arr.append(ele)
     print("sum :",end=" ")
     print(min_input(arr))
