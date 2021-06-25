## Anti palindrome
You are given a string S containing only lowercase alphabets. You can swap two adjacent characters any number of times (including 0).

A string is called anti-palindrome if it is not a palindrome. If it is possible to make a string anti-palindrome, then find the lexicographically smallest anti-palindrome. Otherwise, print -1.

#### Input format
The first line contains a single integer T denoting the number of test cases.
Each test case contains a string  of lower case alphabets only.

#### Output format
For each test case, print the answer in a new line.

#### Sample Input:
```
2
bpc
pp
```
#### Sample Output:

````
bcp
-1
````

### Hint:
If The string is not palindrome then print the string in sorted order (Use best sorting)
