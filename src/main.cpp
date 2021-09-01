/**
 * @file main.cpp
 * @brief Contains the Global Entry Point
 * @author Marcos Rincon
 * @bug None
 */

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



// Functions
1. Establish network connection
2. Light detection
3. Detect for pedestrians in waiting area
4. Detect for pedestrians across walkpath
5. Detect for oncoming vehicles
6. Measure velocity of oncoming cars
7. Alert protocol
8. Measure velocity of slowing or halted cars

*/

