#define f 350     // Valor dos sensores no Branco

//MOTORES
int IN1 = 2, IN2 = 3, IN3 = 4, IN4 = 5;

//sensores
boolean s1, s2, s3, s4, s5, s6, s7, s8, s9;

//Motores
int motorR = 9, motorL = 11;

//Constantes PID
float Kp = 20, Ki = 0.3, Kd = 10;

//Variaveis para calcular o PID
float P = 0, I = 0, D = 0, PID = 0;
int erro = 0, erro_antes = 0;

//Identificador de faixa de pedestres
boolean faixa = false;

//Velocidades iniciais dos motores
int speedR = 100, speedL = 100;

void setup() {
    //MOTORES
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    //MOTORES SEMPRE ANDAM PARA FRENTE
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void loop() {
    readS();
    error();
    desafios();
    sprint();
}
