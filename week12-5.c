class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N=nums.size();//�}�C���j�p
        vector<int> ans(N);//c++�}�C
        for(int i=0; i<N; i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};
