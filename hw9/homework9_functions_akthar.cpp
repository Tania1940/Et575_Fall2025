/*
Tania Akthar -- Homework 9
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int arraysize(){
    int size;
    cout<<"Enter an array size between 1 and 100: ";
    cin>>size;

    while(size < 1 || size > 100){
        cout<<"Invalid input. Enter an array size between 1 and 100: ";
        cin>>size;
    }
    return size;
}

void randPopulate(int arr[], int sizearray){
    for(int i = 0; i < sizearray; i++){
        arr[i] = (rand() % 18) + 12; 
    }
}

void print(int arr[], int sizearray){
    for(int i = 0; i < sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void reverse(int arr[], int sizearray){
    int start = 0;
    int end = sizearray - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}