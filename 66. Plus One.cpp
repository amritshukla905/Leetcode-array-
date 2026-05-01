class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n-1;i>=0;i--){
            if(v[i] < 9){
                v[i] = v[i]+1;
                return v;
            }
            else{
                v[i] = 0;
            }
        }
        vector<int>z(n+1);
        z[0] = 1;
        return z;
    }
};