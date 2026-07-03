class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
             s=s+ to_string(strs[i].size())+'#'+strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for (int i=0;i<s.size();i++){
            int k=0;
            while( s[i]!='#'){
                k=k*10+(s[i]-'0');
                i++;
            }
            ans.push_back(s.substr(i+1,k));
            i=i+k;
        }
        return ans;
    }
};
