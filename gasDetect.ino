void gasDetect()
{
  gasVal = digitalRead(gasSensor);
  if(gasVal == 0)
  {
    gasStatus = "TOXIC-GAS";
  }
  else
  {
    gasStatus = "NON-TOXIC-GAS";
  }
}
