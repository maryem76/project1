#pragma once
#include<iostream>
#include<string>
	using namespace std;
	class DRINKS {
	private:
		string name;
		bool ishot;
	public:
		DRINKS() {
			name = "ISN'T FOUND";
			ishot = true;
		}
		DRINKS(string na, bool st) {
			name = na;
			ishot = st;
		}
		void modify_name(string na) {
			name = na;
		}
		string read_name() {
			return name;
		}
		void set_state(bool st) {
			ishot = st;
		}
		bool get_state() {
			return ishot;
		}
		virtual void ingredients() = 0;
		void print() {
			cout << "DRINK NAME IS  " << name << endl;
			if (ishot == true) {
				cout << "BE CAREFUL!!THIS DRINK IS HOT" << endl;
			}
			else {
				cout << "THIS DRINK IS COLD!! ENJOY " << endl;
			}
		}
	};


