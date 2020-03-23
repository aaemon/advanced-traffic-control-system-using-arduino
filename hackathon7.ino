/*
Team Thanos
created for hackathon
*/

#include <LiquidCrystal.h>

int r1 = 22;
int y1 = 23;
int g1 = 24;
int r2 = 25;
int y2 = 26;
int g2 = 27;
int r3 = 28;
int y3 = 29;
int g3 = 30;
int r4 = 31;
int y4 = 32;
int g4 = 33;
int r5 = 34;
int y5 = 35;
int g5 = 36;
int r6 = 37;
int y6 = 38;
int g6 = 39;
int r7 = 40;
int y7 = 41;
int g7 = 42;
int r8 = 43;
int y8 = 44;
int g8 = 45;

int buttonPin12 = 2;
int buttonPin34 = 3;
int buttonPin56 = 4;
int buttonPin78 = 5;

int obstaclePin11 = 6;
int obstaclePin12 = 7;
int obstaclePin31 = 8;
int obstaclePin32 = 9;

const int rs = 46, en = 47, d4 = 48, d5 = 49, d6 = 50, d7 = 51;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int buttonState12 = LOW;
int buttonState34 = LOW;
int buttonState56 = LOW;
int buttonState78 = LOW;

int hasObstacle11 = HIGH;
int hasObstacle12 = HIGH;
int hasObstacle31 = HIGH;
int hasObstacle32 = HIGH;

void setup() {
  Serial.begin(9600); 
  
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(y4, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(y5, OUTPUT);
  pinMode(g5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(y6, OUTPUT);
  pinMode(g6, OUTPUT);
  pinMode(r7, OUTPUT);
  pinMode(y7, OUTPUT);
  pinMode(g7, OUTPUT);
  pinMode(r8, OUTPUT);
  pinMode(y8, OUTPUT);
  pinMode(g8, OUTPUT);

  pinMode(buttonPin12, INPUT);
  pinMode(buttonPin34, INPUT);
  pinMode(buttonPin56, INPUT);
  pinMode(buttonPin78, INPUT);

  pinMode(obstaclePin11, INPUT);
  pinMode(obstaclePin12, INPUT);
  pinMode(obstaclePin31, INPUT);
  pinMode(obstaclePin32, INPUT);

  //system started
  Serial.println("-----System Started!!-----");

  lcd.begin(16, 2);
  lcd.print("Traffic Control System");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("TEAM THANOS");
  lcd.print("System Started!!");

  Serial.println("Opening Lane 1 and Lane 5 for the first time");
  digitalWrite(r1, HIGH);
  digitalWrite(y1, HIGH);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, HIGH);
  digitalWrite(g4, LOW);
  digitalWrite(r5, HIGH);
  digitalWrite(y5, HIGH);
  digitalWrite(g5, LOW);
  digitalWrite(r6, HIGH);
  digitalWrite(y6, HIGH);
  digitalWrite(g6, LOW);
  digitalWrite(r7, HIGH);
  digitalWrite(y7, HIGH);
  digitalWrite(g7, LOW);
  digitalWrite(r8, HIGH);
  digitalWrite(y8, HIGH);
  digitalWrite(g8, LOW);
  delay(3000);
}

int emergencyChange() {
  digitalWrite(r1, HIGH);
  digitalWrite(y1, HIGH);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, HIGH);
  digitalWrite(g4, LOW);
  digitalWrite(r5, HIGH);
  digitalWrite(y5, HIGH);
  digitalWrite(g5, LOW);
  digitalWrite(r6, HIGH);
  digitalWrite(y6, HIGH);
  digitalWrite(g6, LOW);
  digitalWrite(r7, HIGH);
  digitalWrite(y7, HIGH);
  digitalWrite(g7, LOW);
  digitalWrite(r8, HIGH);
  digitalWrite(y8, HIGH);
  digitalWrite(g8, LOW);

  delay(3000);
}

int emergency12(){
  digitalWrite(r1, LOW);
  digitalWrite(y1, LOW);
  digitalWrite(g1, HIGH);
  digitalWrite(r2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r5, HIGH);
  digitalWrite(y5, LOW);
  digitalWrite(g5, LOW);
  digitalWrite(r6, HIGH);
  digitalWrite(y6, LOW);
  digitalWrite(g6, LOW);
  digitalWrite(r7, HIGH);
  digitalWrite(y7, LOW);
  digitalWrite(g7, LOW);
  digitalWrite(r8, HIGH);
  digitalWrite(y8, LOW);
  digitalWrite(g8, LOW);
}

