/*
 * @file   main.cpp
 * @brief  Main Program for the Zotwalk Project
 * @note   Refer to flowchart in docs folder for guidance
 * @author Marcos Rincon
 * @bug    None
 */

#include "ZotWalk.hpp"
#include <stdbool.h>

using namespace std;
using namespace zotwalk;

bool night, ped, pedwalk, veh, vehslow, vehspeed;

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

void network() {
  // Transmitter code:
  /*
  * Arduino Wireless Communication Tutorial
  *     Example 1 - Transmitter Code
  *                
  * by Dejan Nedelkovski, www.HowToMechatronics.com
  * 
  * Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
  */
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>
  RF24 radio(7, 8); // CE, CSN
  const byte address[6] = "00001";
  void setup() {
    radio.begin();
    radio.openWritingPipe(address);
    radio.setPALevel(RF24_PA_MIN);
    radio.stopListening();
  }
  void loop() {
    const char text[] = "Hello World";
    radio.write(&text, sizeof(text));
    delay(1000);
  }

  // Receiver code:
  /*
  * Arduino Wireless Communication Tutorial
  *       Example 1 - Receiver Code
  *                
  * by Dejan Nedelkovski, www.HowToMechatronics.com
  * 
  * Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
  */
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>
  RF24 radio(7, 8); // CE, CSN
  const byte address[6] = "00001";
  void setup() {
    Serial.begin(9600);
    radio.begin();
    radio.openReadingPipe(0, address);
    radio.setPALevel(RF24_PA_MIN);
    radio.startListening();
  }
  void loop() {
    if (radio.available()) {
      char text[32] = "";
      radio.read(&text, sizeof(text));
      Serial.println(text);
    }
  }  
}

void lightdetect() {
  void loop() {
    int value = analogRead(A0);
    delay(250);
  }
}

void waitdetect() {
  
}

void walkdetect() {
  
}

void vehdetect() {
  
}

void velocityapproach() {
  
}

void alert() {

}
            
void velocityexit(){
  
}

*/

