#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of values to be processed: ");
	scanf("%d", &n);
	int ans=1;
	for(int i=0; i<n; i++){
		printf("Enter a value: ");
		int now;
		scanf("%d", &now);
		ans *=now;
	}
	printf("Product of the %d values is %d", n, ans);
}
