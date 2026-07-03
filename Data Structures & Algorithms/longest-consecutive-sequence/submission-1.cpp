class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        unordered_set<int> k(nums.begin(), nums.end());
        int len=0;
        for (int num:nums){
            vector<int> s;
            int c=0;
            if (!k.count(num-1)){
                c=num;
                while(k.count(c+1)){
                     s.push_back(c);
                     c=c+1;
                }
                if (s.size()>len){
                    len=s.size();
                }
            }
        }
        return len+1;
    }
};
