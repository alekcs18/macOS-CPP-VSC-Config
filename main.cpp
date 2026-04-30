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



int scoreboardCaca = 0;
int scoreboardPipi = 0;

bool trebuieSaFac = true;
while(trebuieSaFac){
cout<<"De cate ori ati facut caca: "<<scoreboardCaca<<endl;
cout<<"De cate ori ati facut pipi: "<<scoreboardPipi<<endl;

int choice = 0;
cout<<"Alegeti ce vreti sa faceti: \n"<<"1.Pipi \n"<<"2. Caca \n"<<"3. Exit \n";
cin>>choice; 


if(choice == 1){ 
Pipi amFacutPipi = Pipi();

vector<Pipi> facPipi;
facPipi.push_back(amFacutPipi);
for(int i = 0; i < facPipi.size(); i++){
    facPipi[i];
    scoreboardPipi++;
}
}
if(choice == 2){ 
Caca amFacutCaca = Caca();

vector<Caca> facCaca;
facCaca.push_back(amFacutCaca);
for(int j = 0; j < facCaca.size(); j++){
    facCaca[j];
    scoreboardCaca++;
}

}
if(choice == 3){
    cout<<"Thank you for playing Veceu Simulator!"<<endl;
    return 0;

}

char playAgain;
do{
cout << "Do you want to play again?(y/n)\n";
            cin >> playAgain;
            if (playAgain == 'n' || playAgain == 'N') // this is no which means the game will end and program will return 0
            {
                trebuieSaFac = false;
                break;
            }
            if (playAgain == 'y' || playAgain == 'Y') // this will cause another round to start
            {
                trebuieSaFac = true;
                break;
            }
            cout << "Invalid choice! please choose from (y/n)\n"; // If player's choice is invalid it will display this message
        
}while(true);


}

cout<<"Program is exiting.."<<endl;
return 0;
}
