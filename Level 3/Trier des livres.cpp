#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
void insertionSort(string arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        string startingPoint = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > startingPoint)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = startingPoint;
    }
}
int main (){

int num;
cin >>num;
string arr[num];
cin.ignore();
string s;

    for (int i=0; i<num; i++){
       getline(cin,s);
       arr[i]=s;
    }
    insertionSort(arr,num);

    for (int i=0;i<num;i++){
       cout<<arr[i]<<endl;
    }
}

