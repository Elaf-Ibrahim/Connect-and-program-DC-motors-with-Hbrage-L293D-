
int enA = 9; 
int in1 = 8; 
int in2 = 7; 
int enB = 3; 
int in3 = 5; 
int in4 = 4; 
void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  // تشغيل محرك 1 بسرعة 200 في اتجاه الأمام
  analogWrite(enA, 200);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // تشغيل محرك 2 بسرعة 150 في اتجاه الخلف  
  analogWrite(enB, 150);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  delay(2000); // التشغيل لمدة ثانيتين

  // إيقاف المحركات
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  delay(1000); // الانتظار لثانية
}
