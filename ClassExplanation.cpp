//Pratice Programs for learning classes

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{

private:
    //Member variables
    string name;
    string dateOfBirth;
    int age;
    
public:
    //Contructor
    Person(){ //Default constructor
        name = "NONE";
        dateOfBirth = "xx-xx-xx";
        age = 0;
    }
    
    Person(string name, string dateOfBirth, int age){ //Optional contructor
        this->name = name;
        this->dateOfBirth = dateOfBirth;
        this->age = age;
        
        cout << "Person Created!!" << endl;

    }
    
    
    //Destructor
    ~Person(){
        
        cout << "Destructor called for " << this->name <<endl;
    }
    
    //Member function
    void printOut(){
        
        cout << "Name: " << this->name << " DOB: " << this->dateOfBirth << " Age: " << this->age<< endl;
    }
//protected:
    
    
};

int main(){
    
    Person p1("Bob", "90 - 45 - 33", 20);
    Person p2("JOHN", "90 - 45 - 200", 25);
    
    p1.printOut();
    p2.printOut();
    
    
    
    
    
    return 0;
}