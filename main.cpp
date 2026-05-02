//cmd+shift+b to compile the code
//use shift+comand+r to run the code

// Game: Caraval themed game that uses scoring do determine which type of character you can be
// Types of characters: Legend; Actor; Human; Fate
// Character must have: name; age; sex; type;


#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <array>
#include <fstream>
#include <cstdio>
#include <set>
using namespace std;

class Character{
public:  

        enum type{
        HUMAN,
        ACTOR,
        LEGEND,
        FATE
        };
        char sex;
        int age;
        string name;




};

class characterPressets : public Character{
protected:
Character mycharacter;
type istype;
public:

void findSex(){
do{
cout<<"Please choose from the following: m/M --> male; f/F --> female\n";
cin>>mycharacter.sex;
if(mycharacter.sex == 'F' || mycharacter.sex == 'f'){
    cout<< "Character is female"<<endl;
    break;
}
else if(mycharacter.sex == 'm' || mycharacter.sex == 'M'){
    cout<< "Character is male"<<endl;
    break;
}
cout<<"Invalid choice please try again\n";
}while(true);
    

}

void name(){
    while(true){
    cout<<"Please enter your name: \n";
    if(getline(cin, mycharacter.name) && !mycharacter.name.empty()){
        cout<<"Your name is: "<<mycharacter.name<<endl;
        break;
    } else{
        cin.clear();
        cout<<"Invalid input please use a valid character\n";
    }
    
}
}
void getAge(){
    while(true){
    cout<<"\nPlease enter your age:\n";
    if(cin>>mycharacter.age){
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }
    else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Invalid input please use a number\n";
    }
    
    }
}
void printCharacter(){
    cout<<"Character pressets: "<<endl;
    cout<<"Your name: "<<mycharacter.name<<endl;
    cout<<"Your gender: "<<mycharacter.sex<<endl;
    cout<<"Your age: "<<mycharacter.age<<endl;
}



};

class characterType : public Character{
protected: 
type isType;
public:

characterType(type t) : isType(t)
{

}
int getType(){

    switch(isType){
        case type::HUMAN:
        return 10;
        case type::ACTOR:
        return 20;
        case type::LEGEND:
        return 30;
        case type::FATE:
        return 40;

    }


};

};

int main(){    
    characterPressets mycharacterPressets;

    int score = 0;
    vector<string> qnA = {"What is your name?",
         "What is your sex?",
         "What is your age?"
        };
    

cout<<qnA[0]<<endl;
   mycharacterPressets.name();
cout<<endl<<qnA[1]<<endl;
    mycharacterPressets.findSex();
cout<<endl<<qnA[2];
    mycharacterPressets.getAge();
    mycharacterPressets.printCharacter();

return 0;
}
