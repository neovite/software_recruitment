void setup() {
    Serial.begin(19200);
}

void loop() {
    
    int joystickValue = analogRead(A2);

    
    uint16_t position = (uint16_t)map(joystickValue, 0, 1023, 818, 511);

    Serial.write((uint8_t)0x1E);
    Serial.write(lowByte(position));
    Serial.write(highByte(position));
 
    //change delay later
    delay(550);
}
