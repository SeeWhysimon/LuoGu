//P5727
#include <stdio.h>

#define MAX_LEN 100

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("%d", n);
        return 0;
    }
    
    int results[MAX_LEN];
    int len = 0;

    for (; n != 1; len++) {
        results[len] = n;
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
    }
    len++;
    results[len] = 1;

    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", results[i]);
    }

    return 0;
}