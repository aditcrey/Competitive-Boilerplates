class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n==0) return 0;
        stack<int> stk;
        int i=0;
        int max_area = 0;
        while(i<n){

            if(stk.empty() || heights[stk.top()] <= heights[i]){
                stk.push(i);
                i++;
            }else{
                int tp = stk.top();
                stk.pop();
                max_area = max(max_area, heights[tp] * (stk.empty()?i:i-stk.top()-1));
            }
            
        }
        
        while(!stk.empty()){
            int tp = stk.top();
            stk.pop();
            max_area = max(max_area, heights[tp]*  (stk.empty()?i:i-stk.top()-1));
        }
        
        return max_area;
    }
};
