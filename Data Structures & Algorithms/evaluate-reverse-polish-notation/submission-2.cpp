class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a=stoi(tokens[0]);
        stack<string> ans;
        for (int i=0;i<tokens.size();i++){
            if (tokens[i]=="+" ){
                int b=stoi(ans.top());
                ans.pop();
                a=stoi(ans.top())+b;
                ans.pop();
                ans.push(to_string(a));
            }
            else if( tokens[i]=="*"){
                int b=stoi(ans.top());
                ans.pop();
                a=stoi(ans.top())*b;
                ans.pop();
                ans.push(to_string(a));
            }
            else if( tokens[i]=="/"){
                int b=stoi(ans.top());
                ans.pop();
                a=stoi(ans.top())/b;
                ans.pop();
                ans.push(to_string(a));
            }
            else if(tokens[i]=="-" ){
                int b=stoi(ans.top());
                ans.pop();
                a=stoi(ans.top())-b;
                ans.pop();
                ans.push(to_string(a));
            }
            else{
                ans.push(tokens[i]);
            }
        }
        return a;
    }
};
