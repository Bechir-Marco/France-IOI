#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {

    string s,s2;
    getline(cin,s);
    for (int i=0; i<s.size();i++){
        s2+=(char)toupper(s[i]);
    }
    cout <<s2;
}

