#include<string>
#include"Customer.h"
#include"Sales_associate.h"
#include"Robot_model.h"

using std::string;

class Order
{
private:
	int order_number;
	string date;
	Customer customer;
	Sales_associate sale_associate;
	Robot_model robot_model;
	int Status;
public:
	Order();
	double robot_cost();
	double extended_price();
	int get_order_number();
	string get_date();
	Customer get_customer();
	Sales_associate get_sale_associate();
	Robot_model get_robot_model();
	int get_Status();

	void set_order_number(int);
	void set_date(string);
	void set_customer(Customer);
	void set_sale_associate(Sales_associate);
	void set_robot_model(Robot_model);
	void set_Status(int);

};
