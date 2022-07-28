#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string s;
    cin>>s;
    int num;
    cin>>num;
    if (s[0]>=65 && s[0]<=90){
        cout<<s[0]-64;
    }
    cout<<(char)(num+64);
}

