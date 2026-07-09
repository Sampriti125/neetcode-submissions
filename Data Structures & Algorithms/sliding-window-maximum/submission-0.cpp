class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        vector<int> maxs;
        for(int i=0;i<nums.size()-k+1;i++){
           vector<int> win(nums.begin()+l,nums.begin()+k+l);
           sort(win.begin(),win.end());
           maxs.push_back(win[win.size()-1]);
           l++;
        }
        return maxs;
    }
};
