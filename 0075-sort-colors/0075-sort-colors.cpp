class Solution {
public:
    void sortColors(vector<int>& nums) {
        int color0 = 0;
        int color1 = 0;
        int color2 = 0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                color0++;
            }
            else if(nums[i]==1){
                color1++;
            }
            else{
                color2++;
            }

        }
        int idx=0;
        for(int i=0;i<color0;i++){
            nums[idx++]=0;
        }
         for(int i=0;i<color1;i++){
            nums[idx++]=1;
        }
         for(int i=0;i<color2;i++){
            nums[idx++]=2;
        }
        
    }
};