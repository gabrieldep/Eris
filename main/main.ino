#define f 350     // Valor dos sensores no Branco
int speedR = 100, newSpeedR = speedR;
int speedL = 100, newSpeedL = speedL;

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

//MOTORES
int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

//VELOCIDADE
int motorR = 9;
int motorL = 11;

//Constantes PID
float Kp = 50;
float Ki = 0.3;
float Kd = 25;

float P = 0, I = 0, D = 0, valorPID = 0;
int erro = 0, erro_antes = 0;

void setup() {

}

void loop() {

}
