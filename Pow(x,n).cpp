double myPow(double x, int n) 
    {
        if(n==0)
            return 1;
        else if(n==1)
            return x;
        else if(n==-1)
            return 1.00/x;
        else
        {
            if(n%2==0)
            {
                double ans=myPow(x,n/2);
                return ans*ans;
            }
            else
            {
                double ans=myPow(x,(n-1)/2);
                return ans*ans*x;
            }
        }
    }
