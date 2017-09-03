void setup() {
  //PORTD maps to Arduino digital pins 0 to 7
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  digitalWrite(5, LOW);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.println("DDRD - The Port D Data Direction Register. DDRX, 1=OUTPUT, 0=INPUT");
  Serial.println(DDRD, DEC);
  Serial.println(DDRD, HEX);
  Serial.println(DDRD, BIN);
  Serial.println("PIND - The Port D Input Pins Register. Lectura INPUT");
  Serial.println(PIND, DEC);
  Serial.println(PIND, HEX);
  Serial.println(PIND, BIN);
  Serial.println("PORTD - The Port D Data Register. Escritura OUTPUT");
  Serial.println(PORTD, DEC);
  Serial.println(PORTD, HEX);
  Serial.println(PORTD, BIN);
  delay(10000);
}

