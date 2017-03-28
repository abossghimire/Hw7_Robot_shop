#include"Robot_part.h"

class Robot_model
{
private:
	string name;
	int mode_number;
	Robot_part* torso;
	Robot_part* head;
	Robot_part* locomotor;
	Robot_part* arm;
	Robot_part* battery;
public:
	Robot_model();
	Robot_model(string, int);
	double cost();
	double max_speed();
	double max_battery_life();
	void set_torso(Torso);
	void set_head(Head);
	void set_locomotor(Locomotor);
	void set_arm(Arm);
	void set_batterry(Battery);
};
