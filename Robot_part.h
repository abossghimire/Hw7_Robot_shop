#include<string>

using std::string;

class Robot_part
{
protected:
	string name;
	int model_number;
	double cost;
	string description;
	string image_filename;
public:
	Robot_part();
	int get_model_number();
	double get_cost();
	string get_name();
	string get_description();
	string get_image_filename();
	void set_model_number(int);
	void set_cost(double);
	void set_name(string);
	void set_description(string);
	void set_image_filename(string);
};

class Head : public Robot_part
{
private:
	double power;
public:
	Head();
	Head(double);
	double getPower();
	void getPower(double);
};

class Locomotor : public Robot_part
{
private:
	double max_power;
public:
	Locomotor();
	Locomotor(double);
	double getMax_power();
	void setMax_power(double);
};

class Torso : public Robot_part
{
private:
	int battery_compartments;
	int max_arms;
public:
	Torso();
	Torso(int, int);
	int get_battery_compartments();
	int get_max_arms();
	void set_battery_compartments(int);
	void set_max_arms(int);
};

class Battery : public Robot_part
{
private:
	double power_available;
	double max_energy;
public:
	Battery();
	Battery(double, double);
	double get_power_available();
	double get_max_energy();
	void set_power_available(double);
	void set_max_energy(double);
};

class Arm : public Robot_part
{
private:
	double max_power;
public:
	Arm();
	Arm(double);
	double detMax_power();
	void setMax_Power(double);
};
