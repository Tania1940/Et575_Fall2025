/*
Tania Akthar
Oct 24, 2025
lab 12: scoping and predefined functions
*/
#include<iostream>
using namespace std;


// global variable
int num = 8;

// example 2
void doSomething(){
    // global variable
    num += 20;
    cout<<"num in doSomething function: "<<num<<endl;
}

#include "lab12_functions.cpp"

int main(){
    cout<<"\n----- Example 1: local variables -----"<<endl;
    int sum = add(3,7) + add(1,6); // sum is local variable in the main()
    cout<<"The total sum in main() is \t"<<sum<<endl;

    cout<<"\n----- Example 2: global variable -----"<<endl;
    cout<<"num original value = \t"<<num<<endl;
    doSomething();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;

    cout<<"\n----- Example 3: hypotenuse -----"<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1, s2);
    printhyp(s1, s2, h);


    cout<<"\n----- Exercise -----"<<endl;
    int x1 = 4;
    int y1 = 5;
    int x2 = 7;
    int y2 = 9;

    float d = calcDistance(x1, y1, x2, y2);




    return 0;


}
