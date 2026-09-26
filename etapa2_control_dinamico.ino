const int pinDAC = 25; 
const int pinPWM = 27; 
const int frecuenciaPWM = 5000; 
const int resolucionBits = 8;

void setup() {
  Serial.begin(115200);
  ledcAttach(pinPWM, frecuenciaPWM, resolucionBits); 
  Serial.println("ESP-WROOM-32 Listo.");
}

void loop() {
  if (Serial.available() > 0) {
    float voltaje = Serial.parseFloat();
    
    if (voltaje < 0.0) voltaje = 0.0;
    if (voltaje > 3.3) voltaje = 3.3;
    
    int codigo = (voltaje / 3.3) * 255;
    
    dacWrite(pinDAC, codigo); 
    ledcWrite(pinPWM, codigo);
    
    Serial.print("Voltaje: ");
    Serial.print(voltaje);
    Serial.print(" V | Codigo: ");
    Serial.println(codigo);
  }
}
