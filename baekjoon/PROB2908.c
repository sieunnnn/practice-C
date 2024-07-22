#include <stdio.h>
#include <stdlib.h> 

int main() {
    char a[4];
    char b[4];
    char reverseA[4];
    char reverseB[4];
    int i;
    
    scanf("%3s", a);
    scanf("%3s", b);
    
    for (i = 0; i < 3; i++) {
        reverseA[i] = a[2 - i];
        reverseB[i] = b[2 - i];
    }
    
    reverseA[3] = '\0';
    reverseB[3] = '\0';
    
    int numA = atoi(reverseA);
    int numB = atoi(reverseB);
    
    if (numA > numB) {
        printf("%d\n", numA);
    } else {
        printf("%d\n", numB);
    }
    
    return 0;
}
