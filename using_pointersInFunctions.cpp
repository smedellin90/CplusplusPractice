#include <iostream>

using namespace std;

void initialize(int from, const int &cap, int *arr);
void expand(int *&arr, int &cap, int &nrOfEl);
void addElement(int el, int *&arr, int &nrOfEl, int &cap);
int getAt(int index, int *arr, const int &nrOfEl);
void printAll(int *arr, const int &nrOfEl);


int main(){
    
    int cap = 10; // Max cap for array
    int nrOfEl = 0; //Number of valid elements in the array
    int *arr = new int[cap];
    
    initialize(0, cap, arr);
    
    addElement(100, arr, nrOfEl, cap);
    addElement(100, arr, nrOfEl, cap);
    addElement(100, arr, nrOfEl, cap);
    addElement(100, arr, nrOfEl, cap);
    addElement(100, arr, nrOfEl, cap);
    
    printAll(arr, nrOfEl);
    
   // for (int i = 0; i < nrOfEl; i++) {
   //     addElement(i, arr, nrOfEl, cap);
   // }

    
    printAll(arr, nrOfEl);
    
    
    return 0;
}

void initialize(int from, const int &cap, int *arr){
    
    for (int i = from; i <= cap; i++) {
        
        arr[i] = 0;
    }
    
}
void expand(int *&arr, int &cap, int &nrOfEl){
    
    //1: Increase max cap
    cap *= 2;
    
    //Create temp Array
    int *tempArr = new int[cap];
    
    //Copy over valid array values of old array
    for (int i = 0; i < nrOfEl; i++) {
        tempArr[i] = arr[i];
    }
    
    //Delete old array
    delete []arr;
    
    //Point old array to new array location
    arr = tempArr;
    
    //Initialize remaining values of new array
    initialize(nrOfEl, cap, arr);
    
    
    
}

void addElement(int el, int *&arr, int &nrOfEl, int &cap){
    
    if (nrOfEl > cap) {
        
        expand(arr, cap, nrOfEl);
        cout << "Array has expanded!" << endl;
    }
    
    arr[nrOfEl++] = el;
}


int getAt(int index, int *arr, const int &nrOfEl){
    
    int value = 0;
    
    if (index >= nrOfEl || index < 0){ //ERROR! OUT OF BOUNDS!
        
        cout << "OUT OF BOUNDS!" << endl;
        throw ("OUT OF BOUNDS!");
        
        
    }
    
    value = arr[index];
    
    return value;
}

void printAll(int *arr, const int &nrOfEl){
    
    for (int i = 0; i < nrOfEl; i++) {
        
        cout << i << ":" << arr[i] << endl;
    }
}