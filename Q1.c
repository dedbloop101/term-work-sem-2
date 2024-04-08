#include <stdio.h>
void printUniqueElements(int arr[], int n) {
int max=arr[0];
for(int i = 1; i < n; i++){
if(max < arr[i])
max=arr[i];
}
   int frequency[max] = {0}; 
    printf("The unique elements found in the array are: ");
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    for (int i = 0; i < max i++) {
        if (frequency[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printUniqueElements(arr, n);
    return 0; 
}
