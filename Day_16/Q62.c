#include <stdio.h>
int main() {
    int n, i, j, maxFreq = 0, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int freq = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }
        if(freq > maxFreq) {
            maxFreq = freq;
            element = arr[i];
        }
    }
    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxFreq);
    return 0;
}
