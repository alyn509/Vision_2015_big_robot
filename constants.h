#ifndef little_robot_constants_h
#define little_robot_constants_h

const unsigned long defaultStartSpeedDelay = 50000L;
const unsigned long pauseSpeedDelay = 50000L;
const unsigned long highPhaseDelay = 50;
const unsigned long delayBeforeTurnOff = 500;

const unsigned long slowSpeedDelay = 7000;
const unsigned long fastSpeedDelay = 200;
const unsigned long mediumSpeedDelay = 3000;
const unsigned long ultraSlowSpeedDelay = 100000L;
   
const float wheelDiameter = 12.1;
const float distanceBetweenWheels = 32; //valoare interioara
const int wheelRevolutionSteps = 200;

const int encoderResolution = 10000;

const int sensorScannerLeft = 130;
const int sensorScannerMiddle = 90;
const int sensorScannerRight = 65;
const unsigned long sensorScannerToggleInterval = 400;

#endif
