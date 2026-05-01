class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n = v.size();
        int ans = v[0];
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(v[i] == ans){
                cnt++;
            }
            else{
                cnt--;
                if(cnt == 0){
                    ans = v[i];
                    cnt = 1;
                }
            }
        }
        return ans;
    }
};