#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int n = 5;

    for(int i = 0; i < n; i++) {
        int left = 0, right = 0;

        for(int j = 0; j < i; j++)
            left += arr[j];

        for(int j = i + 1; j < n; j++)
            right += arr[j];

        if(left == right) {
            printf("Index = %d", i);
            break;
        }
    }

    return 0;
}
