#include"Robot_model.h"

Robot_model::Robot_model() {}
Robot_model::Robot_model(string n, int num) : name(n), mode_number(num) {}

double Robot_model::cost()
{
	//
	// TO DO
	//
}

double Robot_model::max_speed()
{
	//
	// TO DO
	//
}
double Robot_model::max_battery_life()
{
	//
	// TO DO
	//
}

void Robot_model::set_torso(Torso t)
{
	torso = new Torso(t);
}
void Robot_model::set_head(Head h)
{
	head = new Head(h);
}
void Robot_model::set_locomotor(Locomotor l)
{
	locomotor = new Locomotor(l);
}
void Robot_model::set_arm(Arm a)
{
	arm = new Arm(a);
}
void Robot_model::set_batterry(Battery b)
{
	battery = new Battery(b);
}