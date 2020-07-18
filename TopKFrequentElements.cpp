vector<int> topKFrequent(vector<int>& nums, int k) {
           if(k==nums.size())
               return nums;
        unordered_map<int,int> freq;
        for(auto i: nums)
            ++freq[i];            
           
        multimap<int, int, greater <int>> MM;   
        for (auto& it : freq)
            MM.insert(make_pair(it.second,it.first));
        
          
        vector<int> res;
        for (auto& it : MM) {   
        res.push_back(it.second);
        if(! --k)  
            return res;
        } 
     return res;
    }
