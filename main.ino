#define trigger 13

#define echo 12

#define motor 7

#define buzzer 6

void setup()
{
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
pinMode(motor, OUTPUT);
pinMode(buzzer,OUTPUT);

}

void loop()

{

long duration, distance;

digitalWrite(trigger, LOW);

delayMicroseconds(2);

digitalWrite(trigger, HIGH);

delayMicroseconds(10);

digitalWrite(trigger, LOW);

duration = pulseIn(echo, HIGH);

distance = (duration/2) / 29.1;

if (distance < 70)// Distance condition

{

digitalWrite(motor,HIGH);

digitalWrite(buzzer,HIGH);

} else

{

digitalWrite(motor,LOW);

digitalWrite(buzzer,LOW);

} delay(500);

}