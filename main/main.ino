void setup()
{
  // Pin declarations
  int SoilMoistureReadPin = 18;
  int WaterMeLed = 17;

  pinMode(WaterMeLed, output);  // Set GPIO pin 17 to a digital output

 // Variable declarations
  float SoilMoistureLevel = 0;

  // Constants
  #define S_TO_US 1000000;  // 1,000,000 uS in a second
  #define SleepInSeconds 3600;  // 1 hour in seconds

  uint64_t timeToSleep = (S_TO_US * SleepInSeconds);  // Set length of time to sleep for

  // Disable Wireless functionality
  esp_wifi_stop();

  // Set sleep wakeup method
  esp_sleep_enable_timer_wakeup(timeToSleep);

  // Start timer
  int millis = 0;
}

void loop()
{
  while (true)
  {
    // If analog pin value below certain level turn on LED
    if (SoilMoistureLevel < 0.5) {
      WaterMeLed = HIGH;
    }

    // Light sleep for 1 hour

    // TODO: How to update once water has been added other than hit reset button?
  }
}