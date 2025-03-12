class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0#迴圈前面ans先清空
        for i in range(1,n*2,2):#Python的for迴圈
            ans += i#把這些1,3,5,7數加入ans
        for i in range(1,n*2-1,2):
            ans+=1#把這些1,3,5數加入ans
        return ans
