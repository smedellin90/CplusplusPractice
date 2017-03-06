#include <iostream>

using namespace std;

int main(){
    
    string ascii;
    cin >> ascii;
    unsigned long lengthStr = ascii.length();
    
    for (unsigned i = 0; i < lengthStr; i++) {
        cout << "The ascii value for " << ascii[i] << " is: " << (int)ascii[i]<< endl;
    }
    
    
    return 0;
}