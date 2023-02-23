#include <bits/stdc++.h>

using namespace std; 

void CountingSort(int input[], int n){
    int output[n];
    int max = input[0];
    int min = input[0];
    for (int i = 1; i < n; i++){
        if (input[i] > max){
            max = input[i];
        }
        else if (input[i] < min){
            min = input[i];
        }
    }
    int size = max - min + 1;
    int CountArray[size];
    for (int i = 0; i < size; i++){
        CountArray[i] = 0;
    }
    for (int i = 0; i < n; i++){
        CountArray[input[i] - min]++;
    }
    for (int i = 1; i < size; i++){
        CountArray[i] += CountArray[i - 1];
    }
    for (int i = 0; i < n; i++){
        output[CountArray[input[i] - min] - 1] = input[i];
        CountArray[input[i] - min]--;
    }
    for (int i = 0; i < n; i++){
        input[i] = output[i];
    }
}


int main(){
    int x;
    cin >> x;
    int a[1000];
    for (int i = 0; i < x; i++){
        cin >> a[i];
    }
    CountingSort(a, x);
    for (int i = 0; i < x; i++){
        cout << a[i] << " ";
    }
    return 0;
}
