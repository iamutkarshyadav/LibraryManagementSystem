#pragma once
#include "Menu.h"
#include "Books.h"
#include <iostream>
#include <limits>
#include <cstdlib> 

using namespace std;

class Option : public Menu {
public:
    int choice;
    void getOptions();
    void showMenuOptions();
};

void Option::getOptions() {
    cout << "Enter your choice: ";
    while (!(cin >> choice) || choice < 1 || choice > 7) {
        cout << "Invalid input. Please enter a number between 1 and 7: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void Option::showMenuOptions() {
    if (choice == 1) {
        Books book;
       system("cls"); 
        book.getData();
        
    }
}
