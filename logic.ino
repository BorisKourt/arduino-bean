// Hi!
// ---
//   Place the code for your workshop prototype in this tab. 
//   Feel free to make additional functions as needed.
// ---

// Global Variables
static int8_t temp = 0;

// This runs once,
// Treat as arduino setup. 
void logicSetup() {
  
}

// This runs continuously until powered off.
// Treat as arduino loop.
void logicLoop() {
  
  int8_t newTemp = Bean.getTemperature(); // in Celcius
  
  AccelerationReading accel = {0, 0, 0};
  accel = Bean.getAcceleration();
  
  long x = accel.xAxis;
  long y = accel.yAxis;
  long z = accel.zAxis;
  
  
  set(1, x);
  set(2, y);
  set(3, z);
  
  long newColor = map(z, -400, 400, 0, 255);
  
}
