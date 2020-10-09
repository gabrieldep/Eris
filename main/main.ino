#define f 350     // Valor dos sensores no Branco

//MOTORES
int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

//Constantes PID
float Kp = 20, Ki = 0.3, Kd = 10;
//Variaveis para calcular o PID
float P = 0, I = 0, D = 0, PID = 0;
int erro = 0, erro_antes = 0;

int speedR = 100, newSpeedR = speedR;
int speedL = 100, newSpeedL = speedL;

void setup() {
    //MOTORES
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    //MOTORES PARA FRENTE
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void loop() {
    read();
    error();
    sprint();
}
