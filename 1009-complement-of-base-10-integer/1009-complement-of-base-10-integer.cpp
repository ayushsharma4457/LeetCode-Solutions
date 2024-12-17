class Solution {
public:
    int bitwiseComplement(int n) {
        int ans =0, rem, mul=1;
        if(n==0)
        return 1;
        while(n)
        {
            rem = n%2;
            n/=2;
            if(rem==1)
            rem =0;
            else
            rem =1;
            ans = mul*rem+ans;
            mul*=2;
        }
        return ans;
    }
};