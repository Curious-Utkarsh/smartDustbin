void binClose()
{
  if(binStatus == true)
  {
    delay(4000);
    myServo.write(100); //Bin Close
    delay(500);
    binStatus = false;
  }
}
