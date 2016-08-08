const int LED = 13;
const int BTPWR = 12;

char nombreBT[10] = "TechKrowdS";
char velocidad ='4';//9600
char pin [5]= "0000";

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BTPWR, OUTPUT);

  digitalWrite(LED, LOW);
  digitalWrite(BTPWR, HIGH);

  Serial.begin(9600);

  Serial.print("AT");
  delay(1000);

  Serial.print("AT+NAME");
  Serial.print(nombreBT);
  delay(1000);

  Serial.print("AT+BAUD");
  Serial.print(velocidad);
  delay(1000);

  Serial.print("AT+PIN");
  Serial.print(pin);
  delay(1000);

  digitalWrite(LED, HIGH);
}

void loop(){
  
}
