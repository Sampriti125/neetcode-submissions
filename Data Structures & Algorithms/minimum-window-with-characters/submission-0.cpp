class Solution {
public:
    string minWindow(string s, string t) {
        int l=0;
        int righ=0;
        int lef=0;
        int len=INT_MAX;
        string ans="";
        unordered_map<char, int> tc;
        unordered_map<char,int> wc;
        for(char c:t){
            tc[c]++;
        }
        int have=0;
        int need=tc.size();
        char c;
        for (int r=0;r<s.size();r++){
            c=s[r];
            if (tc.count(c)){
                wc[s[r]]++;
                if(wc[s[r]]==tc[s[r]]){
                    have++;
                }
            }
            while(have==need){
                if (r-(l)+1<=len){
                len=r-l+1;
                ans=s.substr(l,len);
                }
                if(tc.count(s[l])){
                    wc[s[l]]--;
                    if(wc[s[l]]<tc[s[l]]){
                        have--;
                    }
                }
                l++;
            }
        }
        
        return ans;   
    }
};
