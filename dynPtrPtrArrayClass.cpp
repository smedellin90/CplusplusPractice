#include <iostream>
using namespace std;


class IntArr{
private:
    int cap;
    int nrOfEl;
    int **arr;
    
    void expand(){
        
        cap *= 2;
        int **tempArr = new int*[cap];
        
        for (int i = 0; i < nrOfEl; i++) {
            tempArr[i] = new int(*arr[i]);//Do you need to do this in this fashion?
        }
        
        for (int j = 0; j < nrOfEl; j++) {
            delete arr[j];
        }
        
        delete [] arr;
        arr = tempArr;
    }
    
public:
    //Default Constructor
    IntArr(){
        this->cap = 10;
        this->nrOfEl = 0;
        this->arr = new int*[cap];
        
    }
    
    int getSize() const{
        return  nrOfEl;
    }
    
    void add(int el){
        if (nrOfEl > cap) {
            expand();
        }
        
        arr[nrOfEl++] = new int(el);
    }
    
    int getAt(int index) const {
        if (index < 0 || index >= nrOfEl) {
            throw("Out of Bounds!");
        }
        
        return *arr[index];
    }
    
    void popBack(){
        
    }
    
    //Destructor
    ~IntArr(){
        for (int i = 0; i < nrOfEl; i++) {
            delete arr[i];
        }
        
        delete [] arr;
    }
};







int main(){
    
    
    IntArr arr;
    
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    arr.add(10);
    
    
    for (int i = 0; i < arr.getSize(); i++) {
        cout << i <<":"<<arr.getAt(i) << endl;
    }
    
    return 0;
}