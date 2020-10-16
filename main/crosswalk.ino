void faixaPedestre()
{
  leitura();
  errorI();
  sprint();  
  if ((s5 || s4|| s6) && !s9 && !s1 && !s8 && !s7)
  {
    leitura();
    error();
    sprint();
  }
  else if (!s3 && !s4 && !s5 && !s6 && !s7){
    parar();
    delay(5000);
    analogWrite(velo_D, 150);
    analogWrite(velo_E, 150);
    delay(1000);
    faixa = false;  
  }
}
