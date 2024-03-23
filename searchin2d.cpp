class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                v.push_back(matrix[i][j]);
            }
        }

        return binary_search(v.begin(), v.end(), target);
    }
};