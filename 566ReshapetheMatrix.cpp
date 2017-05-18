class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n =nums.size(),m = nums[0].size();
        if (n*m!=r*c) return nums;
        vector<vector<int>> out(r,vector<int>(c,0));
        for(int i = 0 ; i <out.size();i++)
            for(int j =0;j <out[0].size();j++)
            {
                int k = i*c + j;
                out[i][j] = nums[k/m][k%m] ;
            }
        return out;
    }
};
