#include <stdio.h>

int main() {
    int in, out;
    int sum = 0;
    int max = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d %d", &in, &out);

        sum += -in + out;

        if (sum > max) {
            max = sum;
        }
    }

    printf("%d", max);
}
