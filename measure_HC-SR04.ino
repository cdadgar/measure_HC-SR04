/*
 * HC-SR04 - Ultrasonic Sonar Distance Sensor 
 *  
 * measures distance 2cm to 400cm
 * 
 * Vcc - 5v  (NOT 3.3V capable) 
 * Trig - 
 * Echo - 
 * Gnd - ground
 *  
 * library: https://github.com/Martinsos/arduino-lib-hc-sr04
 * learning: http://www.esp8266learning.com/wemos-mini-hc-sr04-ultrasonic-sensor.php
 */
 
 
#include <HCSR04.h>


#define TRIG   12  // D6
#define ECHO   14  // D5
UltraSonicDistanceSensor distanceSensor(TRIG, ECHO);


void setup () {
  // start serial port
  Serial.begin(115200);
  Serial.print(F("\n\n HC-SR04 - Ultrasonic Sonar Distance Sensor test\n\n"));
}


void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    Serial.println(distanceSensor.measureDistanceCm());
    delay(500);
}
