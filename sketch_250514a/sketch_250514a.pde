import processing.sound.*;//使用聲音的外掛
SoundFile mySound, monkey, sword;
void setup(){
  size(400, 400);
  monkey=new SoundFile(this, "Monkey 1.mp3");
  sword=new SoundFile(this, "sword slash1.mp3");
  mySound=new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();//放入剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT) monkey.play();
  if(mouseButton==RIGHT) sword.play();
}
void draw(){
  
}
