#include <iostream>

using namespace std;

class Box{
private:
    int length;
    int breadth;
    int height;

    
public:
    
    int BoxCreated = 0;
    int BoxDestroyed = 0;
    //Default Constructor
    Box(){
        this->length = 0;
        this->breadth = 0;
        this->height = 0;
        BoxCreated++;
    }
    
    //parameterized Constructor
    Box(int length, int breadth, int height){
        
        this->length = length;
        this->breadth = breadth;
        this->height = height;
        BoxCreated++;
        
    }
    
    //class input constructor
    Box(Box &a){
        this->length = a.getLength();
        this->breadth = a.getBreadth();
        this->height = a.getHeight();
        
    }
    
    //Method functions
    int getLength(){
        return this->length;
    }
    
    int getBreadth(){
        return this->breadth;
    }
    
    int getHeight(){
        return  this->height;
    }
    
    long long CalculateVolume(){
        return (long long)this->length * this->height * this->breadth;
    }
    //Default Constructor
    ~Box(){
        BoxDestroyed++;
    }
    

    

};


int main(){
    
    
    return 0;
}