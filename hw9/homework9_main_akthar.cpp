/*
Tania Akthar -- Homework 9
*/

#include<iostream>
#include "homework9_functions_akthar.cpp"
using namespace std;

int main(){
    int sizearray = arraysize();    
    int noise[sizearray];    

    randPopulate(noise, sizearray); 
    cout<<"\nOriginal Set: "<<endl;
    print(noise, sizearray);

    reverse(noise, sizearray);      
    cout<<"\nReversed Set: "<<endl;
    print(noise, sizearray);

    return 0;
}