void readS()
{
  s1 = analogRead(A0) < f;
  s2 = analogRead(A1) < f;
  s3 = analogRead(A2) < f;
  s4 = analogRead(A3) < f;
  s5 = analogRead(A4) < f;
  s6 = analogRead(A5) < f;
  s7 = analogRead(A6) < f;
  s8 = analogRead(A7) < f;
  s9 = analogRead(A8) < f;
}

void error()
{
  if      ( s1 && !s2 && !s3 && !s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -8;}  // Sensor 1     na linha branca
  else if ( s1 &&  s2 && !s3 && !s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -7;}  // Sensor 1 e 2 na linha branca
  else if (!s1 &&  s2 && !s3 && !s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -6;}  // Sensor 2     na linha branca
  else if (!s1 &&  s2 &&  s3 && !s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -5;}  // Sensor 2 e 3 na linha branca
  else if (!s1 && !s2 &&  s3 && !s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -4;}  // Sensor 3     na linha branca
  else if (!s1 && !s2 &&  s3 &&  s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -3;}  // Sensor 3 e 4 na linha branca
  else if (!s1 && !s2 && !s3 &&  s4 && !s5 && !s6 && !s7 && !s8 && !s9) {erro = -2;}  // Sensor 4     na linha branca
  else if (!s1 && !s2 && !s3 &&  s4 &&  s5 && !s6 && !s7 && !s8 && !s9) {erro = -1;}  // Sensor 4 e 5 na linha branca
  else if (!s1 && !s2 && !s3 && !s4 &&  s5 && !s6 && !s7 && !s8 && !s9) {erro =  0;}  // Sensor 5     na linha branca        POSIÇÃO IDEAL
  else if (!s1 && !s2 && !s3 && !s4 &&  s5 &&  s6 && !s7 && !s8 && !s9) {erro =  1;}  // Sensor 5 e 6 na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 &&  s6 && !s7 && !s8 && !s9) {erro =  2;}  // Sensor 6     na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 &&  s6 &&  s7 && !s8 && !s9) {erro =  3;}  // Sensor 6 e 7 na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 && !s6 &&  s7 && !s8 && !s9) {erro =  4;}  // Sensor 7     na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 && !s6 &&  s7 &&  s8 && !s9) {erro =  5;}  // Sensor 7 e 8 na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 && !s6 && !s7 &&  s8 && !s9) {erro =  6;}  // Sensor 8     na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 && !s6 && !s7 &&  s8 &&  s9) {erro =  7;}  // Sensor 8 e 9 na linha branca
  else if (!s1 && !s2 && !s3 && !s4 && !s5 && !s6 && !s7 && !s8 &&  s9) {erro =  8;}  // Sensor 9     na linha branca
}

void errorI()
{
  if      (!s1 &&  s2 &&  s3 &&  s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -8;}  // Sensor 1     na linha branca
  else if (!s1 && !s2 &&  s3 &&  s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -7;}  // Sensor 1 e 2 na linha branca
  else if ( s1 && !s2 &&  s3 &&  s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -6;}  // Sensor 2     na linha branca
  else if ( s1 && !s2 && !s3 &&  s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -5;}  // Sensor 2 e 3 na linha branca
  else if ( s1 &&  s2 && !s3 &&  s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -4;}  // Sensor 3     na linha branca
  else if ( s1 &&  s2 && !s3 && !s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -3;}  // Sensor 3 e 4 na linha branca
  else if ( s1 &&  s2 &&  s3 && !s4 &&  s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -2;}  // Sensor 4     na linha branca
  else if ( s1 &&  s2 &&  s3 && !s4 && !s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro = -1;}  // Sensor 4 e 5 na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 && !s5 &&  s6 &&  s7 &&  s8 &&  s9) {erro =  0;}  // Sensor 5     na linha branca        POSIÇÃO IDEAL
  else if ( s1 &&  s2 &&  s3 &&  s4 && !s5 && !s6 &&  s7 &&  s8 &&  s9) {erro =  1;}  // Sensor 5 e 6 na linha brancas
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 && !s6 &&  s7 &&  s8 &&  s9) {erro =  2;}  // Sensor 6     na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 && !s6 && !s7 &&  s8 &&  s9) {erro =  3;}  // Sensor 6 e 7 na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 &&  s6 && !s7 &&  s8 &&  s9) {erro =  4;}  // Sensor 7     na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 &&  s6 && !s7 && !s8 &&  s9) {erro =  5;}  // Sensor 7 e 8 na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 &&  s6 &&  s7 && !s8 &&  s9) {erro =  6;}  // Sensor 8     na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 &&  s6 &&  s7 && !s8 && !s9) {erro =  7;}  // Sensor 8 e 9 na linha branca
  else if ( s1 &&  s2 &&  s3 &&  s4 &&  s5 &&  s6 &&  s7 &&  s8 && !s9) {erro =  8;}  // Sensor 9     na linha branca
}


void sprint ()
{
  P = erro;
  I = I + erro;
  D = erro - erro_antes;
  PID = (Kp * P) + (Kd * D) + (Ki * I);
  speedL = 100;
  speedR = 100;

  if (PID > 0) { //virar direita
    speedL = speedL + PID;
    speedR = speedR - PID;
  }

  else if (PID < 0) { //virar esquerda
    speedL = speedL + PID;
    speedR = speedR - PID;
  }

  else if (PID == 0)
  {
    speedL = speedL;
    speedR = speedR;
  }

  if(speedR < 0){
    speedR = 0;
  }
  else if(speedR > 255){
    speedR = 255;
  }
  if(speedL < 0){
    speedL = 0;
  }
  else if(speedL > 255){
    speedL = 255;
  }
  

  analogWrite(motorR, speedR);
  analogWrite(motorL, speedL);
}

void desafios(){
  //Identificar faixa de pedestres
  if((!s5 || !s4|| !s6) && s9 && s1 && s8 && s7 && (faixa == false)){
    faixa = true;;
    while(faixa == true)
    {
      faixaPedestre();
    }
  }
}
