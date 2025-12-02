/*
Tania Akthar, homework 10, word counts
 */
#include<iostream>
#include "hw10_functions_akthar.cpp"
using namespace std;

int main(){
    string file = "Remembering_Earth.txt";

    cout<<"\n------ Display file ------"<<endl;
    showfile(file);
    totalwords(file);
    earthcount(file);

    cout<<"\n------ Display wordcount file ------"<<endl;
    showfile("wordcounts.txt");

    return 0;
}
