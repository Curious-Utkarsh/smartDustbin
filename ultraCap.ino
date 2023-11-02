void ultraCap()
{
  digitalWrite(trigCap,LOW);
  delayMicroseconds(10);
  digitalWrite(trigCap,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigCap,LOW);
  delayMicroseconds(10);

  ping_Travel_Time_Cap = pulseIn(echoCap,HIGH);
  distance_Cap = int((ping_Travel_Time_Cap * 0.034 / 2)*100); // Gives distance in CM
  //Serial.println(distance_Cap);
}
