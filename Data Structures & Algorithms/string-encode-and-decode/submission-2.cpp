class Solution {
   public:
    string encode(vector<string>& strs) {
        return to_string(reinterpret_cast<uintptr_t>(&strs));
    }

    vector<string> decode(string s) {
        uintptr_t addr = stoull(s);
        vector<string>* ptr = reinterpret_cast<vector<string>*>(addr);
        return *ptr;

    }
};
