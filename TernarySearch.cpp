#include <bits/stdc++.h>

using namespace std;

int TernarySearch(int a[], int n, int target){
    int l = 0, r = n - 1;
    while (r - l >= 0){
        int p = (r - l) / 3;
        int mid1 = l + p;
        int mid2 = r - p;
        if (target == a[mid1]){
            return mid1;
        }
        else if(target == a[mid2]){
            return mid2;
        }
        else if (target < a[mid1]){
            r = mid1 - 1;
        }
        else if (target > a[mid2]){
            l = mid2 + 1;
        }
        else 
        l = mid1 + 1;
        r = mid2 - 1;
    }
    return -1;
}
int main(){
    int n, x;
    cin >> n >> x;
    int arr[10000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = TernarySearch(arr, n, x);
    cout << result << endl;
    return 0;
