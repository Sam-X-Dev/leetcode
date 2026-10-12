class MyStack {
private:
    queue<int> q;

public:
    MyStack() {}

    void push(int x) {
        q.push(x);

        int n = q.size() - 1;

        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int result = q.front();
        q.pop();
        return result;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};