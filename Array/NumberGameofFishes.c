// P1427
#include <stdio.h>

#define MAX_LEN 100

int main() {
    int n;
    int Numbers[MAX_LEN];
    int len = 0;

    for (int i = 0; i < MAX_LEN; i++) {
        scanf("%d", &n);
        if (n == 0) break;
        Numbers[i] = n;
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", Numbers[i]);
    }

    return 0;
}