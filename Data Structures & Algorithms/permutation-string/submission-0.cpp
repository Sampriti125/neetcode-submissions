class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        sort(s1.begin(),s1.end());
        for (int i=0;i<s2.size()-s1.size()+1;i++){
            int r=l+s1.size();
            string s=s2.substr(l,s1.size());
            sort(s.begin(),s.end());
            if (s==s1){
                return true;
            }
            else{
                l++;
            }
        }
        return false;   
    }
};
