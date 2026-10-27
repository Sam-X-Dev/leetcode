class Solution {

    struct priority {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        }
    };
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        priority_queue<pair<int, int>, vector<pair<int,int>>, priority> pq;

        for(int i = 0; i < n; i++) {
            pq.push({plantTime[i], growTime[i]});
        }
        int sd = 0, ans = 0;
        while(pq.size() > 0) {
            pair<int, int> seed = pq.top();
            pq.pop();
            ans = max(ans, sd + seed.first + seed.second);
            sd = sd + seed.first;
        }
        return ans;
    }
};