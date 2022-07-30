#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(string s){
    int somme=0;
        for (int i=0;i<(int)s.length();i++){
        somme+=s[i]-65;
        }
    return somme;
}
int sumNumber(int num){
    int sum=0;
    int mod;
    do {
        mod= num%10;
        sum+=mod;
        num=num/10;
    }
    while(num>0);
    return sum;
}
int finalRes(string s){
    int result= sum(s);
    while (result>=10){
        result =sumNumber(result);
    }
    return result;
}
int main() {

    string s,s2;
    cin >>s>>s2;

   cout<<finalRes(s)<<" "<<finalRes(s2);

}


