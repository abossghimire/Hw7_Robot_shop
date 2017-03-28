#include<string>
//comment test
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