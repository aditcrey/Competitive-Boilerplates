    void patience(vector<int> &piles, int a){
        
        auto it = lower_bound(piles.begin(),piles.end(),a);
        if(it == piles.end()) piles.push_back(a);
        else piles[it - piles.begin()] = a;
        
    }
    
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int> piles;
        
        for(int i=0;i<n;i++){
            patience(piles,nums[i]);
        }
        
        return piles.size();
    }
