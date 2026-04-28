//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){    //012345678
    string a = {"is string"};
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    for(int i = 0; i <a.size() - 8; ++i){
        cout<<a[1];
    }
    return 0;
}