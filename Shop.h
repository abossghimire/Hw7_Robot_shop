#include"Order.h"

class Shop
{
private:
	Order* orders[10]; // i would recoment to use vector to save all orders as pointers
	Robot_part* robot_partsp[10];
	Robot_model* robot_models[10];
	Customer* customers[10];
	Sales_associate* sales_associate[10];
public:
	Shop();
	void create_new_robot_part();
	void create_new_robot_model();
	void create_new_customer();
	void create_new_sales_associate();
	void create_new_order();
	void save(string filename);
	void open(string filename);
};
