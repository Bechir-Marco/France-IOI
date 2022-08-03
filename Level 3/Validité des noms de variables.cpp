#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
bool valid (string s){
    bool check=true;
    if ( !(isalpha(s[0]) || s[0]=='_'))
        check= false;
    for (int i=1;i<s.size();i++){
            if (!(isalpha(s[i]) || s[i]=='_' || isdigit(s[i]))) {
                check =false;
                break;

            }

    }
    return check;

}
int main (){
int num;
cin >>num;
cin.ignore();
string s;
    for (int i=0;i<num;i++){
        getline(cin,s);
        if(valid(s)){
            cout<<"YES"<<endl;;
            }
        else
            cout<<"NO"<<endl;;
    }
}

