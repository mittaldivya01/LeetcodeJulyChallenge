class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
  int n=nums.size();
        set<vector<int>> res;
    for (int i=0; i<n-1; i++) 
    { 
        int l = i + 1; 
        int r = n - 1; 
        int x = nums[i]; 
        while (l < r) 
        { 
            int sum;
            sum = x + nums[l] + nums[r];
            if (sum == 0) 
              res.insert({x,nums[l++],nums[r--]}); 
            else if(sum < 0) 
                l++; 
            else
                r--; 
        } 
    } 
        vector<vector<int>> tripletList;
        for(auto it: res)
          tripletList.push_back(it);
    return tripletList;
    }
};
