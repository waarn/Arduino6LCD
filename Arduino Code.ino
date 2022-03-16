#include <LiquidCrystal.h>

int lcdEN = 11;
int lcdNUM = 1;

int pitchPin = 0;
int pitchVal = 0;

int screenPin = 1;
int screenVal = 0;

int pitchMap = 0;
int screenMap = 0;

int lcdEnableMap[6] = {11, 10, 9, 8, 7, 6};

void setup() {
  Serial.begin(9600);
}

void loop() {
  LiquidCrystal lcd(12, lcdEN, 5, 4, 3, 2);
  lcd.begin(16, 2);
  
  pitchVal = analogRead(pitchPin);
  screenVal = analogRead(screenPin); 
  pitchMap = map(pitchVal, 0, 1023, 0, 16);
  screenMap = map(screenVal, 0, 1023, 0, 5);
  
  lcdNUM = screenMap;
  lcdEN = lcdEnableMap[screenMap];
  
  if (lcdNUM == 0){
    for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
	lcd.setCursor(0,1);
    for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
   } else if (lcdNUM == 1) {
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
    lcd.setCursor(0,1);
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
   } else if (lcdNUM == 2){
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
    lcd.setCursor(0,1);
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
  } else if (lcdNUM == 3){
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
    lcd.setCursor(0,1);
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
  }else if (lcdNUM == 4){
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
    lcd.setCursor(0,1);
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
  } else if (lcdNUM == 5){
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
    lcd.setCursor(0,1);
  	for (int i = 0; i <= pitchMap; i++) {
    lcd.print("#");
	}
  }
  Serial.print("Pitch");
  Serial.print(pitchMap);
  Serial.print("Screen");
  Serial.println(screenMap);
}
