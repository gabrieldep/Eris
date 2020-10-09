//sensores
boolean s1;
boolean s2;
boolean s3;
boolean s4;
boolean s5;
boolean s6;
boolean s7;
boolean s8;
boolean s9;

//Motores
int motorR = 9;
int motorL = 11;

//Constantes PID
float Kp = 50;
float Ki = 0.3;
float Kd = 25;

float P = 0, I = 0, D = 0, valorPID = 0;
int erro = 0, erro_antes = 0;

int speedR = 100, newSpeedR = speedR;
int speedL = 100, newSpeedL = speedL;

void read()
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


void sprint ()
{
  P = erro;
  I = I + erro;
  D = erro - erro_antes;
  valorPID = (Kp * P) + (Kd * D) + (Ki * I);

  if (valorPID > 0) { //virar direita
    newSpeedL = speedL + valorPID;
    newSpeedR = speedR - valorPID;
  }

  if (valorPID < 0) { //virar esquerda
    newSpeedL = speedL + valorPID;
    newSpeedR = speedR - valorPID;
  }

  if (valorPID == 0)
  {
    newSpeedL = speedL;
    newSpeedR = speedR;
  }
  analogWrite(motorR, newSpeedR);
  analogWrite(motorL, newSpeedL);
}