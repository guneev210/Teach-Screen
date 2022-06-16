class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=sizeof(nums);
        int sum=0, ind[n],i,j;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                       break;
                    }
                }
            }
            return i;
    }
};