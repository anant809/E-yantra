#define fsrpin A0
int fsr2;
int fsr1;
int cur_time;
int i;
int inhale;
int exhale;
int pef;
int pef1;
void setup() {
  Serial.begin(9600);
}
void loop()
{
  fsr2 = analogRead(fsrpin);
  Serial.print("Inhale");
  fsr1 = fsr2;
  cur_time = millis();
  delay(1000);
  for(i=0;i<=115;i++)
  {
    fsr2 = analogRead(fsrpin);
    if(fsr2>fsr1)
    {
      fsr1 = fsr2;
    }
    cur_time = millis();
    Serial.print(cur_time);
    Serial.print(",");
    Serial.println(fsr2);
  }
  inhale = fsr1;
  Serial.print("inhale = ");
  Serial.print(inhale);
  Serial.print(" stop");
  Serial.print(" Now exhale ");
  delay(500);
    for(i=0;i<=115;i++)
  {
    fsr2 = analogRead(fsrpin);
    if(fsr2<fsr1)
    {
      fsr1 = fsr2; 
    }
    cur_time = millis();
    Serial.print(cur_time);
    Serial.print(",");
    Serial.println(fsr2);
  }
  exhale = fsr1;
  Serial.print("exhale = ");
  Serial.print(exhale);
  cur_time = millis();
  Serial.print("cur_time =");
  Serial.print(cur_time);
  pef = inhale-exhale;
  pef1 = 0.9952*pef+278.2;
  delay(500);
  Serial.print("PEF = ");
  Serial.println(pef1);
  delay(500);
  if(pef1>=400)
  {
    Serial.print(" ");
    Serial.println("Normal");
    }
    else if((pef1>=320)&&(pef1<400))
    {
      Serial.print(" ");
      Serial.println("Green zone = Stable");
      Serial.println("Asthma is under control");
      }
      else if((pef1>=200)&&(pef1<400))
      {
        Serial.print(" ");
         Serial.println("Yellow zone = caution");
        Serial.println("Asthma is getting worse");
        }
        else
        {
          Serial.print(" ");
          Serial.println("Red zone = Danger");
          Serial.println("Medical emergency");
          }
          delay(500);
}
