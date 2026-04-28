//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
using namespace std;



void matrix(vector<int> v1, vector<int> v2,vector<int> v3){
    cout<<"(";
    for(int x : v1){
        cout<< x << " ";
    }
    cout<<")";
    cout<<endl;
    cout<<"(";
    for(int y : v2){
        
        cout<< y<< " ";
        

    }
    cout<<")";
    cout<<endl;
    cout<<"(";
    for(int z : v3){
        cout<< z<< " ";
    }
    cout<<")";

    cout<<endl;
}


int main(){    
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3 = {7, 8, 9};
    matrix(v1, v2, v3);
    cout<<endl;
    matrix(v3, v2, v1);
    return 0;
    

}