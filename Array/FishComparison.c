#include <stdio.h>

#define MAX_LEN 100

int main() {
    int n;
    scanf("%d", &n);
    
    int fish[MAX_LEN];
    for (int i = 0; i < n; i++) {
        scanf("%d", &fish[i]);
    }
    
    int compare[MAX_LEN] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (fish[j] < fish[i]) {
                compare[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", compare[i]);
    }

    return 0;
}