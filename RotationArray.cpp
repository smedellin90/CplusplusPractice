#include <iostream>
#include <vector>

using namespace std;


vector<int> rotationFunction(int n, int k, int q);
void printArr(vector<int> &a, int n);


int main(){
    
    //Sets size of vector
    int n;
    //number of rotations
    int k;
    //number of queries
    int q;
    
    cout << "Enter n, k , and q." << endl;
    cin >> n >> k >> q;
    vector<int> a(n);
    
    a = rotationFunction(n, k, q);
    printArr(a, n);
    
    return 0;
}


vector<int> rotationFunction(int n, int k, int q){
    vector<int> rotated(n);
    
    cout << "Enter 'n' number of elements in vector" << endl;
    
    for(int a_i = 0;a_i < n;a_i++){
        cin >> rotated[a_i];
    }
    
    cout << "Output of unrotated array: "<< endl;
    for(int a_i = 0;a_i < n;a_i++){
        cout << rotated[a_i] << endl;
    }
    
    //Rethink this whole section
    while (k != 0) {
        cout << "Rotation countdown: " << k << endl;
        int temp = rotated[n - 1];
        cout << "Value of temp: " << temp << endl;
        for (int i = (n - 1); i > 0; i--) {
            rotated[i] = rotated[i - 1];
        }
        
        rotated[0] = temp;
        
        k--;
    }
    
    cout << "Vector has been rotated" << endl;
    
    return rotated;
}
void printArr(vector<int> &a, int n){
    for (int i = 0;i < n; i++) {
        cout << a[i] << endl;
    }
}