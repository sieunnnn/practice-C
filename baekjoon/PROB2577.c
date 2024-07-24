#include <stdio.h>

int main() {
    int input;
    int cnts[10] = {0};
    int multiply = 1;
    int i;
    
    for (i = 0; i < 3; i++) {
        scanf("%d", &input);
        multiply *= input;
    }

    while(multiply > 0) {
        int temp = multiply % 10;
        cnts[temp] += 1;
        multiply /= 10;
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", cnts[i]);
    }
    
    return 0;
}
