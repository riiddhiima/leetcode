class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int count1 = 0;
        int el = 0;
        int n = nums.size();
        for(int i  = 0;i<nums.size();i++){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(nums[i]==el){
                count++;
            }
            else{
                count --;
            }
        }
        for(int i =0;i<n;i++){
            if(nums[i]==el){
                count1++;
            }
        if(count1>n/2){
            return nums[i];}
 } 
 return{0};
    }
};