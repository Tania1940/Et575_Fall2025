/*
Tania Akthar
Homework 5 – Functions
Oct 26, 2025
*/


#include <iostream>
#include <cmath>
using namespace std;

// Program 1: Wind chill calculation
int speed() {
    int v;
    do {
        cout << "Enter wind speed (0-99): ";
        cin >> v;
        if (v <= 0 || v >= 100)
            cout << "Invalid input! Enter again.\n";
    } while (v <= 0 || v >= 100);
    return v;
}

float temp() {
    float t;
    do {
        cout << "Enter temperature (-90 to 10): ";
        cin >> t;
        if (t < -90 || t > 10)
            cout << "Invalid input! Enter again.\n";
    } while (t < -90 || t > 10);
    return t;
}

float windspeed(int v, float t) {
    float wci = 13.12 + 0.6215*t - 11.37*pow(v, 0.16) + 0.3965*t*pow(v, 0.16);
    return wci;
}

void prompt_result(float wci) {
    cout << "The wind chill index is: " << wci << endl;
}

// Program 2: Descending order entries
int collectNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

bool inOrder(int n1, int n2, int n3) {
    if (n1 > n2 && n2 > n3)
        return true;
    else
        return false;
}

void runProgram(int n1, int n2, int n3, bool desc_order) {
    if (desc_order)
        cout << "The numbers are in descending order." << endl;
    else
        cout << "The numbers are NOT in descending order." << endl;

    char choice;
    cout << "Do you want to run again? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int a = collectNumber();
        int b = collectNumber();
        int c = collectNumber();
        bool new_order = inOrder(a,b,c);
        runProgram(a,b,c,new_order);
    }
}

// Main functions

int main() {

    cout << "\n----- Program 1: Wind Chill -----" << endl;
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));

    cout << "\n----- Program 2: Descending Order -----" << endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    runProgram(num1,num2,num3,desc_order);



    return 0;
}