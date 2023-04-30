#define red 4
#define green 3
#define white 2
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(white,OUTPUT);
}
void loop() {
  fechado(6);
  aberto(5);
  espera(3);
}
void fechado(int tempo){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(white,LOW);
  delay(tempo*1000);
}
void aberto(int tempo){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(white,HIGH);
  delay(tempo*1000);
}
void espera(int tempo){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(white,LOW);
  delay(tempo*1000);
}