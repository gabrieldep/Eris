//MOTORES
int IN1 = 3, IN2 = 4, IN3 = 5, IN4 = 6;

//sensores
boolean s1, s2, s3, s4, s5, s6, s7, s8, s9;

//Motores
int motorR = 2, motorL = 7;

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

    Serial.begin(9600);

    //MOTORES SEMPRE ANDAM PARA FRENTE
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void loop() {
    readS();
    Serial.print(s1);Serial.print(" ");Serial.print(s2);Serial.print(" ");Serial.print(s3);Serial.print(" ");
    Serial.print(s4);Serial.print(" ");Serial.print(s5);Serial.print(" ");Serial.print(s6);Serial.print(" ");
    Serial.print(s7);Serial.print(" ");Serial.print(s8);Serial.print(" ");Serial.print(s9);Serial.print("\n");
    error();
    sprint();

}
