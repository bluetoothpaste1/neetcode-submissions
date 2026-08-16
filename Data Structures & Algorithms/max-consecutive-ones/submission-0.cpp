class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        nums.push_back(0);

        vector<int> zeroes;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums.at(i) == 0) {
                zeroes.push_back(i);
            }
        }
        
        for(size_t i = zeroes.size() - 1; i --> 0;) {
            
            zeroes.at(i + 1) -= (zeroes.at(i) + 1);

        }
        return (int)*max_element(zeroes.begin(), zeroes.end());

    }
};