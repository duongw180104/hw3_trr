#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int x, int low, int high){
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (x == a[mid]){
            return mid + 1;
        }
        else if (x > a[mid]){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return low;
}

void IntertionSort(int a[], int y){
    int i, location, j, k, selected;
    for (int i = 1; i < y; i++){
        j = i - 1;
        selected = a[i];
        location = BinarySearch(a, selected, 0, j);
        while (j >= location){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    IntertionSort (arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}