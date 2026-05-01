class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int k = 0;
        int n = v.size();
        for(auto x : v){
            if(x != 0) v[k++] = x;
        }
        while(k<n){
            v[k++] = 0;
        }
    }
};