//change1
int solenoid_f=11,solenoid_b=10;
int motor_f_dir=8,motor_b_dir=9;
int motor_f_pwm=5,motor_b_pwm=6;
int th=255;
void setup()
{
  pinMode(solenoid_f,OUTPUT);
  pinMode(solenoid_b,OUTPUT);
  pinMode(motor_f_dir,OUTPUT);
  pinMode(motor_f_pwm,OUTPUT);
  pinMode(motor_b_dir,OUTPUT);
  pinMode(motor_b_pwm,OUTPUT);
  digitalWrite(motor_f_dir,LOW);
  digitalWrite(motor_b_dir,LOW);
  digitalWrite(solenoid_f,LOW);
  digitalWrite(solenoid_b,LOW);
  delay(1400);
//  delay(10000000);
}
void loop()
{
  digitalWrite(solenoid_f,HIGH);
  delay(600);
  analogWrite(motor_f_pwm,th);
  analogWrite(motor_b_pwm,th);
  delay(900);
  analogWrite(motor_b_pwm,0);
  analogWrite(motor_f_pwm,0);
  digitalWrite(solenoid_b,HIGH);
  delay(150);
  digitalWrite(solenoid_f,LOW);
  delay(800);
  analogWrite(motor_b_pwm,th);
  analogWrite(motor_f_pwm,th);
  delay(800);
  analogWrite(motor_f_pwm,0);
  analogWrite(motor_b_pwm,0);
  analogWrite(solenoid_b,LOW);
  delay(1000);
  analogWrite(motor_f_pwm,th);
  analogWrite(motor_b_pwm,th);
  delay(1000);
  analogWrite(motor_f_pwm,0);
  analogWrite(motor_b_pwm,0);
//    digitalWrite(solenoid_b,HIGH);
//    delay(2000);
//    digitalWrite(solenoid_b,LOW);
//    delay(2000);
}
