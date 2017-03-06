#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int i1 = 101;
    int i2 = 202;
    int i3 = 0;
    string s1 = "";
    string s2 = "";
    stringstream stream1;
    
    for (int i=0;i<2;i++)
    {
        
        //int to string
        stream1.clear();
        stream1.str("");
        cout << "i1 " << i1 << endl;
        stream1 << i1;
        s1 = stream1.str();
        cout << "s1 " << s1 << endl;
        
        //int to string
        cout << "i2 " << i2 << endl;
        stream1.clear();
        stream1.str("");
        stream1 << i2;
        s2 = stream1.str();
        cout << "s2 " << s2 << endl;
        
        //string to int
        stream1.clear();
        stream1.str("");
        stream1.str(s2);
        stream1 >> i3;
        //line above causes s1 and s2 to get messed up during 2nd time in for loop
        cout << "i3-- " << i3 << endl;
        
    }
    return 0;
}