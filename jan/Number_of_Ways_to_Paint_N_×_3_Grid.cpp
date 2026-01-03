class Solution {
public:
    int numOfWays(int n) {
        const int mod=pow(10,9)+7;

        long long two=6;
        long long three=6;

        for(int i=2;i<=n;i++){
            long long newTwo= (two*3 + three*2)%mod;
            long long newThree= (two*2 + three*2)%mod;

            two=newTwo;
            three=newThree;

        }
        return (two+three)%mod;
    }
};