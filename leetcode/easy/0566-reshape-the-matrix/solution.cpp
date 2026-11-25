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