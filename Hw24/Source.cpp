#include <stdio.h>
int main() {
    int A[4];
    for (int i = 0; i < 4; i++) {
        scanf_s("%d", & A[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (A[i] > A[j]) {
                int temp;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("%d", A[0] * A[2]);
    return 0;
}
