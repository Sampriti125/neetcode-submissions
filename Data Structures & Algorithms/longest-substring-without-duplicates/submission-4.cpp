class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> chk;
        int k=0;
        int z=0;
        for(int i=0;i<s.size();i++){
            if(find(chk.begin(),chk.end(),s[i])==chk.end()){
                chk.push_back(s[i]);
            }
            else{
                if (chk.size()>k){
                    k=chk.size();
                }
                while(chk[0]!=s[i]){
                    chk.erase(chk.begin());
                }
                chk.erase(chk.begin());
                chk.push_back(s[i]);
            }
        }
        k=max(k,(int)chk.size());
        return k;
    }
};
