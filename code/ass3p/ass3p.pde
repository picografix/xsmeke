import processing.serial.*;

Serial port;
PFont font;

String data="";

void setup(){
  
 size(300,750);
 background(238,238,238);
 stroke(0);
 noFill();
 font = createFont("Montserrat", 24);
 printArray(Serial.list());   
 port = new Serial(this, "COM11", 9600);  

 all_buttons();

}

void draw(){ 
  
  fill(245,245,245);
  textFont(font);
  text("Select the number of times you want the buzzer to beep!", 80, 60); 
  
}

void mousePressed() {
   all_buttons();
}

void all_buttons(){
 button1(100,75,800,500,"1",40,'1');
 button1(200,75,800,500,"2",40,'2');
 button1(300,75,800,500,"3",40,'3');
 button1(400,75,800,500,"4",40,'4');
}

void button1(float x, float y, float w, float h, String word, int textsize, char letter){

 fill(55,71,79);
 rect(x,y,w,h);
 fill(250,250,250);
 textSize(textsize);
 text(word, x, y, w, h); 
 
    if(mouseX>x && mouseX <x+w && mouseY>y && mouseY <y+h){
       port.write(letter);
        fill(244,81,30);
        rect(x,y,w,h);
        fill(250,250,250);
        textSize(textsize);
        text(word, x, y, w, h);
     }

}

void serialEvent(Serial myPort)
{
  data=port.readStringUntil('\n');
  println(data);
}
