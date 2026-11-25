# Reshape the Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In MATLAB, there is a handy function called `reshape` which can reshape an `m x n` matrix into a new one with a different size `r x c` keeping its original data.

You are given an `m x n` matrix `mat` and two integers `r` and `c` representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the `reshape` operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

Original
C++
 **Example 1:** 

```
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]

```

 **Example 2:** 

```
Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- -1000 <= mat[i][j] <= 1000
- 1 <= r, c <= 300

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15 MB (beats 83.35%)  
**Submitted:** 2026-11-25T09:13:49.598Z  

```cpp
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // If total elements don't match, return original
        if (m * n != r * c) return mat;

        vector<vector<int>> res(r, vector<int>(c));

        // Flatten index i maps to both coordinate systems
        for (int i = 0; i < m * n; ++i) {
            int oldR = i / n;          // Row in original matrix
            int oldC = i % n;          // Col in original matrix
            
            int newR = i / c;          // Row in reshaped matrix
            int newC = i % c;          // Col in reshaped matrix
            
            res[newR][newC] = mat[oldR][oldC];
        }
        
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reshape-the-matrix/)