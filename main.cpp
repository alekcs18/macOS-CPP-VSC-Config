//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <array>
using namespace std;


// class MyClass{
//     public:
//     MyClass(){
//         cout<<" Constructed "<<endl;
//     };
//     ~MyClass(){
//         cout<<" Destroyed "<<endl;
//     };


// };

void printData(array<unsigned int, 97> alex){
    cout<<"Current number of kilograme: "<<alex.size()<<endl;
}

int main(){    
array<unsigned int, 97> alex;
cout<<alex[1]<<endl;

printData(alex);
cout<<alex.max_size()<<endl;



return 0;

}