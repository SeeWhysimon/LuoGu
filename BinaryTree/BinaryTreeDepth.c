#include <stdio.h>

int* CreateBinaryTree(int n) {
	int *levelNumber;
    *levelNumber = 1;
    while (n) {
        n = n >> 1;
        *levelNumber += 1;
    }
    return levelNumber;
}

int main() {
	int n;
    scanf("%d", &n);
    int *levelNumber;
    levelNumber = CreateBinaryTree(n);
    printf("%d\n", *levelNumber);
    return 0;
}
