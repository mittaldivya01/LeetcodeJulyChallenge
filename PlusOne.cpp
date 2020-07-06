class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
        int n=digits.size();
        while(digits[n-1]==9)
        {    
            digits[n-1]=0;
            --n;
            if(n==0)
                break;
        } 
        if(n == 0)
             auto it= digits.insert(digits.begin(), 1);
        else
            ++digits[n-1];            
        return digits;
    }
};
