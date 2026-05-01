class Solution {
public:
    int pivotIndex(vector<int>& v) {
        int sum = 0;
        int k = 0;
        int n = v.size();
        for(auto x : v){
            sum += x;
        } 
        for(int i = 0;i<n;i++){
            sum -= v[i];
            if(k == sum) return i;
            k += v[i];
        }
        return -1;
    }
};