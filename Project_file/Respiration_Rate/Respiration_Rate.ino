#define fsrpin A0
int fsr;
int n;
int cur_time = 0;
int fsr1;
int fsr2;
int RR;
int i;
void setup() {
    Serial.begin(9600);
}
void loop()
{
  n = 0;
  fsr1 = 0;
  for(i=0;i<=500;i++)
  {
    fsr = analogRead(fsrpin);
    fsr2 = (fsr*5)/1023;
    if(fsr1==0||fsr1<=fsr2)
    {
      fsr1 = fsr2;
    }
    else if(fsr1>fsr2)
    {
      fsr1 = 0;
      n++;
    }
    cur_time = millis();
    Serial.print(n);
    Serial.print(",");
  Serial.print(cur_time);
  Serial.print(",");
  Serial.println(fsr2);
  }
  delay(500);
  RR = (60*n)/5;
   Serial.print("Respiratory Rate= ");
  Serial.println(RR);
  delay(500);
  if(RR>=25)
  {
    Serial.print(" ");
    Serial.println("Danger ");
    }
    else
    {
      Serial.print(" ");
      Serial.println("Normal");
      }
  delay(500);
}
