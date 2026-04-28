//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){    //012345678
    string a = {"is string"};
    string b = a.substr(3,3); // 3,1 is s 3,2 is st, 3,3 is str
    string c = a.substr(0, 2); // 0,0 is blank 0,1 is i  0,2 is is
    size_t pos = a.find("str");      // can be used to see position
    cout<< b + c;
    cout<< pos;
    
    return 0;
}