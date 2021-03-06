//---------------------------------------------------------------------------------------------------------------
// LoRa Weather Station
//
// This is a code to work with the Waziup Weather Station solution:
// <https://iot-catalogue.unparallel.pt/#iotSolution/59b1797c763cfc066f6d092b>
//
// Copyright © UNPARALLEL Innovation, Lda <http://www.unparallel.pt>
// December 2017
//---------------------------------------------------------------------------------------------------------------


// Send Period (in minutes)
#define PERIOD 10

// Weather Station pins to Adafruit Feather M0
#define RAIN 11
#define WSPEED 12
#define WDIR A0

// Include and create Weather Station object.
#include <WeatherStation.h>
WeatherStation ws(WSPEED, RAIN, WDIR, PERIOD);


// Setup
void setup()
{
  ws.init();
}

// Loop
void loop()
{
  ws.task();
}
