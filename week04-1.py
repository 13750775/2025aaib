class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0#�j��e��ans���M��
        for i in range(1,n*2,2):#Python��for�j��
            ans += i#��o��1,3,5,7�ƥ[�Jans
        for i in range(1,n*2-1,2):
            ans+=1#��o��1,3,5�ƥ[�Jans
        return ans
