# Bit Manipulation
1. To extract ith bit of a number:
	`(num & (1<<(i-1)))>>(i-1);`

2. Set the ith bit of a number:
	`num | (1<<(i-1));`
	
3. Unset the ith bit of a number:
	`num & ~(1<<(i-1));`
	
4.  Check if the number is odd or not:
	`num & 1`
	
5. Check if a number is power of 2 or not:
	It only contains only 1 set bit in its binary representation.
	`(num & (num-1) == 0)` should be satisfied.
	
6. Properties of XOR operator.
	- It is associative a^b^c = c^a^b.
	- 0^a = a.
	- a^a = 0.

7. Swapping two numbers using XOR operator.
```cpp
int a=9 , b=6;
a = a^b; 
b = a^b;   //b = (a^b)^b  = a;
a = a^b;   //a = (a^b)^a = b;
```
8. Toggle ith bit of a number:
	`num ^ (1<<(i-1));`

9. Counting number of set bits:
```cpp
int num = 10, count = 0;
while(num>0){
		count += num & 1;
		num = num >> 1;
}```
Or we can use built in functions for that.
`__builtin_popcount(num); //For integers only`
`__builtin_popcountll(num); //For long integers`
10. To convert an uppercase character to lowercase:
	```cpp
A = 65 = 1000001
a = 97 = 1100001
a = A | (1<<5);
 //or
a = A | ' '; // Blank space represents 32 in binary
A = a & ~(1<<5);
//or
A = a & '_';  // '_ represents 31 in binary```
Only the 5th bit is set in the case of lowercase characters.

##### Some Additional Problems:
- [Divide Two Integers](http://https://leetcode.com/problems/divide-two-integers/description/ "Divide Two Integers")
- [Minimum Bit Flips to Convert Number](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/)
- [Counting Bits](https://leetcode.com/problems/counting-bits/description/)
- [Single Number](https://leetcode.com/problems/single-number/description/)
- [Power Set or Subsets](https://leetcode.com/problems/subsets/description/)
- [Gray Code](https://leetcode.com/problems/gray-code/description/)
- [Single Number II](https://leetcode.com/problems/single-number-ii/description/)
