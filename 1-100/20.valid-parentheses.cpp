class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> matchMap = {{'(', ')'}, {'[', ']'}, {'{', '}'}, {0, 0}};
        stack<char> st;
        for (char x : s)
        {
            if (matchMap.count(x) == 1 || st.empty())
            {
                st.push(x);
            }
            else if (matchMap[st.top()] != x)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        return st.empty();
    }
};