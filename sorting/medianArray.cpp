#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k) {
            return arr[pi];
        } else if (pi > k) {
            return quickSelect(arr, low, pi - 1, k);
        } else {
            return quickSelect(arr, pi + 1, high, k);
        }
    }
    return -1;
}

double findMedian(int arr[], int n) {
    if (n % 2 == 1) {
        return quickSelect(arr, 0, n - 1, n / 2);
    } else {
        int mid1 = quickSelect(arr, 0, n - 1, n / 2 - 1);
        int mid2 = quickSelect(arr, 0, n - 1, n / 2);
        return (mid1 + mid2) / 2.0;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double Median = findMedian(arr, n);
    cout << "Median = " << Median << endl;

    delete[] arr;
    return 0;
}
