#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;


int nbAlph(string s){
    int cal=0;
    for (int i=0;i<(int)s.size();i++){
        if(isalpha(s[i])){
            cal++;
        }
    }
    return cal;
}
void freqAlph(string s){
    int res =nbAlph(s);
    int  tab[26]={0};

    for (int i=0; i<(int)s.size(); i++){
        tab[s[i]-'a']++;
    }
     for (int i=0; i<26; i++){
        cout<<(double)tab[i]/res<<endl;
    }

}

int main(){
    string s;
    getline(cin,s);
    for (int i=0 ; i<(int)s.size(); i++){
        s[i]= tolower(s[i]);
  }
   freqAlph(s);

}
