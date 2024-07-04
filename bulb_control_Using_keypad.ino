void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()){

  int read=Serial.read();
if (read=='k'){
 
digitalWrite(8,HIGH);
Serial.println("on");
  
}
else if (read=='l'){
  
digitalWrite(8,LOW);
Serial.println("off");
}  
  
}
}
 
