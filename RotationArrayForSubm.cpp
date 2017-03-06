#include <iostream>
#include <vector>

using namespace std;

vector<int> rotationFunction(int n, int k, int q);

int main(){
    
    //Sets size of vector
    int n;
    //number of rotations
    int k;
    //number of queries
    int q;
    
    cin >> n >> k >> q;
    vector<int> a(n);
    
    a = rotationFunction(n, k, q);
    
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout << a[m] << endl;
    }
    
    return 0;
}

vector<int> rotationFunction(int n, int k, int q){
    vector<int> rotated(n);
    
    for(int a_i = 0;a_i < n;a_i++){
        cin >> rotated[a_i];
    }
    
    while (k != 0) {
        int temp = rotated[n - 1];
        
        for (int i = (n - 1); i > 0; i--) {
            rotated[i] = rotated[i - 1];
        }
        
        rotated[0] = temp;
        
        k--;
    }
    
    return rotated;
}
