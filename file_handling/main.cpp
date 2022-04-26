#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myFile;
    myFile.open("Arya.txt",ios::out); //write
    if(myFile.is_open()){
        myFile << "Heyyy";
        myFile << "\n This is second line.";
        myFile.close();
    }
    myFile.open("Arya.txt",ios::app); //append
    if(myFile.is_open()){
        myFile << "\nHeyy again";
        myFile.close();
    }

    return 0;
}