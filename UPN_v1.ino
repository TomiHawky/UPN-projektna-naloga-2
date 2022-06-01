#define gumb_1 7
#define gumb_2 6
#define gumb_3 5

bool st1;
bool st2;
bool st3;

void setup() {
  pinMode(gumb_1, INPUT_PULLUP);
  pinMode(gumb_2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  st1 = digitalRead(gumb_1);
  st2 = digitalRead(gumb_2);
  st3 = digitalRead(gumb_3);

  if(st1==LOW && st2==LOW && st3==HIGH){
    digitalWrite(13,HIGH);
  }
}
