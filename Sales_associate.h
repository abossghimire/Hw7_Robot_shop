#include<string>

using std::string;

class Sales_associate
{
private:
	string name;
	int employee_number;
public:
	Sales_associate();
	Sales_associate(string, int);
	string getName();
	int employee_number();
	void setName(string);
	void setEmployee_number(int);
};
