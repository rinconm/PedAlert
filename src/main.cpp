/*
 * @file   main.cpp
 * @brief  Main Program for the Zotwalk Project
 * @note   Refer to flowchart in docs folder for guidance
 * @author Marcos Rincon
 * @bug    None
 */

// Header Files
#include "ZotWalk.hpp"
#include <stdbool.h>

// Namespace Specifications
using namespace std;
using namespace zotwalk;

// Boolean Decision Variables
bool night, 
     ped, 
     pedwalk, 
     veh, 
     vehslow, 
     vehspeed;

/**
 * @brief Main function for operation
 * @param argc Number of Arguments from CLI
 * @param argv Strings from the CLI
 * @returns int exit code
*/
int main() {
  // Establish network connection function
  network();
  // Parent infinite loop to ensure automatic operation. Begins with: Sense daylight
  while(true) {
    // Detect light level function
    night = lightdetect();
    // If not night-time, return to parent while loop: Sense daylight
    if (night = 0) {
      continue
    }
    // First child while loop. Begins with: Detect pedestrians in waiting area
    while(true) {
      // Detect for pedestrians in waiting area function
      ped = waitdetect();
      // If no pedestrian, return to parent while loop: Sense daylight
      if (ped == 0) {
        break
      }
      // Second child while loop. Begins with: Detect for movement across walk path
      while(true) {
        // Detect for movement across walk path function
        pedwalk = walkdetect();
        // If no pedestrian, return to first child while loop: Detect pedestrians
        // in waiting area
        if (pedwalk == 0) {
          break
        }
        // Detect for oncoming vehicles
        veh = vehdetect();
        // If no vehicle, restart to second child while loop: Detect for movement
        // across walk path
        if (veh == 0) {
          continue
        }
        // Measure velocity of oncoming vehicles function
        vehslow = velocityapproach()
        // If vehicle doesn't slow down or is stopped, initiate alert protocol and
        // return to second child while loop: Detect for movement across walk path
        if (vehslow == 0) {
          alert();
          continue
        }
        // Third child while loop. Begins with continue measuring velocity
        while(true) {
          // Continue measuring velocity as vehicles exit their waiting period
          vehspeed = vehvelocityexit();
          // If vehicle speeds up, return to second child while loop: Detect for
          // movement across walk path
          if (vehspeed == 1) {
            break
          }
        }
      }
    }
  }
    
  return 0; 
}
