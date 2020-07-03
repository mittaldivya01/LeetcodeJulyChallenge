class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        if(N==0)
            return cells;
        if(N%14 ==0)
            N=14;
        else
            N=N%14;
        for(int i=0;i<N;i++)
        {
            vector<int> tmp(8,0);
            for(int j=1;j<7;j++)
            {
                if(cells[j-1]==cells[j+1])
                    tmp[j]=1;
                else 
                    tmp[j]=0;
            }
            cells=tmp;
        }
        return cells;
    }
};
