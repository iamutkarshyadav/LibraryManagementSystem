#pragma once
#include <iostream>
#include <iomanip> // For setw()
using namespace std;

class Menu {
public:
    void showMenu();
};

void Menu::showMenu() {
    cout << "\n";
    cout << setw(60) << setfill('=') << "" << endl;
    cout << setw(30) << setfill(' ') << "Menu" << endl;
    cout << setw(60) << setfill('=') << "" << endl;
    cout << "\n";
    cout << setw(30) << left << "1. " << setw(28) << setfill('.') << "Add Book" << right << "." << endl;
    cout << setw(30) << left << "2. " << setw(28) << setfill('.') << "Remove Book" << right << "." << endl;
    cout << setw(30) << left << "3. " << setw(28) << setfill('.') << "Display All Books" << right << "." << endl;
    cout << setw(30) << left << "4. " << setw(28) << setfill('.') << "Search for a Book" << right << "." << endl;
    cout << setw(30) << left << "5. " << setw(28) << setfill('.') << "Issue Book" << right << "." << endl;
    cout << setw(30) << left << "6. " << setw(28) << setfill('.') << "Return Book" << right << "." << endl;
    cout << setw(30) << left << "7. " << setw(28) << setfill('.') << "Exit" << right << "." << endl;
    cout << "\n";
    cout << setw(60) << setfill('=') << "" << endl;
    cout << "\n";
}
