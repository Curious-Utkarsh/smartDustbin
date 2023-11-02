void displayReading()
{
  Serial.println("READING ARE AS FOLLOWS\n");
  Serial.println("DISTANCE_BIN = "+String(distance_Bin));
  Serial.println("BIN_STATUS = "+String(binStatus));
  Serial.println("MOIST STATUS = "+String(moistStatus));
  Serial.println("GAS STATUS = "+String(gasStatus));
  Serial.println("DISTANCE_CAP = "+String(distance_Cap));
  Serial.println("BIN LEVEL = "+String(binLvl));
  Serial.println("BIN_STATUS = "+String(binStatus));
}
