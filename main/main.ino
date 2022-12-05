#include <esp_wifi.h>

// Constant declarations
#define S_TO_US 1000000  // 1,000,000 uS in a second
#define SleepInSeconds 3600 // 1 hour in seconds

// Variable declarations
float SoilMoistureLevel = 0;
uint64_t timeToSleep = (uint64_t(S_TO_US) * uint64_t(SleepInSeconds));  // Set length of time to sleep for and cast both defines to uin64_t to prevent overflows

// Pin declarations
int SoilMoistureReadPin = 18;
int WaterMeLedPin = 17;

void setup()
{
  // Declare LED pin
  pinMode(WaterMeLedPin, OUTPUT);  // Set GPIO pin 17 to a digital output

  // Disable Wireless functionality
  esp_wifi_stop();

  // Set sleep wakeup method
  esp_sleep_enable_timer_wakeup(timeToSleep);
}

void loop()
{
  while (true)
  {
    //  Check soil moisture level from the analog pin value
    SoilMoistureLevel = analogRead(SoilMoistureReadPin);

    // If soil moisutre below certain level turn on LED
    if (SoilMoistureLevel < 0.5)  // TODO: Find better threshold
    {
      digitalWrite(WaterMeLedPin,HIGH);
    } else  // Else turn off LED
    {
      digitalWrite(WaterMeLedPin,LOW);
    }

    // Wake up in one hour
    esp_light_sleep_start();

    //TODO: Add an external interrupt to wake when moisture reaches certain level (e.g been watered)
  }
}