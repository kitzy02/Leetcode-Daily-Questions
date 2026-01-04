class Solution {
public:
    vector<int> divisors(int num){
        vector<int>res;
        for(int j=1;j<=num/2;j++){
            if(num%j==0){
                res.push_back(j);
            }
            if(res.size() > 4) return res;
        }
        res.push_back(num);
        return res;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            vector<int> d=divisors(nums[i]);
            if(d.size()==4){
                sum1+=accumulate(d.begin(), d.end(), 0);
            }
        }
        return sum1;
    }
};