void Setup(); {
  // initialize digital pin as an output.
  pinMode(RELAY_PIN, OUTPUT);
  // Set baud rate to 9600
  Serial.begin(9600);
  // Begin radio transmission
  radio.begin();
  // 
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  Serial.printIn("Ready");
  }
  
  void network() { 
  // Transmitter code:
  RF24 radio(NETWORK_CE, NETWORK_CSN); // CE, CSN
  void setup() {
    radio.stopListening();
  }
  void loop() {
    const char text[] = "Hello World";
    radio.write(&text, sizeof(text));
    delay(1000);
  }

  // Receiver code:
  void setup() {
    radio.startListening();
  }
  void loop() {
    if (radio.available()) {
      char text[32] = "";
      radio.read(&text, sizeof(text));
      Serial.println(text);
    }
  }  
}


// Light Sensor Function
bool lightdetect() {
  // Read Light Sensor Value
  int value = analogRead(PHOTORESISTOR_PIN);
  // Return a 0 for day-time and 1 for night-time
  if value > NIGHT_VALUE
    return 0
  else
    return 1
}

// Radar Scan Speed of Objects in Vicinity Function
float radarscan() {
float v = Serial.parseFloat();
return v;
}


bool waitdetect() {
  for (i = startscan; num <= endscan; i++) {
    v(i) = radarscan();
    delay(1)
    }
  if (max(v) > MIN_WALK_SPEED && < MIN_CAR_SPEED)
  
  
  }

bool walkdetect() {
  
}

bool vehdetect() {
  
}

bool velocityapproach() {
  
}

void alert() {
  // Turn on DC and AC components connected to the relays for 5 seconds then shut off
  digitalWrite(RELAY_PIN1, HIGH);
  digitalWrite(RELAY_PIN2, HIGH);
  delay(5000);
  digitalWrite(RELAY_PIN1, LOW);
  digitalWrite(RELAY_PIN2, LOW);
}
            
bool velocityexit(){
  
}


};
