
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
string s,actual;

    getline(cin,s);
    actual =s;
   cout<<actual<<endl;

    for (int i=1; i<num; i++){
          getline(cin,s);

         if (s>actual){
            actual =s;
         cout<<actual<<endl;
         }
    }



}
