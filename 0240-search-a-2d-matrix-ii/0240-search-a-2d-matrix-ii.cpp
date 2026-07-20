class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int row=0;
        int column=n-1;
        while(row<m && column>=0){
            if(target==mat[row][column]){
                return true;
            }
            else if(target>mat[row][column]){
                row++;
            }
            else{
                column--;
            }
        }
        return false;
        
    }
};