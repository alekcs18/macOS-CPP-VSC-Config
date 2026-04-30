//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Textura{

public:
Textura(){cout<<"Loaded"<<endl;};
virtual ~Textura(){cout<<"Unloaded"<<endl;};



};


class OakTreeTextura : public Textura{

public:
OakTreeTextura(){};
~OakTreeTextura(){};


};


// int someFunction(make_shared<MyClass> &somePtr){
//     if(*somePtr == 0){
//         cout<<"Container is empty";
//         return 0;
//     } else{
//         return *somePtr;
//     }

// }


int main(){    
// auto ptr = make_unique<int>();
// auto ptr1 = make_shared<int>(); //continue at 1:16:00 smart ptr
auto ptr = make_shared<OakTreeTextura>();
OakTreeTextura tree = OakTreeTextura();
OakTreeTextura leafs = OakTreeTextura();

vector<shared_ptr<Textura>> vecTexture;
vecTexture.push_back(ptr);
for(int i = 0; i < vecTexture.size(); i++){
    cout<<"Vector stored textures: "<<vecTexture[i]<<endl;
}
cout<<"Are stored: "<<ptr.use_count()<<endl;


return 0;

}