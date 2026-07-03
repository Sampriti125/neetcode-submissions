class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        for (int j=0;j<nums.size();j++){
            int k=1;
            for (int i=0;i<nums.size();i++){
                if (j!=i){
                    k=k*nums[i];
                }
            }
            output.push_back(k);
        }
        return output;
    }
};
