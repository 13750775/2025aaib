//a�|��b,b�|��c......,z�|�ܦ���Ӧr��a�Mb
class Solution {
public:
    int a[200000]={};//�ܤj���}�C,�̭����O0
    int helper(int t){//�ϥΨ禡�I�s�禡
        if(a[t]>0) return a[t];
        if(t<26) return 1;
        a[t]=(helper(t-26)+helper(t-26+1))%1000000007;
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c:s){
            ans=(ans+helper(t+c-'a'))%100000007;
        }
        return ans;
    }
};
