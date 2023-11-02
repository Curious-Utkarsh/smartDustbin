void ultraBin()
{
  digitalWrite(trigBin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigBin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigBin,LOW);
  delayMicroseconds(10);

  ping_Travel_Time_Bin = pulseIn(echoBin,HIGH);
  distance_Bin = int((ping_Travel_Time_Bin * 0.034 / 2)*100); // Gives distance in CM
  //Serial.println(distance_Bin);
}
