#include <stdio.h>
int main()
{
	int ans = 0;///答案加到這裡面
	///迴圈前面ans是零
	int a;///有一個整數 a
	scanf("%d",&a);///讀入A
	///人類的迴圈從1開始<=
	for(int i=1; i<=a; i++){
		ans += i;///迴圈中間修改ans
	}
	printf("%d",ans);
}///迴圈後面,印出ans
