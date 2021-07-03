/*

20. Valid Parentheses
Easy

6308

261

Add to List

Share
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
class Solution {
public:
   bool isValid(string str) {
       
     
    stack<char>st;
    for(char i:str)
    {
        if(i=='('||i=='{'||i=='[')
            st.push(i);
        else
        {
            if(st.empty())
                return false;
            else if(match(st.top(),i)==false)
                return false;
            else
                st.pop();
        }
    }
    return (st.empty()==true);
    }
    bool match(char a,char b)
    {
      return (a=='('&&b==')')||
      (a=='{'&&b=='}')||
      (a=='['&&b==']');
    }

};
