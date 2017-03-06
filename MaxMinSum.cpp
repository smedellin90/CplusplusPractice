#include <iostream>

using namespace std;

long long int maxValue(long long int arr[],int n);
long long int minValue(long long int arr[], int n, long long int max);

int main(){
    long long int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    long long int arr[5] = {a, b, c, d, e};
    int n = 5;
    
    long long int sumTemp = 0;
    long long int trueSum[5];
    
    
    for (int i = 0; i < n; i++) {
        sumTemp = 0;
        for (int j = 0 ; j < n; j++) {
            sumTemp += arr[j];
            trueSum[i] = sumTemp - arr[i];
        }
    }
    long long int maxVal = maxValue(trueSum, n);
    long long int minVal = minValue(trueSum, n, maxVal);
    
    cout << minVal << " " << maxVal << endl;
    
    
    return 0;
}

long long int maxValue(long long int arr[],int n){
    long int temp = 0;
    for (unsigned i = 0; i < n; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }
    
    return temp;
}
long long int minValue(long long int arr[], int n, long long int max){
    long int temp = max;
    for (unsigned i = 0; i < n; i++) {
        if (arr[i] < max) {
            temp = arr[i];
        }
    }
    
    return temp;
}