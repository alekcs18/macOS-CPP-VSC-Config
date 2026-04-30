//cmd+shift+b to compile the code
//use shift+comand+r to run the code

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <array>
#include <fstream>
#include <cstdio>
#include <set>
using namespace std;



int main(){    
    FILE *somefile = fopen("./input.txt","rt");
    int stringlength = 20;
    string line(stringlength, '0');
    fread(&line[0], sizeof(char), (size_t)stringlength, somefile);
    cout<<line<<endl;
    fclose(somefile);
    ifstream file("./input.txt");
    set<string> set1;

    while(getline(file, line)){
        //split line in word
        string words[5] = {
        line.substr(0, 4),
        line.substr(5, 2),
        line.substr(8, 1),
        line.substr(10, 4),
        line.substr(15, 4)
        };
        for(int i = 0; i < 5; i++){
            for(auto &c: words[i]){
        set1.insert(words[i]);
            }
        }
        //insert each word in a set
    }
    //write set values to new file called "output.txt", one word per line
    FILE *someNewFile = fopen("output.txt", "w");
    for(const string&word : set1){
        string formatedWord(stringlength, ' ');
        size_t copylen = min((size_t)19, word.length());
        for(int i = 0; i < copylen; i++){
            formatedWord[i] = word[i];
        }
        formatedWord[19] = '\n';
        fwrite(&formatedWord[0], sizeof(char), formatedWord.length(),someNewFile);

    }

    //make words lowercase
return 0;
}
