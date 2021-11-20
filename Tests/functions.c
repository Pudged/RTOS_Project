#include <stdio.h>
#include "functions.h"

struct angle_data_t angle_data;
struct thrust_data_t thrust_data;

int set_angle(int angle_value){
    if (angle_value >= 0 && angle_value < 12){
        angle_data.angle_value = 0;
    }

    else if (angle_value >= 12 && angle_value < 24){
        angle_data.angle_value = 1;
    }

    else if (angle_value >= 24 && angle_value < 36){
        angle_data.angle_value = 2;
    }

    else if (angle_value >= 36 && angle_value <= 48){
        angle_data.angle_value = 3;
    }

    else{
        angle_data.angle_value = -1;
    }

    return angle_data.angle_value;
}

int set_thrust(int button){
    if (button == 1){
        if (thrust_data.thrust_value != 100){
            thrust_data.thrust_value += 10;
        }
    }

    else if (button == 0){
        if (thrust_data.thrust_value != 0){
            thrust_data.thrust_value -= 10;
        }
    }

    return thrust_data.thrust_value;
}

int get_thrust(){
    return thrust_data.thrust_value;
}

void reset_thrust()
{
    thrust_data.thrust_value = 0;
}