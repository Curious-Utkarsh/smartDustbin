void binOpen()
{
  myServo.write(15); //Bin Open
  delay(1000);
  binStatus = true;
}
