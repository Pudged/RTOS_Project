#include <stdlib.h>
#include <stdio.h>
#include "ctest.h"
#include "functions.h"

// Note: the name in the first parameter slot must match all tests in that group

/*
 * First Test Set (Angle)
 */
CTEST_DATA(angle) {
    int result;
};

CTEST_SETUP(angle) {
    // int angle_value[] = {-1, 25};
    // data->size = sizeof(execution) / sizeof(execution[0]);
    // init(data->task, execution, data->size);
    // first_come_first_served(data->task, data->size);

    data->result = 0;
}

CTEST2(angle, test_angle_no_input) {
    data->result = set_angle(-1);
    int expResult = -1;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(angle, test_angle_far_left){
    data->result = set_angle(6);
    int expResult = 0;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(angle, test_angle_left){
    data->result = set_angle(18);
    int expResult = 1;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(angle, test_angle_right){
    data->result = set_angle(30);
    int expResult = 2;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(angle, test_angle_far_right){
    data->result = set_angle(42);
    int expResult = 3;

    ASSERT_EQUAL(expResult, data->result);
}

/*
 * Second Test Set (Thrust)
 */
CTEST_DATA(thrust) {
    // struct task_t task[3];
    // int size;

    int result;
};

CTEST_SETUP(thrust) {
    // int angle_value[] = {-1, 25};
    // data->size = sizeof(execution) / sizeof(execution[0]);
    // init(data->task, execution, data->size);
    // first_come_first_served(data->task, data->size);
    data->result = 0;
}

CTEST2(thrust, thrust_default){
    reset_thrust();
    data->result = get_thrust();
    int expResult = 0;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(thrust, thrust_decrement_min_value){
    reset_thrust();
    int button = 0;
    set_thrust(button);

    data->result = get_thrust();
    int expResult = 0;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(thrust, thrust_increment){
    reset_thrust();
    int button = 1;
    set_thrust(button);

    data->result = get_thrust();
    int expResult = 10;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(thrust, thrust_increment_decrement){
    reset_thrust();
    int button = 1;
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    button = 0;
    set_thrust(button);

    data->result = get_thrust();
    int expResult = 20;

    ASSERT_EQUAL(expResult, data->result);
}

CTEST2(thrust, thrust_increment_max_value){
    reset_thrust();
    int button = 1;
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);
    set_thrust(button);

    data->result = get_thrust();
    int expResult = 100;

    ASSERT_EQUAL(expResult, data->result);
}

/*
 * Third Test Set (Physics Model)
 */
// CTEST_DATA(physics) {
//     // struct task_t task[3];
//     // int size;

//     int result;
// };

// CTEST_SETUP(physics) {
//     // int angle_value[] = {-1, 25};
//     // data->size = sizeof(execution) / sizeof(execution[0]);
//     // init(data->task, execution, data->size);
//     // first_come_first_served(data->task, data->size);
//     data->result = 0;
// }

// CTEST2(physics, test_physics_velocity_no_thrust){
//     int thrust = 0;
//     velocity_update(thrust);
//     velocity_update(thrust);
//     velocity_update(thrust);
//     int time = 3;

//     data->result = get_velocity();
//     int expResult = time * 10; // gravitational constant using 10 as example
//     ASSERT_EQUAL(expResult, data->result);
// }

// CTEST2(physics, test_physics_velocity_50_thrust){
//     int thrust = 50;
//     velocity_update(thrust);
//     velocity_update(thrust);
//     velocity_update(thrust);
//     int time = 3;

//     data->result = get_velocity();
//     int expResult = time * 10 * 50; // still need to change to reflect addition of thrust
//     ASSERT_EQUAL(expResult, data->result);
// }
