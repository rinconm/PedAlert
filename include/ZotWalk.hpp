/*
 * @file ZotWalk.hpp
 * @brief Holds the ZotWalk class with all sensors and such
 * @author Marcos Rincon
 * @bug None
 */

/* 
 * @mainpage UCI ZotWalk 2021
 * @author Marcos Rincon
 * 
 * This is the ZotWalk project designed for the EngiTank competition. 
 *
 * The goal of this project is to create a night-time system designed to reduce pedestrian
 * casualties due to inattentive drivers. The system uses doppler radar sensors to detect
 * oncoming vehicles and pedestrians at a crosswalk. When pedestrians are crossing, radar
 * sensors will measure the velocity of oncoming cars, and will execute an alert protocol
 * if vehicles do not slow down as they approach the crosswalk. The alert protocol consists
 * of a red LED lamp, a siren sound, and projection of a warning signal on the road to
 * alert both the driver and pedestrian.
 * 
 * The Project is advised by Dr. Christine King
 * 
 */

/* 
 * @page Contributions
 * @details Thanks to the following GitHub Users for creating code that is used in this Project.
 * 
 * Guidance: orionserup
 * 
 * For OpenCV: The OpenCV team (opencv).
 */

#pragma once

#include "ObjectDetection.hpp"


/*
* @brief namespace for this project
*/
namespace zotwalk{

/*
* @brief The Complete System Class
*/
class ZotWalk{

public:

  /**
  * @brief Constructs a system object
  */
  ZotWalk();
  
  /**
  * @brief Starts all Sensors and Probes them all
  */
  void Setup();

  /**
  * @brief Starts running autonomously
  */
  void Run();


private:


};



}
