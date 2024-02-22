# Q.1 Write a function that takes a list of integers as input and returns another list where each element is the sum of the absolute differences between that element and all other elements in the list.
```
Input: [2, 4, 6, 8]
Output: [12, 8, 8, 12]
Explanation:
For the first element (2), the absolute differences with other elements are |2-4| + |2-6| + |2-8| = 2 + 4 + 6 = 12.
Similarly, for the second element (4), the absolute differences are |4-2| + |4-6| + |4-8| = 2 + 2 + 4 = 8.
The same process applies to other elements.

Input: [-3, -1, 0, 2, 5]
Expected Output: [18, 12, 11, 13, 22]

Input: [1, 1, 1, 1]
Expected Output: [0, 0, 0, 0]

Input: [9]
Expected Output: [0]

Input: []
Expected Output: []
```
**Author: Vaibhav**

# Q.2 

```

```
**Author: Suyash**

# Q.3 Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0. Print N after the bits are toggled.
```
Input:
N = 17 , L = 2 , R = 3
Output:
23
Explanation:
(17)10 = (10001)2.  After toggling all
the bits from 2nd to 3rd position we get
(10111)2 = (23)10

Input:
N = 50 , L = 2 , R = 5
Output:
44
Explanation:
(50)10 = (110010)2.  After toggling all
the bits from 2nd to 5th position we get
(101100)2 = (44)10
```
**Author: Shreyash**

