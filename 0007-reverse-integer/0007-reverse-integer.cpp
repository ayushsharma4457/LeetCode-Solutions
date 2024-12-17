class Solution {
public:
    int reverse(int x) {
        int rem,ans=0;
        while(x)
        {
            rem = x%10;
            x/=10;
            ans = ans*10+rem;
        }
        return ans;
    }
};