//You are given a stack of integers. Your task is to sort the stack in descending order using recursion, such that the top of the stack contains the greatest element. You are not allowed to use any loop-based sorting methods (e.g., quicksort, mergesort). You may only use recursive operations and the standard stack operations (push, pop, peek/top, and isEmpty).

class Solution {
public:
    void insertInSortedOrder(stack<int>& st, int x)
    {
        if(st.empty() || st.top() <= x)
        {
            st.push(x);
            return;
        }
        int temp = st.top();
        st.pop();
        insertInSortedOrder(st, x);
        st.push(temp); 
    }
    void sortStack(stack<int> &st) {
        if(st.empty()) return;
        int x = st.top();
        st.pop();
        sortStack(st);
        insertInSortedOrder(st, x);

    }
};
