class Solution {
public:
int arrangeCoins(int n) {
if(n<2)
return n;
double t=sqrt(2);
return static_cast(t * sqrt(0.125 + n) - 0.5);
}
};
