/*
Tania Akthar, homework 10
 */
#include<iostream>
#include<fstream>
using namespace std;

void showfile(string filename){
    ifstream f;
    f.open(filename);

    string line;
    while(getline(f, line)){
        cout<<line<<endl;
    }

    f.close();
}

void totalwords(string filename){
    ifstream f;
    f.open(filename);

    string w;
    int count = 0;

    while(f >> w){
        count++;
    }

    f.close();

    ofstream out;
    out.open("wordcounts.txt");

    out<<"Tania Akthar"<<endl;
    out<<"Total number of words: "<<count<<endl;

    out.close();
}

void earthcount(string filename){
    ifstream f;
    f.open(filename);

    string w;
    int c = 0;

    while(f >> w){
        if(w.find("Earth") != string::npos){
            c++;
        }
    }

    f.close();

    ofstream out;
    out.open("wordcounts.txt", ios::app);

    out<<"The word 'Earth' appears "<<c<<" times in the document."<<endl;

    out.close();
}
