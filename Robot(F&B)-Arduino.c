#define enA 5//Enable1 L293 Pin enA 
#define in1 6 //Motor1  L293 Pin in1 
#define in2 7 //Motor1  L293 Pin in1 
#define in3 9 //Motor2  L293 Pin in1 
#define in4 10 //Motor2  L293 Pin in1 
#define enB 8 //Enable2 L293 Pin enB 

void setup(){ 

pinMode(enA, OUTPUT); 
pinMode(in1, OUTPUT); 
pinMode(in2, OUTPUT); 
pinMode(in3, OUTPUT); 
pinMode(in4, OUTPUT); 
pinMode(enB, OUTPUT);
analogWrite(enA, 100); 
analogWrite(enB, 100); 
delay(100);

}

void forward() {
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
}

void backward(){
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
}

void stop(){
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
}

void loop(){
forward();
delay(100);
backward();
delay(100);
stop();
delay(100);
}




