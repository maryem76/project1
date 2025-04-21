#pragma once
#include "DRINKS.h"
#include<iostream>
#include<string>
using namespace std;
class JUICE : public DRINKS
{
private:
	string flavour;
	float price;
	string size;
	string fruit;
public:
	JUICE(string na, bool st, string fl, float p, string si) 
	: DRINKS(na, st) {
		flavour = fl;
		price = p;
		size = si;
		fruit = flavour;

	}
	void set_price(float p) {
		price = p;
	}
	float get_price() {
		return price;
	}
	void modify_flavour(string fl) {
		flavour = fl;
	}
	string read_flavour() {
		return flavour;
	}
	void modify_size(string si) {
		size = si;
	}
	string read_size() {
		return size;
	}
	void ingredients() {

		cout << "JUICE INGREDIENTS ARE: " <<
		"WATER  , SUGAR , " << fruit << endl;
	 cout << "YOU CAN GET ICE WITH JUICE" << endl;
	}
	void print() {
		DRINKS::print();
		cout << "JUICE FLAVOUR IS " << flavour << endl;
		if (size == "SMALL") {
			cout << "JUICE PRICE = " 
			<< price << " L.E" << endl;
		}
		else if (size == "MEDIUM") {
			cout << "JUICE PRICE = " << 
			price + (price / 2) << " L.E" << endl;
		}
		else if (size == "LARGE") {
			cout << "JUICE PRICE = " 
			<< price * 2 << " L.E" << endl;
		}
		else {
			cout << "INVALID SIZE!!!" << endl;
		}
		
	}
};

