#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 1, 2, 1, 1, 3};
    int n = 8;

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > n/3) {
            printf("%d ", arr[i]);
            break;
        }
    }

    return 0;
}
