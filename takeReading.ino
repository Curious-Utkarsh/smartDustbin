void takeReading()
{
  if(binStatus == true)
  {
    binClose();
    moistDetect();
    gasDetect();
    ultraCap();
    checkLevel();
  }
}
