int rojo1      = A2;
int amarillo1  = A1;
int verde1     = A0;
int rojo11     = A5;
int amarillo11 = A4;
int verde11     = A3;

int rojo2      = A8;
int amarillo2  = A7;
int verde2     = A6;
int rojo21     = A11;
int amarillo21 = A10;
int verde21    = A9;

int rojo3      = A14;
int amarillo3  = A13;
int verde3     = A12;
int rojo31     = 34;
int amarillo31 = 35;
int verde31    = A15;

int rojo4      = 10;
int amarillo4  = 9;
int verde4     = 8;
int rojo41     = 13;
int amarillo41 = 12;
int verde41    = 11;


int rojo5      = 4;
int amarillo5  = 3;
int verde5     = 2;
int rojo51     = 7;
int amarillo51 = 6;
int verde51    = 5;

int rojo6      = 24;
int amarillo6  = 23;
int verde6     = 22;
int rojo61     = 27;
int amarillo61 = 26;
int verde61    = 25;

int rojo7      = 28; //NO CONECTADO
int amarillo7  = 29; //NO CONECTADO
int verde7     = 31; //NO CONECTADO
int rojo71     = 33;
int amarillo71 = 32;
int verde71    = 30;


void setup()
{
  DDRA = B11111111;
  DDRB = B11110000;
  DDRC = B11111111;
  DDRE = B11111111;
  DDRF = B11111111;
  DDRG = B11111111;
  DDRH = B11111111;
  DDRK = B11111111; 
}


//Funcion para 1 semaforo
int semaforo(int x, int y, int z, int x1, int y1, int z1){
  digitalWrite(x, HIGH);
  digitalWrite(z1, HIGH);
  delay(5000);
  digitalWrite(x, LOW);
  digitalWrite(z1, LOW);
  delay(1);
  digitalWrite(y, HIGH);
  digitalWrite(y1, HIGH);
  delay(1000);
  digitalWrite(y, LOW);
  digitalWrite(y1, LOW);
  delay(1);
  digitalWrite(z, HIGH);
  digitalWrite(x1, HIGH);
  delay(5000);
  digitalWrite(z, LOW);
  digitalWrite(x1, LOW);
  delay(1);
}

void loop()
{
 //funcion para 1 semáforo
 //semaforo(rojo1, amarillo1, verde1, rojo11, amarillo11, verde11);
 
 //prender todos a la vez
  /*                          */
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo11, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojo21, HIGH);
  digitalWrite(rojo3, HIGH);
  digitalWrite(rojo31, HIGH);
  digitalWrite(rojo4, HIGH);
  digitalWrite(rojo41, HIGH);
  digitalWrite(rojo5, HIGH);
  digitalWrite(rojo51, HIGH);
  digitalWrite(rojo6, HIGH);
  digitalWrite(rojo61, HIGH);
  digitalWrite(rojo71, HIGH);
  delay(5000);
  digitalWrite(rojo1, LOW);
  digitalWrite(rojo11, LOW);
  digitalWrite(rojo2, LOW);
  digitalWrite(rojo21, LOW);
  digitalWrite(rojo3, LOW);
  digitalWrite(rojo31, LOW);
  digitalWrite(rojo4, LOW);
  digitalWrite(rojo41, LOW);
  digitalWrite(rojo5, LOW);
  digitalWrite(rojo51, LOW);
  digitalWrite(rojo6, LOW);
  digitalWrite(rojo61, LOW);
  digitalWrite(rojo71, LOW);
  delay(1);
  
  digitalWrite(amarillo1, HIGH);
  digitalWrite(amarillo11, HIGH);
  digitalWrite(amarillo2, HIGH);
  digitalWrite(amarillo21, HIGH);
  digitalWrite(amarillo3, HIGH);
  digitalWrite(amarillo31, HIGH);
  digitalWrite(amarillo4, HIGH);
  digitalWrite(amarillo41, HIGH);
  digitalWrite(amarillo5, HIGH);
  digitalWrite(amarillo51, HIGH);
  digitalWrite(amarillo6, HIGH);
  digitalWrite(amarillo61, HIGH);
  digitalWrite(amarillo71, HIGH);
  delay(1000);
  digitalWrite(amarillo1, LOW);
  digitalWrite(amarillo11, LOW);
  digitalWrite(amarillo2, LOW);
  digitalWrite(amarillo21, LOW);
  digitalWrite(amarillo3, LOW);
  digitalWrite(amarillo31, LOW);
  digitalWrite(amarillo4, LOW);
  digitalWrite(amarillo41, LOW);
  digitalWrite(amarillo5, LOW);
  digitalWrite(amarillo51, LOW);
  digitalWrite(amarillo6, LOW);
  digitalWrite(amarillo61, LOW);
  digitalWrite(amarillo71, LOW);
  delay(1);
  digitalWrite(verde1, HIGH);
  digitalWrite(verde11, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(verde21, HIGH);
  digitalWrite(verde3, HIGH);
  digitalWrite(verde31, HIGH);
  digitalWrite(verde4, HIGH);
  digitalWrite(verde41, HIGH);
  digitalWrite(verde5, HIGH);
  digitalWrite(verde51, HIGH);
  digitalWrite(verde6, HIGH);
  digitalWrite(verde61, HIGH);
  digitalWrite(verde71, HIGH);
  delay(5000);
  digitalWrite(verde1, LOW);
  digitalWrite(verde11, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde21, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(verde31, LOW);
  digitalWrite(verde4, LOW);
  digitalWrite(verde41, LOW);
  digitalWrite(verde5, LOW);
  digitalWrite(verde51, LOW);
  digitalWrite(verde6, LOW);
  digitalWrite(verde61, LOW);
  digitalWrite(verde71, LOW);
  delay(1);
//____________________________ */
                                
}
