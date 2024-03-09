#pragma once
#include"Menu.h"
using namespace std; 
class Option : public Menu {
public:
    int options; 
    void getOptions();
};
void Option::getOptions() {
    cin >> options; 
    
}