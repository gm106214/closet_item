/*
Gavin McGee
gm106214@ohio.edu
CS2401
11/05/16
*/
//Main program for the closet item project.

#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <fstream>
#include "Closet_Item.h"

using namespace std;

void menu();  //Displays an options menu.

void show_all(list<Closet_Item*>& c);  //Displays the contents of the closet

Closet_Item* load_from_file(ifstream& in);  //Loads an item from the file

void option(int o, list<Closet_Item*>& c, bool& done);  //Options function

void write_to_file(ostream& out, list<Closet_Item*>& c);  //Writes the Closet to a file

int main(){  //Main function
	list<Closet_Item*> closet;
	Closet_Item* tmp;
	int o;
	ifstream in;
	in.open("Closet.txt");
	bool done = false;
	if(in.fail()){
		cout << "No file found. File will be created at the end of the session.\n";
	}
	else{
		while(!in.eof()){
			tmp = load_from_file(in);
			closet.push_back(tmp);
		}
		in.close();
	}
	while(!done){
		menu();
		cin >> o;
		if(cin.peek() == '\n'){
			cin.ignore();
		}
		option(o, closet, done);
	}
	return 0;
}

void menu(){
	cout << "Welcome to the closet\nOptions:\n";
	cout << "(1)See all items in the closet\n(2)Add a new shirt\n(3)Add a new pair of pants\n";
	cout << "(4)Add a new coat\n(5)Add a new stuffed animal\n(6)Add new bedding\n";
	cout << "(7)Exit, saving all changes to file\n";
	cout << "Please input the option you would like to select, then hit enter: ";
}

void show_all(list<Closet_Item*>& c){
	list<Closet_Item*>::iterator it;
	for(it = c.begin(); it != c.end(); ++it){
		(*it)->output();
	}
}

Closet_Item* load_from_file(ifstream& in){
	Closet_Item* t;
	int o;
	in >> o;
	if(in.peek() == '\n'){
			in.ignore();
		}
	switch(o){
		case 1:
		t = new Shirt;
		t->finput(in);
		return t;
		break;
		
		case 2:
		t = new Pants;
		t->finput(in);
		return t;
		break;
		
		case 3:
		t = new Coat;
		t->finput(in);
		return t;
		break;
		
		case 4:
		t = new Stuffed_Animal;
		t->finput(in);
		return t;
		break;
		
		case 5:
		t = new Bedding;
		t->finput(in);
		return t;
		break;
		
		default:
		cout << "Error: Unrecognized item type in storage file. Please ensure the storage file is not corrupted. Exiting program.\n";
		exit(1);
		break;
	}
}

void option(int o, list<Closet_Item*>& c, bool& done){
	Closet_Item* t;
	ofstream out;
	switch(o){
		case 1:
		show_all(c);
		return;
		break;
		
		case 2:
		t = new Shirt;
		t->input();
		c.push_back(t);
		return;
		break;
		
		case 3:
		t = new Pants;
		t->input();
		c.push_back(t);
		return;
		break;
		
		case 4:
		t = new Coat;
		t->input();
		c.push_back(t);
		return;
		break;
		
		case 5:
		t = new Stuffed_Animal;
		t->input();
		c.push_back(t);
		return;
		break;
		
		case 6:
		t = new Bedding;
		t->input();
		c.push_back(t);
		return;
		break;
		
		case 7:
		out.open("Closet.txt");
		if(out.fail()){
			cout << "Error: File missing or corrupted. Closing program.\n";
			exit(1);
		}
		write_to_file(out, c);
		out.close();
		done = true;
		return;
		break;
		
		default:
		cout << "Error: Unrecognized option " << o << ". Please enter valid options only.\n";
		return;
		break;
	}
}

void write_to_file(ostream& out, list<Closet_Item*>& c){
	list<Closet_Item*>::iterator it;
	for(it = c.begin(); it != c.end(); it++){
		(*it)->foutput(out);
	}
}