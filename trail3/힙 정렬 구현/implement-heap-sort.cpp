#include <iostream>

using namespace std;

int n;
int arr[100001];

void Heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i, r = 2 * i + 1;

    if (l <= n && arr[l] > arr[largest]) 
        largest = l;
    
    if (r <= n && arr[r] > arr[largest]) 
        largest = r;
    

    if (largest != i) {
        int tmp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = tmp;
        Heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n) {
    for (int i = n / 2; i > 0; --i) 
        Heapify(arr, n, i);

    for (int i = n; i > 1; --i) {
        int tmp = arr[i];
        arr[i] = arr[1];
        arr[1] = tmp;
        Heapify(arr, i - 1, 1);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    HeapSort(arr, n);

    for (int i = 1; i <= n; ++i)
        cout << arr[i] << " ";
    return 0;
}
