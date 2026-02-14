class Solution {
public:
    void insertInReverseOrder(stack<int>& st, int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;

        }
        int temp = st.top();
        st.pop();
        insertInReverseOrder(st, x);
        st.push(temp);

    }
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;
        int x = st.top();
        st.pop();
        reverseStack(st);
        insertInReverseOrder(st, x);
    }
};
