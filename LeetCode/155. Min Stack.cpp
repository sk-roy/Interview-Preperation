class MinStack {
public:
    stack <int> stk;
    int mini;

    MinStack() {
        mini = INT_MAX;
    }

    void push(int val) {
        if (val <= mini) {
            stk.push(mini);
            mini = val;
        }
        stk.push(val);
    }

    void pop() {
        if (stk.top() == mini) {
            stk.pop();
            mini = stk.top();
        }
        stk.pop();
    }

    int top() {
        return stk.top();
    }

    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
