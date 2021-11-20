#ifndef _FUNCTIONS_
#define _FUNCTIONS_

struct angle_data_t
{
    int angle_value;
};

struct thrust_data_t
{
    int thrust_value;
};

int set_angle(int cap_value);
int set_thrust(int button);
int get_thrust();
void reset_thrust();

#endif