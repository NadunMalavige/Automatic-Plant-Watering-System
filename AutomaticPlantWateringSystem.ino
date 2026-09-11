const int soilSensor = A0;
const int relayPin = 7;

// Adjust these values after testing your sensor
const int dryValue = 700;
const int wetValue = 400;

void setup() {
  Serial.begin(9600);

  pinMode(relayPin, OUTPUT);

  // Pump OFF at startup
  digitalWrite(relayPin, HIGH);

  Serial.println("Automatic Plant Watering System");
}

void loop() {

  int soilValue = analogRead(soilSensor);

  Serial.print("Soil Moisture Value: ");
  Serial.println(soilValue);

  if (soilValue > dryValue) {
    // Soil is dry -> turn pump ON
    Serial.println("Soil is DRY - Pump ON");

    digitalWrite(relayPin, LOW);
    delay(5000);  // Pump runs for 5 seconds

    // Turn pump OFF
    digitalWrite(relayPin, HIGH);

    Serial.println("Pump OFF");

    // Wait before checking again
    delay(10000);
  }
  else {
    // Soil is wet -> pump OFF
    Serial.println("Soil is WET - Pump OFF");

    digitalWrite(relayPin, HIGH);

    delay(2000);
  }
}
