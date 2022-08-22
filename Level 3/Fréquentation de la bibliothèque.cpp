
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main (){
int lines;
cin>>lines;
int sum=0;
int num;
while (cin>>num){

    sum+=num;
}
cout<<sum+lines;
}
