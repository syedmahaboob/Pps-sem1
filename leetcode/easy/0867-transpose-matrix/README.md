# Transpose Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 2D integer array `matrix`, return  *the  **transpose**  of*  `matrix`.

The  **transpose**  of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

 

Original
C++
 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 1000
- 1 <= m * n <= 105
- -109 <= matrix[i][j] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15 MB (beats 53.50%)  
**Submitted:** 2026-11-25T09:08:33.336Z  

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();      // Rows
        int n = matrix[0].size();   // Columns
        
        // Initialize result matrix with dimensions n x m
        vector<vector<int>> res(n, vector<int>(m));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                res[j][i] = matrix[i][j];
            }
        }
        
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/transpose-matrix/)