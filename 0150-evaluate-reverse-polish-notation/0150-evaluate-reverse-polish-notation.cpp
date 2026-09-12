class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> st;

        for (auto s : tokens) {

            // Number → push into stack
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                st.push(stoi(s));
            }

            // Operator → take two operands
            else {
                int val1 = st.top();
                st.pop();

                int val2 = st.top();
                st.pop();

                if (s == "+")
                    st.push(val2 + val1);

                else if (s == "-")
                    st.push(val2 - val1);

                else if (s == "*")
                    st.push(val2 * val1);

                else if (s == "/")
                    st.push(val2 / val1);
            }
        }

        return st.top();
    }
};