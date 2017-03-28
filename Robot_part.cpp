#include"Robot_part.h"

Robot_part::Robot_part() {}

int Robot_part::get_model_number()
{
	return model_number;
}

double Robot_part::get_cost()
{
	return cost;
}

string Robot_part::get_name()
{
	return name;
}

string Robot_part::get_description()
{
	return description;

}
string Robot_part::get_image_filename()
{
	return image_filename;
}

void Robot_part::set_model_number(int m)
{
	model_number = m;
}

void Robot_part::set_cost(double c)
{
	cost = c;
}
void Robot_part::set_name(string n)
{
	name = n;
}

void Robot_part::set_description(string d)
{
	description = d;
}

void Robot_part::set_image_filename(string filename)
{
	image_filename = filename;
}

Head::Head() {}
Head::Head(double p) : power(p) {}

double Head::getPower()
{
	return power;
}

void Head::getPower(double p)
{
	power = p;
}

Locomotor::Locomotor() {}
Locomotor::Locomotor(double p) : max_power(p) {}

double Locomotor::getMax_power()
{
	return max_power;
}

void Locomotor::setMax_power(double m)
{
	max_power = m;
}


Torso::Torso() {}
Torso::Torso(int bc, int ma) : battery_compartments(bc), max_arms(ma) {}
int Torso::get_battery_compartments()
{
	return battery_compartments;
}

int Torso::get_max_arms()
{
	return max_arms;
}

void Torso::set_battery_compartments(int bc)
{
	battery_compartments = bc;
}

void Torso::set_max_arms(int ma)
{
	max_arms = ma;
}

Battery::Battery() {}
Battery::Battery(double pa, double me) : power_available(pa), max_energy(me) {}

double Battery::get_power_available()
{
	return power_available;
}
double Battery::get_max_energy()
{
	return max_energy;
}
void Battery::set_power_available(double pa)
{
	power_available = pa;
}
void Battery::set_max_energy(double me)
{
	max_energy = me;
}

Arm::Arm() {}
Arm::Arm(double mp) : max_power(mp) {}

double Arm::detMax_power()
{
	return max_power;
}

void Arm::setMax_Power(double mp)
{
	max_power = mp;
}