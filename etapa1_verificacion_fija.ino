const int PIN_DAC = 25;
const int PIN_PWM = 27;
const int PWM_FREQ = 5000;
const int PWM_RES  = 8;

void setup() {
  Serial.begin(115200);
  int codigo = 128;

  ledcAttach(PIN_PWM, PWM_FREQ, PWM_RES);

  dacWrite(PIN_DAC, codigo);
  ledcWrite(PIN_PWM, codigo);

  Serial.print("Codigo fijo enviado: ");
  Serial.println(codigo);
}

void loop() {
}
