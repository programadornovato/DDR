// Los pines donde están conectados los piezos
const int piezoPin1 = 16;
const int piezoPin2 = 5;
const int piezoPin3 = 4;
const int piezoPin4 = 14;

void setup() {
  pinMode(piezoPin1, INPUT);
  pinMode(piezoPin2, INPUT);
  Serial.begin(115200);  // Iniciar la comunicación serial a 115200 baudios
}

void loop() {
  // Detectar si el piezo en pin1 está presionado
  if (digitalRead(piezoPin1) == HIGH) {
    Serial.println("1");
    delay(100);  // Debounce
  }
  // Detectar si el piezo en pin1 está presionado
  if (digitalRead(piezoPin2) == HIGH) {
    Serial.println("2");
    delay(100);  // Debounce
  }
  // Detectar si el piezo en pin1 está presionado
  if (digitalRead(piezoPin3) == HIGH) {
    Serial.println("3");
    delay(100);  // Debounce
  }
  // Detectar si el piezo en pin1 está presionado
  if (digitalRead(piezoPin4) == HIGH) {
    Serial.println("4");
    delay(100);  // Debounce
  }
}
