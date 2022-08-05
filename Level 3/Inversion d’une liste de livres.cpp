
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main (){
int num;
cin >>num;
cin.ignore();
string titel;
string s[num];
    for (int i=0;i<num;i++){
        getline(cin,titel);
            s[i]=titel;

    }
    for (int i=num-1 ;i>=0 ;i--){
       cout<<s[i]<<endl;

    }
}

