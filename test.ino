#define LDR_PIN A0
#define COMMON_SENSOR_PIN A0
#define SOIL_MOISTURE_SENSOR_CONTROL_PIN 9// change
#define LDR_CONTROL_PIN 10 // change
#define TEMPERATURE_SENSOR_CONTROL_PIN 11 // change
#define RELAY_PIN 5
#define LIGHT_RELAY_PIN 6 //change
#define PUMP_RELAY_PIN 7 // change
#define FAN_RELAY_PIN 8 // change


int ldrValue;
int soilMoistureValue;
int temperature;

// https://www.instructables.com/id/ESP8266-with-Multiple-Analog-Sensors/
void getReadings(){
    

}
void setup(){
    pinMode(LDR_PIN, INPUT);
    pinMode(RELAY_PIN, OUTPUT);
    
    pinMode(LIGHT_RELAY_PIN, OUTPUT);
    pinMode(LDR_CONTROL_PIN, OUTPUT);
    
    pinMode(FAN_RELAY_PIN, OUTPUT);
    pinMode(TEMPERATURE_SENSOR_CONTROL_PIN, OUTPUT);
    
    pinMode(PUMP_RELAY_PIN, OUTPUT);
    pinMode(SOIL_MOISTURE_SENSOR_CONTROL_PIN, OUTPUT);
    
    pinMode(COMMON_SENOR_PIN, INPUT);
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
