#pragma once
#include<iostream>
using namespace std;

class Books {
public:
    char name[100];
    int isbnNumber;

    void getData();
    void showData();
};

void Books::getData() {
    cout << "Enter the name of the book: "<<endl;
    cin.getline(name, 100);

    cout << "Enter the ISBN number of the book: "<<endl;
    cin >> isbnNumber;
    cin.ignore(); 
}

void Books::showData() {
    cout << "Name of the Book is : \n\n"<<name<<endl;
    cout << "ISBN Number of" << name << "is \n\n" << isbnNumber<<endl;
}
