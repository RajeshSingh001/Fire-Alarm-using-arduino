int relay=7;
int flame=8;
void setup()
{
 pinMode(relay, OUTPUT); // put your setup code here, to run once:
 pinMode(flame, INPUT);
}

void loop() 
{
 int X= digitalRead(flame);
 if (X==HIGH)
 {
 digitalWrite(relay, HIGH); // put your main code here, to run repeatedly:
 delay(20);
 }
 else
 {
 digitalWrite(relay, LOW); // put your main code here, to run repeatedly:
 delay(20);
 }
}
