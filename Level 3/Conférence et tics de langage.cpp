#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;
bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;

    return true;
}
char tolow(char c){
    if (c <='z' && c >='a')
        return c;
    else
        return (char)(c - 'A' + 'a');
}
int main(){
    string word;
    cin>>word;
    cin.ignore();
    string tab[10000];
    int counter=0;
    int cpt=0;
    string s;
    while (cin>>s ){
        if (isNumber(s))
            break;
        else {
            for (int i=0; i<s.size();i++){
                s[i]=tolow(s[i]);
            }
        tab[cpt]=s;
        if (tab[cpt]==word){
            counter++;
            }
            cpt++;
        }
    }
     cout<<counter;
}





