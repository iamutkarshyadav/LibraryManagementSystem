#include"Menu.h"
#include"Selection.h"
int main() {

	Menu m1; 
	m1.showMenu();
	Option op;
	op.getOptions();
	op.showMenuOptions();
	return 0;
}