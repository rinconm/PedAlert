  const int PHOTORESISTOR_PIN = 25, RELAY_PIN1 = 5, RELAY_PIN2 = 6;

  // the setup function runs once when you press reset or power the board
  void setup() {
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

  // Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>
  RF24 radio(7, 8); // CE, CSN
  const byte address[6] = "00001";
  void setup() 
    radio.stopListening();
  }
  void loop() {
    const char text[] = "Hello World";
    radio.write(&text, sizeof(text));
    delay(1000);
  }

  // Receiver code:
  /*
  * Arduino Wireless Communication Tutorial
  *       Example 1 - Receiver Code
  *                
  * by Dejan Nedelkovski, www.HowToMechatronics.com
  * 
  * Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
  */
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>
  RF24 radio(7, 8); // CE, CSN
  const byte address[6] = "00001";
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


const int NIGHT_VALUE = 500;

bool lightdetect() {
  // Read Light Sensor Value
  int value = analogRead(PHOTORESISTOR_PIN);
  // Return a 0 for day-time and 1 for night-time
  if value > NIGHT_VALUE
    return 0
  else
    return 1
}

// Radar scan speed of objects in vicinity
float radarscan() {
float v = Serial.parseFloat();
return v;
}



#include <vector>
void waitdetect() {
  
  const int start = 0;
            end = 1000;
  for (i = start; num <= end; i++) {
    v(i) = radarscan();
    delay(1)
    
  }
  
  
}

void walkdetect() {
  
}

void vehdetect() {
  
}

void velocityapproach() {
  
}

void alert() {
  // Turn on DC and AC components connected to the relays for 5 seconds then shut off
  digitalWrite(RELAY_PIN1, HIGH);
  digitalWrite(RELAY_PIN2, HIGH);
  delay(5000);
  digitalWrite(RELAY_PIN1, LOW);
  digitalWrite(RELAY_PIN2, LOW);
}
            
void velocityexit(){
  
}
