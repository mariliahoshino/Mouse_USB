// DigiMouse test and usage documentation
// CAUTION!!!! This does click things!!!!!!!!
// Originally created by Sean Murphy (duckythescientist)

#include <DigiMouse.h>

int A, B, C, Aa2, Bb2, Cc2, senha, XYZ=0;
#define A 2
#define B 1
#define C 0




void setup() {
  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);

  
}

void loop() {
  // If not using plentiful DigiMouse.delay(), make sure to call
  // DigiMouse.update() at least every 50ms
  
  // move across the screen
  // these are signed chars

  if(XYZ==0){
    DigiMouse.delay(500);
    DigiMouse.moveY(10); //down 10
    DigiMouse.delay(500);
    DigiMouse.moveX(20); //right 20
    DigiMouse.delay(500);
    //DigiMouse.scroll(5);
    //DigiMouse.delay(500);
    XYZ++;
  }

 Aa2 = digitalRead(A);
 Bb2 = digitalRead(B);
 Cc2 = digitalRead(C);

  
  if(Aa2==0 && Bb2==0 && Cc2==1)
  {
    DigiMouse.moveY(-10); //sobe 10
  }

  if(Aa2==0 && Bb2==1 && Cc2==0)
  {
    DigiMouse.moveY(9); //desce 9
    
  }
    
  if(Aa2==0 && Bb2==1 && Cc2==1)
  {
    DigiMouse.moveX(-10); //esquerda 10
  }

  if(Aa2==1 && Bb2==0 && Cc2==0)
  {
    DigiMouse.moveX(9); //esquerda 10
  }  

  if(Aa2==1 && Bb2==0 && Cc2==1)
  {
    //DigiMouse.setButtons(1<<0); //left click
    //DigiMouse.setButtons(0); //unclick all
    //DigiMouse.delay(500);
     // DigiMouse.setButtons(0); //unclick all
     // DigiMouse.delay(500);
      DigiMouse.leftClick();
      DigiMouse.delay(100);
      DigiMouse.setButtons(0);
  }   

  if(Aa2==1 && Bb2==1 && Cc2==0)
  {

    //  DigiMouse.setButtons(0); //unclick all
    //  DigiMouse.delay(500);
      DigiMouse.rightClick();
      DigiMouse.delay(100);
      DigiMouse.setButtons(0);
  }   
  
  if(Aa2==1 && Bb2==1 && Cc2==1)
  {

    //  DigiMouse.setButtons(0); //unclick all
    //  DigiMouse.delay(500);
    for(senha=0; senha<=20; senha++)
    {
    DigiMouse.delay(50);    
    DigiMouse.moveY(-60); //sobe 1000
    DigiMouse.delay(50);
    DigiMouse.moveX(-100); //esquerda 1000
    }

    for(senha=0; senha<=15; senha++)
    {
    DigiMouse.delay(50);
    DigiMouse.moveY(26); //desce 200
    DigiMouse.delay(50);
    DigiMouse.moveX(52); //direita 500
    }

    DigiMouse.delay(500);
    
    DigiMouse.leftClick();

    for(senha=0; senha<=24; senha++)
    {
    DigiMouse.delay(100);
    DigiMouse.moveY(10); //desce 200
    }

    for(senha=0; senha <=24; senha ++)
    {
    DigiMouse.delay(50);
    DigiMouse.moveY(-10); //sobe 10
    DigiMouse.delay(50);
    DigiMouse.moveX(10); //direita 10
    }
    
    DigiMouse.setButtons(0);
    
  }   
    //DigiMouse.delay(50);

    

  DigiMouse.delay(50);

    ////////////////////////////////////////////
  /*
  DigiMouse.moveY(10); //down 10
  DigiMouse.delay(500);
  DigiMouse.moveX(20); //right 20
  DigiMouse.delay(500);
  DigiMouse.scroll(5);
  DigiMouse.delay(500);
  
  // or DigiMouse.move(X, Y, scroll) works
  
  // three buttons are the three LSBs of an unsigned char
  DigiMouse.setButtons(1<<0); //left click
  DigiMouse.delay(500);
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(500);

  //or you can use these functions to click
  DigiMouse.rightClick();
  DigiMouse.delay(500);
  DigiMouse.leftClick();
  DigiMouse.delay(500);
  DigiMouse.middleClick();
  DigiMouse.delay(500);
   */
  //for compatability with other libraries you can also use DigiMouse.move(X, Y, scroll, buttons)
}
