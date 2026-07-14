#include <iostream>

using namespace std;

int n;
int arr[100000];

void Merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1;
    int k = low;
    int a[n];
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            a[k] = arr[i];
            k++;
            i++;
        }
        else {
            a[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        a[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        a[k] = arr[j];
        k++;
        j++;
    }
    for (int l = low; l <= high; ++l)
        arr[l] = a[l];
}

void MergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    MergeSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
