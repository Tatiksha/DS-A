class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty())
        return " ";
    for(int i=0;i<strs.size();i++)
    {
        reverse(strs[i].begin(),strs[i].end());
    }
    string res=strs[0];
    for(int i=1;i<strs.size();i++)
    {
        string sample=strs[i];
        for(int j=0;j<res.length();j++)
        {
            if(j<sample.length() && res[j]==sample[j])
                continue;
            else
                res=res.substr(0,j);
        }
    }
        reverse(res.begin(),res.end());
        return res;
    }
};