#include <iostream>
using namespace std;

void initializeArr(int *intArr, int &cap);
void expandArr(int *&intArr,const int &nrOfElements, int &capacity);
void addElement(int el, int *&arr, int &nrOfEl, int &cap);
void printOut(int *intArr, const int &nrOfEl);


int main(){
    
    int capacity = 5;
    int nrOfEl = 0;
    int *intArr = new int[capacity];
    
    initializeArr(intArr, capacity);
    
    while (nrOfEl <= 45) {
        addElement(100, intArr, nrOfEl, capacity);
    }
    
    printOut(intArr, nrOfEl);
    
    
    return 0;
}

void initializeArr(int *intArr, int &cap){
    for (int i = 0; i < cap; i++) {
        intArr[i] = 0;
    }
}
void expandArr(int *&intArr,const int &nrOfElements, int &capacity){
    
    capacity *= 2;
    int *tempArr = new int[capacity];
    
    for (int i = 0; i < nrOfElements ; i++) {
        tempArr[i] = intArr[i];
    }
    
    for (int j = nrOfElements; j < capacity; j++) {
        tempArr[j] = 0;
    }
    
    delete [] intArr;
    
    intArr = tempArr;
    
    cout << "Array Expanded! New capacity is : "<< capacity << endl;
    
    
}
void addElement(int el, int *&arr, int &nrOfEl, int &cap){
    
    if (nrOfEl >= cap){
        expandArr(arr, nrOfEl, cap);
    }
    else if (nrOfEl < cap) {
        arr[nrOfEl] = el;
        nrOfEl++;
    }
}

void printOut(int *intArr, const int &nrOfEl){
    for (int i = 0; i < nrOfEl; i++) {
        cout << i <<": " << intArr[i] << endl;
    }
    
}