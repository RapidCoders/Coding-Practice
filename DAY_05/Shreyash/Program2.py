def frequency(list):
     freq = {}
     for item in list:
        if item in freq:
          freq[item] += 1
        else:
           freq[item] = 1

     print("Element | Frequency")
     for k in freq:
        print(f"   {k}   |   {freq[k]}")


if __name__ == "__main__":
        num = int(input())
        list = []
        for i in range(0,num):
            ele = int(input())
            list.append(ele)
        frequency(list)
   
