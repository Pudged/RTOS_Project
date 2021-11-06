#include <stdio.h>
#include "functions.h"

struct angle_data_t angle_data;

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