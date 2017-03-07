#include <iostream>
using namespace std;


int main(){
    
    int t;
    cin >> t;
    int u[t];
    int h[t];
    
    for(int a0 = 0; a0 < t; a0++){
        cin >> u[a0];
        h[a0] = 1;
    }
    
    //t = 1.. for loop runs once
    for (int i = 0; i < t; i++) {
        
        //If first number is even or 1
        if (u[i] % 2 == 0 || u[i] == 1) {
            while (u[i] != 0) {
                int c = 0;
                c = u[i] % 2;
                if (c == 0) {
                    h[i] *= 2;
                }
                else if (c == 1){
                    h[i] += 1;
                }
                
                u[i]--;
            }
        }
        //If first number is odd or 0
        else if (u[i] % 2 == 1 || u[i] == 0){
            while (u[i] != 0) {
                int c = 0;
                c = u[i] % 2;
                if (c == 1) {
                    h[i] *= 2;
                }
                else if (c == 0){
                    h[i] += 1;
                }
                
                u[i]--;
            }
        }
    
    }
    for (int j = 0; j < t; j++) {
        cout << h[j] << endl;
    }
    
    return 0;
}
