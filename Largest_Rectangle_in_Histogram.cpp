int maxAreaUnderHist(vector<int> hist){
        stack<int> stk;
        int n =hist.size();
        int i=0;
        int max_area = 0;
        while(i<n){

            if(stk.empty()) {stk.push(i); i++;}
            else{
                if(hist[stk.top()] <= hist[i]) {stk.push(i); i++;}
                else{
                    int tp = stk.top();
                    stk.pop();
                    max_area = max(max_area, hist[tp] * (stk.empty()?i:i-stk.top()-1));
                }
            }
        }
        
        while(!stk.empty()){

            int tp = stk.top();
            stk.pop();
            max_area = max(max_area, hist[tp]* (stk.empty()?i:i-stk.top()-1));   
        }
        return max_area;
    }
