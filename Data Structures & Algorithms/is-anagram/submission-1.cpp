class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> alphabet(26, 0);

        for(size_t i = 0; i < s.size(); ++i){
            alphabet.at(s.at(i) - 'a')++;
            alphabet.at(t.at(i) - 'a')--;
        }

        return all_of(alphabet.begin(), alphabet.end(), [](int all){return all == 0;});
    }
};
