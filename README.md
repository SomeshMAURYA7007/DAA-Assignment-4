# DAA-Assignment-4


**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019081  | Somesh kumar maurya | SomeshMAURYA7007 |
|    IIT2019082  |       Navdeep kumar | Navdeepk123 | 
|    IIT2019083  |      Sumit Bakoliya | Sumsuh  |

**Group No-**"27"

**Faculty Name-**"Dr. Mohammed Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an n x n matrix, where every row and column is sorted in increasing order. Given a key, how to decide whether this key is in the matrix.

---
## How to use code
```
#Download project
https://github.com/SomeshMAURYA7007/DAA-Assignment-4
```
Project Initialize 
```
cd DAA-Assignment-4
#create DAA folder
mkdir DAA

#go to DAA
cd DAA

#Create file
touch README.md
touch daa_as4.cpp
.
.
```
---

Run the code
```
g++ daa_as4.cpp
```
Output
```
Key finding in a 2 dimentional sorted matrix
```
---

**Test case**


```
Test Case-1
Enter size of matrix (between 1 to 1000) 4
Matrix is
3 50 103 115 
6 59 106 122 
9 60 107 137 
12 95 113 141 

Enter number of keys to be checked 2
Enter Key 1
Key is not present

Enter Key 3
Key is present

#--------------------------#
Test Case-2
Enter size of matrix (between 1 to 1000) 3
Matrix is
1 23 46 
12 25 69 
16 27 73 

Enter number of keys to be checked 3
Enter Key 73
Key is present

Enter Key 4
Key is not present

Enter Key 16
Key is present

```

---

### Theory
Divide and Conquer is an algorithm design paradigm in which we recursively break down a problem into two or more sub-problems of the same or related type, until these subproblems become simple enough to be solved directly.
The solutions to the sub-problems are then combined to give a solution to the original problem.
The divide-and-conquer paradigm is often used to find an optimal solution of a problem in which we recursively simplify the problem by decreasing the constraints of a subproblem and selecting / dis-selecting a given subproblem based on some conditions.



---

### Analysis

**Time Complexity**

The algorithm was analised on the basis of number of function calls it makes and some of the set of inputs and we come to a com=nclusion that the overall worst case time complexity of this algorithm is O(n*n)

**Space Complexity**

The Space complexity of the program is O(n*n) as the matrix size is n*n and the recursion runs n*n times (which use certain temporary variables)

---

### References

Introduction to Algorithms (MIT Press) by T H Cormen, C E Leiserson, R L Rivest, and C Stein 

https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm

https://matlab.mathworks.com/

