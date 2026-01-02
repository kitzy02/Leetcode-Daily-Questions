class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> freq;
        for(int n: nums){
            freq[n]++;
        }
        for(auto it: freq){
            if (it.second >1){
                return it.first;
            }
        }
        return -1;
    }
};