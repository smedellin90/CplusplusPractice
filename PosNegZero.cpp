#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
    int n;
    cin >> n;
    double dummyVar = 0;
    double countPos = 0;
    double countNeg = 0;
    double countZero = 0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> dummyVar;
        
        if (dummyVar > 0) {
            countPos++;
        }
        
        else if (dummyVar < 0) {
            countNeg++;
        }
        
        else{
            countZero++;
        }
    }
    
    double fracPos = countPos / n;
    double fracNeg = countNeg / n;
    double fracZero = countZero / n;
    
    cout.precision(6);
    cout << fixed << fracPos << endl;
    cout << fixed << fracNeg << endl;
    cout << fixed << fracZero << endl;
    
    
    
    return 0;
}