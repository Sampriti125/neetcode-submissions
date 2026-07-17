class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> ind;
        int n=temperatures.size();
        vector<int> result(n,0);
        for (int i=0;i<n;i++){
            while(!ind.empty() && temperatures[i]>temperatures[ind.top()]){
                int t=ind.top();
                result[t]=i-t;
                ind.pop();
                
            }
            ind.push(i);
        }
        return result;
    }
};
