/**
 * @file main.hpp
 * @brief Contains all Constants and Standard Functionality
 * @author Marcos Rincon
 * @bug 
 */

#pragma once

#include <string>
#include <array>
#include <vector>

// Pin Assignment
#define PHOTORESISTOR_PIN 25 
#define RELAY_PIN1 5 
#define RELAY_PIN2 6
#define NETWORK_CE = 7
#define NETWORK_CSN = 8
// Photoresistor Analog Night Value
#define NIGHT_VALUE 500
// Address of Network Communication Channel
#define BYTE_ADDRESS 00001
// Radar Scan Interval (Used in radarscan() for loop)
#define START_SCAN = 0;
#define END_SCAN = 1000;
// Minimum Walking Speed of Pedestrian Value
#define MIN_WALK_SPEED 2
// Minimum Car Speed Value
#define MIN_CAR_SPEED 15

