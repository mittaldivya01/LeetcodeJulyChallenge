
    double min( double x, double y)
    {
        if(x>y)
            return y;
        else
         return x;
    }
    double angleClock(int h, int m) {
        if(h<1 || h>12 || m<0 || m>59)
            return 0;
        double angle=abs((h* 60 +m)*0.5 - m*6.0); 
        return min(360-angle,angle);
    }
