/****************
Paula Beatrise Valtere

F15. Dots teksta fails, kura atrodas sintaktiski pareizs C++ programmas teksts.
Uzrakstit programmu, kura saskaita, cik dazadu biblioteku (#include) ieklauts dotaja programma.
Drikst uzskatit, ka programmas teksta nav komentaru un ka attiecigie simboli neparadisies teksta literalos.


******************************/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){


string c="#include";
string searchh;
int r=0;
fstream fin("test.txt", ios::in);                                           //Funkcija faila atversanai

while(getline(fin,searchh)){
    size_t pos=searchh.find(c);                                             //Funkcija,kas parbauda, vai rinda satur "#include"
    if(pos!=string::npos){r++;}                                             //Ja rinda satur "#include", tiek palielinats mainigais "r"
    else if(searchh=="") continue;
    else break;

}
if(r!=0)cout<<"Ir atrastas "<<r<<".biblioteka/s izveletaja koda"<<endl;
else cout<<"Nav atrasta neviena biblioteka izveletaja koda"<<endl;
fin.close();                                                                    //Funkcija faila aizversanai
}

