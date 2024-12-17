class Solution {
public:
    bool isPalindrome(int x) {
        int num,rem, ans=0;
        if(x<0)
        return false;
        num=x;
        while(x)
        {
            rem = x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return false;
            ans = ans*10+rem;
        }
        if(ans == num)
        return true;
        else
        return false;
    }
};