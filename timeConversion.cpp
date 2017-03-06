#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    
    //00:00:00PM or 00:00:00AM
    
    //AM or PM
    char dia[3];
    int hh = 0;
    int mm = 0;
    int ss = 0;
    
    scanf("%d:%d:%d%s", &hh, &mm, &ss, dia);
    if (strcmp(dia, "PM") == 0 && hh != 12){hh += 12;}
    if(strcmp(dia, "AM") == 0 && hh == 12){hh = 0;}
    
    printf("%02d:%02d:%02d", hh, mm, ss);
    
    
    



    return 0;
}