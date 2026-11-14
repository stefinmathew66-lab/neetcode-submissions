class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int,int> mpp;
        int n = numbers.size();
        for (int i = 0; i<n; i++) {
            int a = numbers[i];
            int m = target - a;
            if (mpp.find(m) != mpp.end()){
                if (mpp[m] < i) {
                    return {mpp[m] + 1, i + 1};

                }
                
            }
            mpp[a] = i;
        }
        return {};

        
        
    }
};