int emergency34(){
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(r3, LOW);
  digitalWrite(y3, LOW);
  digitalWrite(g3, HIGH);
  digitalWrite(r4, LOW);
  digitalWrite(y4, LOW);
  digitalWrite(g4, HIGH);
  digitalWrite(r5, HIGH);
  digitalWrite(y5, LOW);
  digitalWrite(g5, LOW);
  digitalWrite(r6, HIGH);
  digitalWrite(y6, LOW);
  digitalWrite(g6, LOW);
  digitalWrite(r7, HIGH);
  digitalWrite(y7, LOW);
  digitalWrite(g7, LOW);
  digitalWrite(r8, HIGH);
  digitalWrite(y8, LOW);
  digitalWrite(g8, LOW);
}

int emergency56(){
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r5, LOW);
  digitalWrite(y5, LOW);
  digitalWrite(g5, HIGH);
  digitalWrite(r6, LOW);
  digitalWrite(y6, LOW);
  digitalWrite(g6, HIGH);
  digitalWrite(r7, HIGH);
  digitalWrite(y7, LOW);
  digitalWrite(g7, LOW);
  digitalWrite(r8, HIGH);
  digitalWrite(y8, LOW);
  digitalWrite(g8, LOW);
}

int emergency78(){
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r5, HIGH);
  digitalWrite(y5, LOW);
  digitalWrite(g5, LOW);
  digitalWrite(r6, HIGH);
  digitalWrite(y6, LOW);
  digitalWrite(g6, LOW);
  digitalWrite(r7, LOW);
  digitalWrite(y7, LOW);
  digitalWrite(g7, HIGH);
  digitalWrite(r8, LOW);
  digitalWrite(y8, LOW);
  digitalWrite(g8, HIGH);
}

