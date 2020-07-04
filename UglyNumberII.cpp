class Solution {
public:
    int nthUglyNumber(int n) {
         set<long long> uglyArry;
        if(n<2)
            return 1;
        uglyArry.insert(1);
        set<long long>::iterator it=uglyArry.begin();
        for(int i=1;i<n+1;i++)
        {
            uglyArry.insert(*it *2);
            uglyArry.insert(*it *3);
            uglyArry.insert(*it * 5);
            ++it;
        }
        --it;
            return *(it) ;        
    }
};
