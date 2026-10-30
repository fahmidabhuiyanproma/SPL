#include <stdio.h>
int ComputeEvenSum(int arr[],int n) {
    int sum = 0,i;
    for (i = 0;i < n;i++) {
        if (IsEven(arr[i])) {
            sum = sum + arr[i];
        }
    }
    return sum;
}
int IsEven(int num) {
    if (num%2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int arr[] = { 1,2,3,4,5 };
    int karim = ComputeEvenSum(arr,5);
    printf("%d",karim);
    return 0;
}