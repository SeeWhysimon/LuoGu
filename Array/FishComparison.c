#include <stdio.h>

#define MAX_LEN 100

int main() {
    int n;
    scanf("%d", &n);
    
    int FishCuteness[MAX_LEN];
    for (int i = 0; i < n; i++) {
        scanf("%d", &FishCuteness[i]);
    }
    
    int Result[MAX_LEN] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (FishCuteness[j] < FishCuteness[i]) {
                Result[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", Result[i]);
    }

    return 0;
}