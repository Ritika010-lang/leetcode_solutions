class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1 = 0, count2 = 0, count3 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count1++;
            }
            else if(nums[i] == 1){
                count2++;
            }
            else{
                count3++;
            }

        }
        int idx = 0;
        while(count1--){
            nums[idx] = 0;
            idx++;
        }
        while(count2--){
            nums[idx] = 1;
            idx++;
        }
        while(count3--){
            nums[idx] = 2;
            idx++;
        }
    }
};