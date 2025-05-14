//a會變b,b會變c......,z會變成兩個字母a和b
class Solution {
public:
    int a[200000]={};//很大的陣列,裡面都是0
    int helper(int t){//使用函式呼叫函式
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