void loop() {

  //lane 1 and lane 5 are open
  for(int i = 0; i < 20; i++) {

    Serial.println("Lane 1 and Lane 5 are OPEN");
    
    digitalWrite(r1, LOW);
    digitalWrite(y1, LOW);
    digitalWrite(g1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(y2, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(y3, LOW);
    digitalWrite(g3, LOW);
    digitalWrite(r4, HIGH);
    digitalWrite(y4, LOW);
    digitalWrite(g4, LOW);
    digitalWrite(r5, LOW);
    digitalWrite(y5, LOW);
    digitalWrite(g5, HIGH);
    digitalWrite(r6, HIGH);
    digitalWrite(y6, LOW);
    digitalWrite(g6, LOW);
    digitalWrite(r7, HIGH);
    digitalWrite(y7, LOW);
    digitalWrite(g7, LOW);
    digitalWrite(r8, HIGH);
    digitalWrite(y8, LOW);
    digitalWrite(g8, LOW);
  
    delay(1000);
    
    buttonState12 = digitalRead(buttonPin12);
    if(buttonState12 == HIGH) {
      Serial.println("Emergency Switch 12 Activated!!");
      emergencyChange();
      while(buttonState12 == HIGH) {
        Serial.println("Emergency on Lane 1 & 2");
        emergency12();
        delay(1000);
        
        buttonState12 = digitalRead(buttonPin12);
        if(buttonState12 == LOW) {
          Serial.println("Emergency Switch 12 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState34 = digitalRead(buttonPin34);
    if(buttonState34 == HIGH) {
      Serial.println("Emergency Switch 34 Activated!!");
      emergencyChange();
      while(buttonState34 == HIGH) {
        Serial.println("Emergency on Lane 3 & 4");
        emergency34();
        delay(1000);
        
        buttonState34 = digitalRead(buttonPin34);
        if(buttonState34 == LOW) {
          Serial.println("Emergency Switch 34 Deactivated!!");  
          emergencyChange();
        } 
      }
    }
    
    buttonState56 = digitalRead(buttonPin56);
    if(buttonState56 == HIGH) {
      Serial.println("Emergency Switch 56 Activated!!");
      emergencyChange();
      while(buttonState56 == HIGH) {
        Serial.println("Emergency on Lane 5 & 6");
        emergency56();
        delay(1000);
        
        buttonState56 = digitalRead(buttonPin56);
        if(buttonState56 == LOW) {
          Serial.println("Emergency Switch 56 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState78 = digitalRead(buttonPin78);
    if(buttonState78 == HIGH) {
      Serial.println("Emergency Switch 78 Activated!!");
      emergencyChange();
      while(buttonState78 == HIGH) {
        Serial.println("Emergency on Lane 7 & 8");
        emergency78();
        delay(1000);
        
        buttonState78 = digitalRead(buttonPin78);
        if(buttonState78 == LOW) {
          Serial.println("Emergency Switch 78 Deactivated!!");
          emergencyChange();
        } 
      }
    }
  }

  //Check the density of traffic on Lane 1 and Lane 5
  hasObstacle11 = digitalRead(obstaclePin11);
  hasObstacle12 = digitalRead(obstaclePin12);
  if (hasObstacle11 == LOW && hasObstacle12 == LOW) {
    for(int i = 0; i < 5; i++) {
      Serial.println("Lane 1 and Lane 5 are open for extra time");
      delay(1000);
    }
  }
  

  //changing from lane 1 to 2 and lane 5 to 6

   Serial.println("Changing from Lane 1 to 2 and Lane 5 to 6");
  
   digitalWrite(r1, LOW);
   digitalWrite(y1, HIGH);
   digitalWrite(g1, LOW);
   digitalWrite(r2, HIGH);
   digitalWrite(y2, HIGH);
   digitalWrite(g2, LOW);
   digitalWrite(r3, HIGH);
   digitalWrite(y3, LOW);
   digitalWrite(g3, LOW);
   digitalWrite(r4, HIGH);
   digitalWrite(y4, LOW);
   digitalWrite(g4, LOW);
   digitalWrite(r5, LOW);
   digitalWrite(y5, HIGH);
   digitalWrite(g5, LOW);
   digitalWrite(r6, HIGH);
   digitalWrite(y6, HIGH);
   digitalWrite(g6, LOW);
   digitalWrite(r7, HIGH);
   digitalWrite(y7, LOW);
   digitalWrite(g7, LOW);
   digitalWrite(r8, HIGH);
   digitalWrite(y8, LOW);
   digitalWrite(g8, LOW);
   delay(3000);

  //lane 2 and lane 6 are open  
  for(int i = 0; i < 10; i++) {

    Serial.println("Lane 2 and Lane 6 are OPEN");
    
    digitalWrite(r1, HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r2, LOW);
    digitalWrite(y2, LOW);
    digitalWrite(g2, HIGH);
    digitalWrite(r3, HIGH);
    digitalWrite(y3, LOW);
    digitalWrite(g3, LOW);
    digitalWrite(r4, HIGH);
    digitalWrite(y4, LOW);
    digitalWrite(g4, LOW);
    digitalWrite(r5, HIGH);
    digitalWrite(y5, LOW);
    digitalWrite(g5, LOW);
    digitalWrite(r6, LOW);
    digitalWrite(y6, LOW);
    digitalWrite(g6, HIGH);
    digitalWrite(r7, HIGH);
    digitalWrite(y7, LOW);
    digitalWrite(g7, LOW);
    digitalWrite(r8, HIGH);
    digitalWrite(y8, LOW);
    digitalWrite(g8, LOW);

    delay(1000);

    buttonState12 = digitalRead(buttonPin12);
    if(buttonState12 == HIGH) {
      Serial.println("Emergency Switch 12 Activated!!");
      emergencyChange();
      while(buttonState12 == HIGH) {
        Serial.println("Emergency on Lane 1 & 2");
        emergency12();
        delay(1000);
        
        buttonState12 = digitalRead(buttonPin12);
        if(buttonState12 == LOW) {
          Serial.println("Emergency Switch 12 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState34 = digitalRead(buttonPin34);
    if(buttonState34 == HIGH) {
      Serial.println("Emergency Switch 34 Activated!!");
      emergencyChange();
      while(buttonState34 == HIGH) {
        Serial.println("Emergency on Lane 3 & 4");
        emergency34();
        delay(1000);
        
        buttonState34 = digitalRead(buttonPin34);
        if(buttonState34 == LOW) {
          Serial.println("Emergency Switch 34 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState56 = digitalRead(buttonPin56);
    if(buttonState56 == HIGH) {
      Serial.println("Emergency Switch 56 Activated!!");
      emergencyChange();
      while(buttonState56 == HIGH) {
        Serial.println("Emergency on Lane 5 & 6");
        emergency56();
        delay(1000);
        
        buttonState56 = digitalRead(buttonPin56);
        if(buttonState56 == LOW) {
          Serial.println("Emergency Switch 56 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState78 = digitalRead(buttonPin78);
    if(buttonState78 == HIGH) {
      Serial.println("Emergency Switch 78 Activated!!");
      emergencyChange();
      while(buttonState78 == HIGH) {
        Serial.println("Emergency on Lane 7 & 8");
        emergency78();
        delay(1000);
        
        buttonState78 = digitalRead(buttonPin78);
        if(buttonState78 == LOW) {
          Serial.println("Emergency Switch 78 Deactivated!!");
          emergencyChange();
        } 
      }
    }

  }

   //changing from lane 2 to 3 lane 6 to 7
  Serial.println("Changing from Lane 2 to 3 and Lane 6 to 7");
   
   digitalWrite(r1, HIGH);
   digitalWrite(y1, LOW);
   digitalWrite(g1, LOW);
   digitalWrite(r2, LOW);
   digitalWrite(y2, HIGH);
   digitalWrite(g2, LOW);
   digitalWrite(r3, HIGH);
   digitalWrite(y3, HIGH);
   digitalWrite(g3, LOW);
   digitalWrite(r4, HIGH);
   digitalWrite(y4, LOW);
   digitalWrite(g4, LOW);
   digitalWrite(r5, HIGH);
   digitalWrite(y5, LOW);
   digitalWrite(g5, LOW);
   digitalWrite(r6, LOW);
   digitalWrite(y6, HIGH);
   digitalWrite(g6, LOW);
   digitalWrite(r7, HIGH);
   digitalWrite(y7, HIGH);
   digitalWrite(g7, LOW);
   digitalWrite(r8, HIGH);
   digitalWrite(y8, LOW);
   digitalWrite(g8, LOW);
   delay(3000);

  //lane 3 and lane 7 are open
  for(int i = 0; i < 20; i++) {

    Serial.println("Lane 3 and Lane 7 are OPEN");
    
    digitalWrite(r1, HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(y2, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(r3, LOW);
    digitalWrite(y3, LOW);
    digitalWrite(g3, HIGH);
    digitalWrite(r4, HIGH);
    digitalWrite(y4, LOW);
    digitalWrite(g4, LOW);
    digitalWrite(r5, HIGH);
    digitalWrite(y5, LOW);
    digitalWrite(g5, LOW);
    digitalWrite(r6, HIGH);
    digitalWrite(y6, LOW);
    digitalWrite(g6, LOW);
    digitalWrite(r7, LOW);
    digitalWrite(y7, LOW);
    digitalWrite(g7, HIGH);
    digitalWrite(r8, HIGH);
    digitalWrite(y8, LOW);
    digitalWrite(g8, LOW);

    delay(1000);

    buttonState12 = digitalRead(buttonPin12);
    if(buttonState12 == HIGH) {
      Serial.println("Emergency Switch 12 Activated!!");
      emergencyChange();
      while(buttonState12 == HIGH) {
        Serial.println("Emergency on Lane 1 & 2");
        emergency12();
        delay(1000);
        
        buttonState12 = digitalRead(buttonPin12);
        if(buttonState12 == LOW) {
          Serial.println("Emergency Switch 12 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState34 = digitalRead(buttonPin34);
    if(buttonState34 == HIGH) {
      Serial.println("Emergency Switch 34 Activated!!");
      emergencyChange();
      while(buttonState34 == HIGH) {
        Serial.println("Emergency on Lane 3 & 4");
        emergency34();
        delay(1000);
        
        buttonState34 = digitalRead(buttonPin34);
        if(buttonState34 == LOW) {
          Serial.println("Emergency Switch 34 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState56 = digitalRead(buttonPin56);
    if(buttonState56 == HIGH) {
      Serial.println("Emergency Switch 56 Activated!!");
      emergencyChange();
      while(buttonState56 == HIGH) {
        Serial.println("Emergency on Lane 5 & 6");
        emergency56();
        delay(1000);
        
        buttonState56 = digitalRead(buttonPin56);
        if(buttonState56 == LOW) {
          Serial.println("Emergency Switch 56 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState78 = digitalRead(buttonPin78);
    if(buttonState78 == HIGH) {
      Serial.println("Emergency Switch 78 Activated!!");
      emergencyChange();
      while(buttonState78 == HIGH) {
        Serial.println("Emergency on Lane 7 & 8");
        emergency78();
        delay(1000);
        
        buttonState78 = digitalRead(buttonPin78);
        if(buttonState78 == LOW) {
          Serial.println("Emergency Switch 78 Deactivated!!");  
          emergencyChange();
        } 
      }
    }
  }

  //Check the density of traffic on Lane 3 and Lane 7
  hasObstacle31 = digitalRead(obstaclePin31);
  hasObstacle32 = digitalRead(obstaclePin32);
  if (hasObstacle31 == LOW && hasObstacle32 == LOW) {
    for(int i = 0; i < 5; i++) {
      Serial.println("Lane 3 and Lane 7 are open for extra time");
      delay(1000);
    }
  }
  
  //changing from lane 3 to 4 lane 7 to 8

   Serial.println("Changing from Lane 3 to 4 Lane 7 to 8");
  
   digitalWrite(r1, HIGH);
   digitalWrite(y1, LOW);
   digitalWrite(g1, LOW);
   digitalWrite(r2, HIGH);
   digitalWrite(y2, LOW);
   digitalWrite(g2, LOW);
   digitalWrite(r3, LOW);
   digitalWrite(y3, HIGH);
   digitalWrite(g3, LOW);
   digitalWrite(r4, HIGH);
   digitalWrite(y4, HIGH);
   digitalWrite(g4, LOW);
   digitalWrite(r5, HIGH);
   digitalWrite(y5, LOW);
   digitalWrite(g5, LOW);
   digitalWrite(r6, HIGH);
   digitalWrite(y6, LOW);
   digitalWrite(g6, LOW);
   digitalWrite(r7, LOW);
   digitalWrite(y7, HIGH);
   digitalWrite(g7, LOW);
   digitalWrite(r8, HIGH);
   digitalWrite(y8, HIGH);
   digitalWrite(g8, LOW);
   delay(3000);
   
  //lane 4 and lane 8 are open
  for(int i = 0; i < 10; i++) {

    Serial.println("Lane 4 and Lane 8 are OPEN");
    
    digitalWrite(r1, HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(y2, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(y3, LOW);
    digitalWrite(g3, LOW);
    digitalWrite(r4, LOW);
    digitalWrite(y4, LOW);
    digitalWrite(g4, HIGH);
    digitalWrite(r5, HIGH);
    digitalWrite(y5, LOW);
    digitalWrite(g5, LOW);
    digitalWrite(r6, HIGH);
    digitalWrite(y6, LOW);
    digitalWrite(g6, LOW);
    digitalWrite(r7, HIGH);
    digitalWrite(y7, LOW);
    digitalWrite(g7, LOW);
    digitalWrite(r8, LOW);
    digitalWrite(y8, LOW);
    digitalWrite(g8, HIGH);

    delay(1000);

    buttonState12 = digitalRead(buttonPin12);
    if(buttonState12 == HIGH) {
      Serial.println("Emergency Switch 12 Activated!!");
      emergencyChange();
      while(buttonState12 == HIGH) {
        Serial.println("Emergency on Lane 1 & 2");
        emergency12();
        delay(1000);
        
        buttonState12 = digitalRead(buttonPin12);
        if(buttonState12 == LOW) {
          Serial.println("Emergency Switch 12 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState34 = digitalRead(buttonPin34);
    if(buttonState34 == HIGH) {
      Serial.println("Emergency Switch 34 Activated!!");
      emergencyChange();
      while(buttonState34 == HIGH) {
        Serial.println("Emergency on Lane 3 & 4");
        emergency34();
        delay(1000);
        
        buttonState34 = digitalRead(buttonPin34);
        if(buttonState34 == LOW) {
          Serial.println("Emergency Switch 34 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState56 = digitalRead(buttonPin56);
    if(buttonState56 == HIGH) {
      Serial.println("Emergency Switch 56 Activated!!");
      emergencyChange();
      while(buttonState56 == HIGH) {
        Serial.println("Emergency on Lane 5 & 6");
        emergency56();
        delay(1000);
        
        buttonState56 = digitalRead(buttonPin56);
        if(buttonState56 == LOW) {
          Serial.println("Emergency Switch 56 Deactivated!!");
          emergencyChange();
        } 
      }
    }

    buttonState78 = digitalRead(buttonPin78);
    if(buttonState78 == HIGH) {
      Serial.println("Emergency Switch 78 Activated!!");
      emergencyChange();
      while(buttonState78 == HIGH) {
        Serial.println("Emergency on Lane 7 & 8");
        emergency78();
        delay(1000);
        
        buttonState78 = digitalRead(buttonPin78);
        if(buttonState78 == LOW) {
          Serial.println("Emergency Switch 78 Deactivated!!");
          emergencyChange();
        } 
      }
    }
  }
  
}
