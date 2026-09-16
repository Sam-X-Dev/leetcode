class Solution {
public:

vector<int> nextSmaller(vector<int>& heights) {
    int n = heights.size();
  
    vector<int> nextS(n, n);
  
    stack<int> st;
    
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && heights[i] < heights[st.top()]) {
            nextS[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return nextS;
}

vector<int> prevSmaller(vector<int>& heights) {
    int n = heights.size();
  
    vector<int> prevS(n, -1);
  
    stack<int> st;
 
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && heights[i] < heights[st.top()]) {

            st.pop();
        }
        if (!st.empty()) {
            prevS[i] = st.top();
        }
        st.push(i);
    }
    return prevS;
}

    int largestRectangleArea(vector<int>& heights) {
        vector<int> prevS = prevSmaller(heights);
        vector<int> nextS = nextSmaller(heights);
    
        int maxArea = 0;

        for (int i = 0; i < heights.size(); ++i) {
            int width = nextS[i] - prevS[i] - 1; 
            int area = heights[i] * width;          
           maxArea = max(maxArea, area);        
         }
    
        return maxArea;
    }
};