#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

string s,accro;
int sSize,accroSize;

bool isValid (){
    string ch="";

    sSize=s.size();
    accroSize=accro.size();
    int cpt=0;
    bool res= true;
    for (int i=0; i<sSize; i++){
        if (s[i]!=' '){
            ch+=s[i];
        }
           else {
             if (cpt> accroSize-1 || toupper(ch[0]) != toupper(accro[cpt]))
                 res=false;


                ch="" ;
                cpt++;

           }
           if (ch.size()==1)
           {
              s[i]= toupper(s[i]);
           }
           else {
                s[i]=tolower(s[i]);
           }
    }
     if (cpt == accroSize-1 && toupper(ch[0]) == toupper(accro[cpt])){

                res=true;;
     }
        else {

        res=false;
        }

        return res;
}
int main (){
    cin>>accro;
    int nb;
    cin>>nb;
    cin.ignore();
    while (nb--){
        getline(cin,s);
        if (isValid()){
            cout<<s<<endl;
        }
    }
}
