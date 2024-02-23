
//In this code, we first declare an integer array arr with some values. Then, we initialize a variable sum to store the sum of elements. We use a for loop to iterate over each element of the array and add it to the sum variable. Finally,
//To calculate the sum of n elements in an array in C, you can modify the previous code to accept the number of elements n as input and then s
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%d
", sum);

    return 0;
}
//In this code, we first ask the user to enter the number of elements (n). Then, we declare an integer array arr of size n. We use a loop to read n elements into the array. Finally, we calculate the sum of the n elements and print the result.
