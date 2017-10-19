/*
Gavin McGee
gm106214@ohio.edu
CS2401
10/31/16
*/
//Header for Closet_Item and its child classes.

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Closet_Item{  //Abstract class
	public:
	virtual void input() = 0;
	virtual void output() = 0;
	virtual void finput(istream& in) = 0;
	virtual void foutput(ostream& out) = 0;
	
	private:
};

class Shirt
:public Closet_Item{
	public:
	Shirt();  //Default Constructor
	void input();  //Input function
	void output();  //Output function
	void finput(istream& in);  //Input from file function
	void foutput(ostream& out);  //Output from file function
	
	private:
	string shirt_type;
	string main_color;
	string material;
	string size;
	string shirt_message;
};

class Pants
:public Closet_Item{
	public:
	Pants();  //Default Constructor
	void input();  //Input function
	void output();  //Output function
	void finput(istream& in);  //Input from file function
	void foutput(ostream& out);  //Output from file function
	
	private:
	string pants_type;
	string main_color;
	string material;
	string size;
};

class Coat
:public Closet_Item{
	public:
	Coat();  //Default Constructor
	void input();  //Input function
	void output();  //Output function
	void finput(istream& in);  //Input from file function
	void foutput(ostream& out);  //Output from file function
	
	private:
	string coat_type;
	string main_color;
	string material;
	string size;
};

class Stuffed_Animal
:public Closet_Item{
	public:
	Stuffed_Animal();  //Default Constructor
	void input();  //Input function
	void output();  //Output function
	void finput(istream& in);  //Input from file function
	void foutput(ostream& out);  //Output from file function
	
	private:
	string animal_type;
	string main_color;
};

class Bedding
:public Closet_Item{
	public:
	Bedding();  //Default Constructor
	void input();  //Input function
	void output();  //Output function
	void finput(istream& in);  //Input from file function
	void foutput(ostream& out);  //Output from file function
	
	private:
	string bedding_type;
	string main_color;
	string material;
};