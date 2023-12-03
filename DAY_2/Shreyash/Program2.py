def patt(n):
    if n <= 0:
       print("Enter Positive Number")
    else:
      for i in range(1,n+1):
          print(i*"*")

if __name__ == "__main__":
  n  = int(input("Enter No. Of Layers :"))
  patt(n)
