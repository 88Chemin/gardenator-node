#define LDR_PIN A0
#define RELAY_PIN 5
void setup(){
    pinMode(LDR_PIN, INPUT);
    pinMode(RELAY_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    int ldrValue = analogRead(LDR_PIN);
    Serial.println(ldrValue);
    delay(1000);
    digitalWrite(RELAY_PIN, HIGH);
    delay(2000);
    digitalWrite(RELAY_PIN, LOW);
}