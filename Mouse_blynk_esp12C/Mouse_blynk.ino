#define BLYNK_PRINT Serial
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "PK2erZ5uDQ8FTZcglS2A9P2hcxMDIy2A";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "HOSHINO";
char pass[] = "29102005";

int A=0,B=2,C=14;
//A=0; B=2; C=14;
BLYNK_WRITE(V1)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("sobe \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,HIGH);
    delay(50);
   } else {
    Serial.print("desliga sobe \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}
BLYNK_WRITE(V2)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("desce \n");
    digitalWrite (A,LOW);
    digitalWrite (B,HIGH);
    digitalWrite (C,LOW);
    delay(50);
   } else {
    Serial.print("desliga desce \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}

BLYNK_WRITE(V3)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("esquerda \n");
    digitalWrite (A,LOW);
    digitalWrite (B,HIGH);
    digitalWrite (C,HIGH);
    delay(50);
   } else {
    Serial.print("desliga esquerda \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}

BLYNK_WRITE(V4)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("direita \n");
    digitalWrite (A,HIGH);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    delay(50);
   } else {
    Serial.print("desliga direita \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}

BLYNK_WRITE(V5)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("botao esq \n");
    digitalWrite (A,HIGH);
    digitalWrite (B,LOW);
    digitalWrite (C,HIGH);
    delay(50);
   } else {
    Serial.print("desliga botao esq \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}

BLYNK_WRITE(V6)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("botao dir \n");
    digitalWrite (A,HIGH);
    digitalWrite (B,HIGH);
    digitalWrite (C,LOW);
    delay(50);
   } else {
    Serial.print("desliga botao dir \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}

BLYNK_WRITE(V7)
{ 
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if(pinValue == 1){
    Serial.print("botao dir segurando \n");
    digitalWrite (A,HIGH);
    digitalWrite (B,HIGH);
    digitalWrite (C,HIGH);
    delay(50);
   } else {
    Serial.print("desliga botao dir segurando \n");
    digitalWrite (A,LOW);
    digitalWrite (B,LOW);
    digitalWrite (C,LOW);
    }
}

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  
  
  // Debug console
  Serial.begin(9600);
  Serial.begin(9600);
  Serial.println();
  Serial.println("ttese");
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  inicio:
  Blynk.run();
  /*
      digitalWrite (A,LOW);
  digitalWrite (B,LOW);
  digitalWrite (C,LOW);

  */
}
