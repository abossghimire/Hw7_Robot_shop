#include<iostream>
#include<string>
#include<string>
#include"View.h"


using std::string;

class Customer
{
private:
	string name;
	int customer_number;
	string phone_number;
	string email_number;
public:
	Customer();
	int get_customer_number();
	string get_name();
	string get_phone_number();
	string get_email_number();
	void set_customer_number(string);
	void set_name(string);
	void set_phone_number(string);
	void set_email_number(string);
};




void View::show_menu()
{
    cout << endl << endl;
    cout << "==========" << endl;
    cout << "Main Menu" << endl;
    cout << "==========" << endl;
    cout << endl;
    cout << "(1) ---Product Manager----" << endl;
    cout << "(2) ---Beloved Customer---" << endl;
    cout << "(3) ---Sales Associate---" << endl;
    cout << "(4) ----Pointed-Haired Boss---" << endl;
    cout << "(0) Exit" << endl;
}

