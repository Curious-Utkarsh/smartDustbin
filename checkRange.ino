void checkRange()
{
  if(distance_Bin <= 1000)
  {
    binOpen();
    takeReading();
    displayReading();
    sendDataToSheet();
  }
  else
  {
    binClose();
  }
}
