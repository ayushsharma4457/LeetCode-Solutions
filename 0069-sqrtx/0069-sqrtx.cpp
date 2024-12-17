class Solution {
public:
    int mySqrt(int x) {
        int i;
        for( i =1;i<=x;i++)
        {
            if(x>INT_MAX || x<INT_MIN)
            return 0;
            int num = i*i;
            if(num>x)
            break;
        }
        i-=1;
        return i;
    }
};