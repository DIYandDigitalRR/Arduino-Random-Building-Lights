int randomlight1;//first light selected
int randomlight2;//second light selected
int timeon;//variable for time selected

void setup() {
  pinMode(3,OUTPUT);//tells program we are using pin as output
  pinMode(4,OUTPUT);//tells program we are using pin as output
  pinMode(5,OUTPUT);//tells program we are using pin as output
  pinMode(6,OUTPUT);//tells program we are using pin as output

}

void loop() {
 randomlight1=random(3,7);//Picks first random light
 randomlight2=random(3,7);//picks second random light
 if (randomlight1 == randomlight2){
  randomlight2=random(3,7);//changes second random light if it is the same as the first
 }
else if (randomlight1 != randomlight2){
 timeon=random(500,5000);//sets duration lights are on
 digitalWrite(randomlight1,HIGH);//first random light on
 digitalWrite(randomlight2,HIGH);//second random light on
 delay(timeon);//how long the light is on
 digitalWrite(randomlight1,LOW);//first random light off
 digitalWrite(randomlight2,LOW);//second random light off
}
}
