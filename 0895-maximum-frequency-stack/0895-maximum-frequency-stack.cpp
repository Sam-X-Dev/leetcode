class FreqStack {
public:

    unordered_map <int, stack<int>> us;
    unordered_map <int,int> uf;
    FreqStack() {
        
    }
    
    void push(int val) {
        uf[val]++;
        int freq = uf[val];
        if(us.find(freq) == us.end()){
            stack<int> s;
            us[freq] = s;
        }

        us[freq].push(val);
    }
    
    int pop() {
        int h = us.size();
        int ele = us[h].top();

        us[h].pop();
        if(us[h].size() == 0){
            us.erase(h);
        }

        uf[ele]--;

        return ele;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */