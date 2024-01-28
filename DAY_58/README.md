# Q.1 Write a program that takes an array of integers as input and partitions it into two subarrays, where the first subarray contains all the even numbers and the second subarray contains all the odd numbers. The order of elements within each subarray should remain the same as in the original array.
```
Input: [3, 6, 8, 2, 5, 7]
Expected Output: [[6, 8, 2], [3, 5, 7]]

Input: [2, 4, 6, 8]
Expected Output: [[2, 4, 6, 8], []]

Input: [1, 3, 5, 7, 9]
Expected Output: [[], [1, 3, 5, 7, 9]]

Input: [-3, 6, -8, 2, 5, -7]
Expected Output: [[6, -8, 2], [-3, 5, -7]]

Input: []
Expected Output: [[], []]
```
**Author: Vaibhav**

# Q.2 Write a program to print given Pattern.
```
Input: num = 4
Output:
7*8*9*10
4*5*6
2*3
1  
```
**Author: Suyash**

# Q.3 Write a program to check the number is ISBN Number or not.
```
Explanation :
Number1: 8147852369

Sum = (1*9) + (2*6) + (3*3) + (4*2) + (5*5) + (6*8) + (7*7) + (8*4) + (9*1) + (10*8)
Sum = 9 + 12 + 9 + 8 + 25 + 48 + 49 + 32 + 9 + 80

Sum = 281

Now, we divide the sum with 11 and check whether the remainder is 0 or not. If the remainder is 0, the number is a legal ISBN.

rem = 281 % 11

rem = 6 != 0

Number 8147852369 is not a legal ISBN because the remainder is not equal to the 0.
Number2: 1259060977

Sum = (1*10) + (2*9) + (5*8) + (9*7) + (0*6) + (6*5) + (0*4) + (9*3) + (7*2) + (7*1)

Sum = 10 + 18 + 40 + 63 + 0 + 30 + 0 + 27 + 14 + 7

Sum = 209

Now, we divide the sum with 11 and check whether the remainder is 0 or not.

rem = 209 % 11

rem = 0

```
**Author: Shreyash**
