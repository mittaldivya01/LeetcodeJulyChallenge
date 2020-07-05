class Solution {

 private:
    int countSetbit(int num)
    {
        int mask=1,res=0;
        while(num>0)
        {
            if(num & mask)
             ++res;   
             num= num>>1;
        }
        return res;
    }
public:
    int hammingDistance(int x, int y) {
             
        return countSetbit(x ^ y );
    }
};
