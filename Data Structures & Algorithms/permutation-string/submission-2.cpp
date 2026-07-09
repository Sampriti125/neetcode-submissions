class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int>  s1d;
        unordered_map<char,int> s2d;
        int l=0;
        int maxf=0;
        for (char i:s1){
            s1d[i]++;
        }
        for (int i=0;i<s2.size()-s1.size()+1;i++){
            int k=0;
            string s=s2.substr(l,s1.size());
            while(k<s.size()){
                  s2d[s[k]]++;
                  k++;
            }
            if(s2d==s1d){
                return true;
            }
            else{
                l++;
            }
            s2d.clear();
        }
        return false;
    }
};
