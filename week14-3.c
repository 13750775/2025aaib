#include <stdio.h>
int main() {
    int a;
    int ans=0;
    while (1) {
        scanf("%d", &a);
        if (a == 0)
            break;
        if (a > 0)
            ans += a;
    }
    printf("%d", ans);
}

