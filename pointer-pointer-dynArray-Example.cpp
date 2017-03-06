//
//  main.cpp
//  Playground
//
//  Created by Scott Medellin on 1/27/17.
//  Copyright (c) 2017 Scott Medellin. All rights reserved.
//

//#include "main.h"

#include <iostream>
using namespace std;


void expand(int **&arr, int &cap, int nrOfEl){
    
    //Step 1: Increase Capacity
    cap = cap*2;
    
    //Step 2: Create temp arr
    int **temp = new int*[cap];
    
    //Step 3: Initialize temp array
    for (int i = 0; i < cap; i++) {
        temp[i] = nullptr;
    }
    
    //Step 4: copy over things from old array... nrOfEl is the number of elements in the old array
    for (int i =0; i < nrOfEl; i++) {
        temp[i] = new int(*arr[i]);
    }
    
    //Step 5: Delete old array
    for (int i = 0 ; i < nrOfEl; i++) {
        delete arr[i];
    }
    
    delete []arr;
    
    //Step 6: Point old array to new one
    arr = temp;
    
    cout << "Array Expanded! New size capacity : " << cap <<endl;
}

void add(int el, int **&arr, int &cap, int &nrOfEl){
    
    if (nrOfEl >= cap) {
        expand(arr, cap, nrOfEl);
        
    }
    
    arr[nrOfEl++] = new int[el];
    
    cout << el << " Added! NROFEL: " << nrOfEl << endl;
    
    
}



int main (){
    //CrtSetDbgFlag(_CRTDBG_ALOC_MEM_OF | _CRTDBG_LEAK_CHECKDF);
    
    int cap = 5;
    int nrOfEl = 0;
    int **arr = new int*[cap];
    
    //INITIALIZE
    
    for (int i = 0; i <= cap; i++) {
        
        arr[i] = nullptr;
    }
    
    add(5, arr, cap, nrOfEl);
    add(5, arr, cap, nrOfEl);
    add(5, arr, cap, nrOfEl);
    add(5, arr, cap, nrOfEl);
    add(5, arr, cap, nrOfEl);
    add(5, arr, cap, nrOfEl);
    
    for (int i = 0; i < nrOfEl; i++) {
        cout << i << " "<< arr[i] << " " << *arr[i] << endl;
    }
    
    //DELETE
    
    for (int i = 0; i<=  cap; i++) {
        
        delete arr[i];
        
    }
    
    delete []arr;
    
    system ("PAUSE");
    return 0;
}