#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {

    string s,s2;
    getline(cin,s);
    for (int i=0; i<s.size(); i++){
       s2+= (char)toupper(s[i]);
    }
    int tab[26]={0};

    for (int i=0; i<s2.size(); i++){
            if (s2[i]!=' '){
        tab[s2[i]-'A']+=1;
            }
    }
    int max=0;
    int indice=0;

    for (int i=0;i<26;i++){
        if (tab[i]>max){
            max=tab[i];
            indice=i;
        }
    }
     cout <<(char)(indice+'A');


}


