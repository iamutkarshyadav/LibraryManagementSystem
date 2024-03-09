#pragma once
#include<iostream>
using namespace std; 
class Students{
public: 
	char name[100];
	int studentID;
	void getData();
	void showData();
};
void Students::getData() {
	cout << "Enter The name of the student" << endl;
	cin.getline(name, 100);
	cout << "Enter the Student ID" << endl;
	cin >> studentID;
}
void Students::showData() {
	cout << "Name of the student" << name << endl;
	cout << "Student id of" << name << "is : " << studentID << endl;
}