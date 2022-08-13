#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string stringInv (string s){
    int indice;
    string s1,s2,ch;
    for (int i=0; i<s.size();i++){
        if (s[i]== ' ')
            indice =i;
    }
    for (int i=0 ; i<indice;i++){
        s1+=s[i];
    }
    for (int i=indice+1; i<s.size();i++){
        s2+=s[i];
    }

    ch = s2+' '+s1;
    return ch;
}
int main (){
int num;
cin>>num;
string ch;
cin.ignore();
string s;
string tab[num];
for (int i=0; i< num ; i++){
    getline(cin,s);
    tab[i]=stringInv(s);
}
sort(tab, tab+num);
for (int i=0 ; i<num;i++){
    cout<<tab[i]<<endl;
}

}

