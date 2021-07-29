int DIR = 11;
int PWM = 10;
int c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(DIR, OUTPUT);
  pinMode(PWM, OUTPUT);
//  pinMode(DIR, OUTPUT);
  } 
 
void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0){
    // Serial.available()는 아두이노가 받은 데이터가 있는지 확인하는 명령어. 
    c = Serial.read();
    if(c=='U'){
      analogWrite(PWM, 255);
      digitalWrite(DIR, HIGH);  // 위로 
      }
    else if(c=='D'){
      analogWrite(PWM, 255);
      digitalWrite(DIR, LOW); // 아래로
      }
    else if(c=='S'){
    analogWrite(PWM, 0);
    }
  }
}
