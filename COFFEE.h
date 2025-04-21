#pragma once
#include "DRINKS.h"
#include<iostream>
#include<string>
using namespace std;
class COFFEE:public DRINKS
{
private:
	float price;
	string type;
public:
	COFFEE(string na, bool st, float pr, string ty) :DRINKS(na, st) {
		price = pr;
		type = ty;
	}
	void set_price(float pr) {
		price = pr;
	}
	float get_price() {
		return price;
	}
	void modify_type(string ty) {
		type = ty;
	}
	string read_type() {
		return type;
	}
	void ingredients() {
		cout << "COFFEE'S MAIN INGREDIENTS ARE: " << 
		"WATER , COFFEE , SUGAR " << endl;
		cout << "YOU CAN GET EXTRA SUGAR IF TOU WANT" << endl;
	
	}
	void print() {
		DRINKS::print();
		cout << "COFFEE PRICE = " << price << endl;
		cout << "COFFEE TYPE IS " << type << endl;
		
	
	}
};

