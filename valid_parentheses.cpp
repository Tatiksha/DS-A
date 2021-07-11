class Solution {
public:
    bool isValid(string s) {
     stack<int> stk;
     int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                stk.push(s[i]);
            else{
                if(stk.empty()) return false;
                else if(s[i]==')' && stk.top()!='('|| s[i]=='}' && stk.top()!='{'||s[i]==']' && stk.top()!='[')
                    return false;
                else 
                    stk.pop();
            }
        }
        if(stk.empty()) return true;
        return false;
    }
};