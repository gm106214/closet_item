/*
Gavin McGee
gm106214@ohio.edu
CS2401
10/31/16
*/
//Contains function implimentations for Closet_Item and its child classes.

#include <iostream>
#include <cstdlib>
#include <string>
#include "Closet_Item.h"

using namespace std;

Shirt::Shirt(){  //Default Constructor
	shirt_type = "***";
	main_color = "***";
	material = "***";
	size = "***";
	shirt_message = "***";
}

void Shirt::input(){  //Input function
	string tmp;
	cout << "Please input the type of shirt, and hit enter: ";
	getline(cin, tmp);
	shirt_type = tmp;
	cout << "Please input the shirt's main color, and hit enter: ";
	getline(cin, tmp);
	main_color = tmp;
	cout << "Please input the material the shirt is made from, and hit enter: ";
	getline(cin, tmp);
	material = tmp;
	cout << "Please input the size of the shirt, and hit enter: ";
	getline(cin, tmp);
	size = tmp;
	cout << "Please input the message on the shirt, and hit enter. If there is none, input 'None': ";
	getline(cin, tmp);
	shirt_message = tmp;
}

void Shirt::output(){  //Output function
	cout << "Type of shirt: " << shirt_type << endl;
	cout << "Main color of the shirt: " << main_color << endl;
	cout << "Material: " << material << endl;
	cout << "Size: " << size << endl;
	cout << "Message: " << shirt_message << endl << endl;
}

void Shirt::finput(istream& in){  //Input from file function
	string tmp;
	getline(in, tmp);
	shirt_type = tmp;
	getline(in, tmp);
	main_color = tmp;
	getline(in, tmp);
	material = tmp;
	getline(in, tmp);
	size = tmp;
	getline(in, tmp);
	shirt_message = tmp;
}

void Shirt::foutput(ostream& out){  //Output from file function
	out << 1 << endl;
	out << shirt_type << endl;
	out << main_color << endl;
	out << material << endl;
	out << size << endl;
	out << shirt_message << endl;
}
	
Pants::Pants(){  //Default Constructor
	pants_type = "***";
	main_color = "***";
	material = "***";
	size = "***";
}

void Pants::input(){  //Input function
	string tmp;
	cout << "Please input the type of pants, and hit enter: ";
	getline(cin, tmp);
	pants_type = tmp;
	cout << "Please input the main color of the pants, and hit enter: ";
	getline(cin, tmp);
	main_color = tmp;
	cout << "Please input the material the pants are made from, and hit enter: ";
	getline(cin, tmp);
	material = tmp;
	cout << "Please input the size of the pants, in the form waistsizexinseam, and hit enter: ";
	getline(cin, tmp);
	size = tmp;
}

void Pants::output(){  //Output function
	cout << "Type of pants: " << pants_type << endl;
	cout << "Main color of the pants: " << main_color << endl;
	cout << "Material: " << material << endl;
	cout << "Size: " << size << endl << endl;
}

void Pants::finput(istream& in){  //Input from file function
	string tmp;
	getline(in, tmp);
	pants_type = tmp;
	getline(in, tmp);
	main_color = tmp;
	getline(in, tmp);
	material = tmp;
	getline(in, tmp);
	size = tmp;
}

void Pants::foutput(ostream& out){  //Output from file function
	out << 2 << endl;
	out << pants_type << endl;
	out << main_color << endl;
	out << material << endl;
	out << size << endl;
}

Coat::Coat(){  //Default Constructor
	coat_type = "***";
	main_color = "***";
	material = "***";
	size = "***";
}

void Coat::input(){  //Input function
	string tmp;
	cout << "Please input the type of coat, and hit enter: ";
	getline(cin, tmp);
	coat_type = tmp;
	cout << "Please input the coat's main color, and hit enter: ";
	getline(cin, tmp);
	main_color = tmp;
	cout << "Please input the material the coat is made from, and hit enter: ";
	getline(cin, tmp);
	material = tmp;
	cout << "Please input the size of the coat, and hit enter: ";
	getline(cin, tmp);
	size = tmp;
}

void Coat::output(){  //Output function
	cout << "Type of coat: " << coat_type << endl;
	cout << "Main color of the coat: " << main_color << endl;
	cout << "Material: " << material << endl;
	cout << "Size: " << size << endl << endl;
}

void Coat::finput(istream& in){  //Input from file function
	string tmp;
	getline(in, tmp);
	coat_type = tmp;
	getline(in, tmp);
	main_color = tmp;
	getline(in, tmp);
	material = tmp;
	getline(in, tmp);
	size = tmp;
}

void Coat::foutput(ostream& out){  //Output from file function
	out << 3 << endl;
	out << coat_type << endl;
	out << main_color << endl;
	out << material << endl;
	out << size << endl;
}

Stuffed_Animal::Stuffed_Animal(){  //Default Constructor
	animal_type = "***";
	main_color = "***";
}

void Stuffed_Animal::input(){  //Input function
	string tmp;
	cout << "Please input the type of animal, and hit enter: ";
	getline(cin, tmp);
	animal_type = tmp;
	cout << "Please input the stuffed animal's main color, and hit enter: ";
	getline(cin, tmp);
	main_color = tmp;
}

void Stuffed_Animal::output(){  //Output function
	cout << "Type of stuffed animal: " << animal_type << endl;
	cout << "Main color of the stuffed animal: " << main_color << endl << endl;
}

void Stuffed_Animal::finput(istream& in){  //Input from file function
	string tmp;
	getline(in, tmp);
	animal_type = tmp;
	getline(in, tmp);
	main_color = tmp;
}

void Stuffed_Animal::foutput(ostream& out){  //Output from file function
	out << 4 << endl;
	out << animal_type << endl;
	out << main_color << endl;
}

Bedding::Bedding(){  //Default Constructor
	bedding_type = "***";
	main_color = "***";
	material = "***";
}

void Bedding::input(){  //Input function
	string tmp;
	cout << "Please input the type of bedding, and hit enter: ";
	getline(cin, tmp);
	bedding_type = tmp;
	cout << "Please input the bedding's main color, and hit enter: ";
	getline(cin, tmp);
	main_color = tmp;
	cout << "Please input the material the bedding is made from, and hit enter: ";
	getline(cin, tmp);
	material = tmp;
}

void Bedding::output(){  //Output function
	cout << "Type of bedding: " << bedding_type << endl;
	cout << "Main color of the bedding: " << main_color << endl;
	cout << "Material: " << material << endl << endl;
}

void Bedding::finput(istream& in){  //Input from file function
	string tmp;
	getline(in, tmp);
	bedding_type = tmp;
	getline(in, tmp);
	main_color = tmp;
	getline(in, tmp);
	material = tmp;
}

void Bedding::foutput(ostream& out){  //Output from file function
	out << 5 << endl;
	out << bedding_type << endl;
	out << main_color << endl;
	out << material << endl;
}