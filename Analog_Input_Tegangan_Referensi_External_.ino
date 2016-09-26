void setup() 
{
 lcd.begin(16,2);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("ADC Example on A0");
 analogReference(EXTERNAL);

}

void loop() {
  unsigned int dataADC = analogRead(A0);
  lcd.setCursor(0,1);
  lcd.print("Value =");
  lcd.print(dataADC);
  delay(500);

}
