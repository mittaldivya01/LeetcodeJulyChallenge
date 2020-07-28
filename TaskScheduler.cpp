class Solution {
public:
    
    int leastInterval(vector<char>& task, int n) {
        if(n==0) return (int)task.size();
        map<char,int> hm;
        int maxfreq=0;
        for(auto i:task)
        {
            ++hm[i];
            if(hm[i]>maxfreq)
                maxfreq=hm[i];
        }
       int idleTime= (maxfreq -1)* (n+1)+1;
        int samefreq=0;
        for(auto it:hm)
        {
            if(it.second==maxfreq)
                samefreq++;
        }
        return max (idleTime+samefreq-1, (int)task.size());
    }
};
