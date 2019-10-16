#include <DS3231.h>  // Real time clock library

DS3231 rtc; // sets the clock object
RTCDateTime dt; // function to get the time from the RTC
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  rtc.begin(); // Initialize DS3231


}

void loop() {
      Serial.begin(9600);
     // blinkTest(); 
      getTimeClock();
      



  delay(1000);

}
