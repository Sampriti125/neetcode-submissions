#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        string sh="";
        for (char str:s){
            if (isalnum(str)){
                sh.push_back(tolower(str));
            }
        }
        int left=0;
        int right=sh.size()-1;
        while (left<right){
            if (sh[left]!=sh[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
