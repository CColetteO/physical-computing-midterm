//Pin definitions
int red = 7;
int blue = 3; 
int yellow = 5; 
int green = 2; 

//"Timer" definitions
unsigned long rTime = 0; 
unsigned long bTime = 0;
unsigned long yTime = 0; 
unsigned long gTime = 0;


void setup()
{
  //Just set output pins
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Particle.subscribe("wedding", onBlue);
  Particle.subscribe("baby", onYellow);
  Particle.subscribe("lost_my_partner", onGreen);
  Particle.subscribe("moving", onRed);
  Particle.subscribe("new_tweet", tellMatt);
}

void loop(){ 
  incrTimers();
  testTimers();
}

void incrTimers(){
  //Increment all timers by 1
  rTime = rTime + 1; 
  bTime = bTime + 1;
  yTime = yTime + 1; 
  gTime = gTime + 1;
}

void testTimers(){
  //If timer has hit cap, reset it and turn off light. 
  //If no trigger ever occured, this does nothing. 
  //If a trigger had occured, this allows setting a timer to turn it off without causing other pieces to wait. 
  int timeCap = 60000; //want 60,000ms for 1 min, but not exactly ms
  int greenCap = 5000; 
  if (rTime>=timeCap) { 
    digitalWrite(red, LOW);
    rTime = 0;
  }
  if (bTime>=timeCap) { 
    digitalWrite(blue, LOW);
    bTime = 0;
  }
  if (yTime>=timeCap) { 
    digitalWrite(yellow, LOW);
    yTime = 0;
  }
  if (gTime>=greenCap) { 
    digitalWrite(green, LOW);
    gTime = 0;
  }
}

//The following four onColor functions each turn on the applicable light, and reset its timer. 
void onRed(const char *event, const char *data){
  digitalWrite(red, HIGH);
  rTime = 0;
}

void onBlue(const char *event, const char *data){
  digitalWrite(blue, HIGH);
  bTime = 0;
}

void onYellow(const char *event, const char *data){
  digitalWrite(yellow, HIGH);
  yTime = 0;
}

void onGreen(const char *event, const char *data){
  digitalWrite(green, HIGH);
  gTime = 0;
}

void tellMatt(const char *event, const char *data){
    Particle.publish("lost_my_partner", "A tweet was published");
}
