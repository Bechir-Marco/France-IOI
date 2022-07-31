#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
bool pal(string s){

        int first_index=0 , last_index=s.size()-1;
        for (int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        while (first_index<=last_index){
            if (s[first_index]==' ')
            first_index++;

            if (s[last_index]==' ')
            last_index--;

            if (s[first_index]!=s[last_index]){
                return false;
            }
            first_index++;
            last_index--;


        }
    return true;
    }

int main() {

    int num;
    string s;
    cin>>num;
    cin.ignore();


    for (int i=0; i<num; i++){
        getline(cin,s);
        if (pal(s)){
            cout<<s<<endl;
        }
    }


}


