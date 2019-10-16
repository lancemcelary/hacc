void blinkTest()
{
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);  
}

void setTimeClock(){
     // run this code in the setup function to update / correct the time
     // Manual (YYYY, MM, DD, HH, II, SS
     rtc.setDateTime(2019, 10, 14, 14, 36, 10);
}

void getTimeClock(){
  // For leading zero look to DS3231_dateformat example
  dt = rtc.getDateTime();
  Serial.print(dt.year);   Serial.print("-");
  Serial.print(dt.month);  Serial.print("-");
  Serial.print(dt.day);    Serial.print(" ");
  Serial.print(dt.hour);   Serial.print(":");
  Serial.print(dt.minute); Serial.print(":");
  Serial.print(dt.second); Serial.println("");
}
