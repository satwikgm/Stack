// You are given a string s that consists of lower case English letters and brackets.

// Reverse the strings in each pair of matching parentheses, starting from the innermost one.

// Your result should not contain any brackets.



class Solution {
public:
    string reverseParentheses(string s) 
    {
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            if(s[i]==')')
            {
                reverse(s.begin()+st.top()+1 , s.begin()+i);
                st.pop();
            }
        }
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='(' && s[i]!=')')
            {
                res+=s[i];
            }
        }
        return res;
    }
};
