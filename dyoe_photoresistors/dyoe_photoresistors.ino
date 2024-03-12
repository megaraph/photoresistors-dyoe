/*******************************

DYOE Project: Photoresistors

Group 6
Murillo, Uy, VIllaluz, Wu

*******************************/

// PIN SOURCES
const byte PR_SRC = A0;
const int LED_OUT = 13;

// Read values
int light;

// Constraints
const int lightMinValue = 500;

void setup() {
	pinMode(LED_OUT, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	light = analogRead(PR_SRC);
  
  	if(light < lightMinValue) {
    	digitalWrite(LED_OUT, HIGH);
    } else {
      	digitalWrite(LED_OUT, LOW);
    }
  	
  	digitalWrite(LED_OUT, LOW);
	Serial.println(light);
}
