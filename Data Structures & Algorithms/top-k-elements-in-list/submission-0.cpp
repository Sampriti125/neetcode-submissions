class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> dic;
        for (int num:nums){
            int key=num;
            dic[key].push_back(num);
        }
        vector<int> vec;
        int maxkey;
        for (int i=0;i<k;i++){
            int maxlen=0;
            for (auto key:dic){
                if (key.second.size()>maxlen){
                   maxlen=key.second.size();
                   maxkey=key.first;
                }
            }
            vec.push_back(maxkey);
            dic.erase(maxkey);
        
        }
        return vec;
    }
};