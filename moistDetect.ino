void moistDetect()
{
  moistVal = digitalRead(moistSensor);
  if(moistVal == 0)
  {
    moistStatus = "WET-WASTE";
  }
  else
  {
    moistStatus = "DRY-WASTE";
  }
}
