class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int>s;
        for(auto x : v){
            if(s.count(x)) return true;
            s.insert(x);
        }
        return false;
    }
};