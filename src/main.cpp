/*
 * @file main.cpp
 * @brief 
 * @author Marcos Rincon
 * @bug None
 */

#include "PedAlert.hpp"
#include <stdbool.h>

using namespace std;
using namespace pedalert;

int light, nightflag, vel;
bool ped, pedwalk, veh;

int main() {
  // Establish network connection function
  network();
  // Parent loop. Infinite main loop to ensure automatic operation.
  while(true) {
    // Detect light level function
    lightdetect();
    // If daytime, restart parent while loop
    if (light > nightflag) {
      continue
    }
    // First child while loop. To return to detect pedestrians in waiting area
    while(true) {
      // Detect for pedestrians in waiting area function
      ped = waitdetect();
      // If no pedestrian, restart parent while loop
      if (ped == 0) {
        break
      }
      // Second child while loop. To return to detect for movement across walk path
      while(true) {
        // Detect for movement across walk path function
        walkdetect();
        // If no pedestrian, restart first child while loop
        if (pedwalk == 0) {
          break
        }
        // Detect for oncoming vehicles
        vehdetect();
        // If no vehicle, restart second child while loop
        if (veh == 0) {
          continue
        }
        // stoped here
        // Measure velocity of oncoming vehicles function
        vel = velocity()
        if (vel <= 
      }
    }
  }
    
  return 0; 
}

void network() {
  
}

void lightdetect() {
  
}

void waitdetect() {
  
}

void walkdetect() {
  
}

void vehdetect() {
  
}

void velocity() {
  
}

void alert() {

}

/*
Pseudocode

Initialize

1. Function Call - Establish network connection

while(TRUE){
  2. Function Call - Light detection
  If day
    restart while loop
  Else
    continue
  
  3. Function Call - Detect for pedestrians in waiting area
  If pedestrians
    continue
  Else
    restart while loop
    
  4. Function Call - Detect for pedestrians across walkpath
  If pedestrians crossing
    continue
  Else
    Return to 3. Function Call - Detect for pedestrians in waiting area
    
  5. Function Call - Detect for oncoming vehicles
  If vehicles
    continue
  Else
    Return to 4. Function Call - Detect for pedestrians across walkpath
    
  6. Function Call - Measure velocity of oncoming car
  If slowing down or at a halt
    continue
  Else
    7. Function call - Alert protocol
    
  8. Function Call - Measure velocity of slowing or halted cars
  If vehicle speeds up
    Return to 4. Function Call - Detect for pedestrians across walkpath
  Else
    Return to 7. Function Call - Measure velocity of slowing or halted car

}

*/

