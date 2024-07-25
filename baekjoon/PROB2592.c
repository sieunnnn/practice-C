#include <stdio.h>

int main() {
    int inputs[10];
    int max = 0;
    int sum = 0;
    int mod;
    int avg;
    int i;

    for (i = 0; i < 10; i++) { 
        int temp;
        scanf("%d", &temp);
        inputs[i] = temp;
        sum += temp;
    }

    avg = sum / 10;

    for (int i = 0; i < 10; i++) {
        int cnt = 0;
        for (int j = 1; j < 10; j++) {
            if (inputs[i] == inputs[j]) {
                cnt++;
            }
        }

        if (cnt > max) {
            max = cnt;
            mod = inputs[i];
        }
    }

    printf("%d %d", avg, mod);
}
