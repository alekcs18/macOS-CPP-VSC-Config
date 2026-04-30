//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <array>
using namespace std;


class nevoiUmane{
    private:
    int obiectNevoi;
    public:
    nevoiUmane(){
        cout<<"exista o nevoie: "<<endl;
    }
    virtual ~nevoiUmane(){};
};




class Pipi : public nevoiUmane{
    public:
    Pipi(){
        cout<<"am facut pipi"<<endl;
    };
    ~Pipi(){};
};
class Caca : public nevoiUmane{
    public:
    Caca(){
        cout<<"am facut caca"<<endl;
    };
    ~Caca(){};
};



int main(){    

bool trebuieSaFac = true;
while(trebuieSaFac){
int choice = 0;
cout<<"Alegeti ce vreti sa faceti: \n"<<"1.Pipi \n"<<"2. Caca \n";
cin>>choice; 
if(choice == 1){ 
Pipi amFacutPipi = Pipi();

vector<Pipi> facPipi;
facPipi.push_back(amFacutPipi);
for(int i = 0; i < facPipi.size(); i++){
    facPipi[i];
    
}
break;
}
if(choice == 2){ 
Caca amFacutCaca = Caca();

vector<Caca> facCaca;
facCaca.push_back(amFacutCaca);
for(int j = 0; j < facCaca.size(); j++){
    facCaca[j];
    
}
break;
}




}
return 0;

}