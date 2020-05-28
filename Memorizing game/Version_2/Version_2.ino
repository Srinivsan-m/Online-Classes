
//configuring the pins of the hardware
const int ledPins[] = {2,3,4,5};
const int buttonPins[] = {6,7,8,9};
const int buzzer = 10;

//Computer sequence memory
int computerSeq[100];
//player sequence memory
int playerSeq[100];

//Which level your at
int levelCount = 3;

//speed of the led changes as the level progress
int dynamicDelay = 1000;

//frequency of the buzzer changes as the level progress
int dynamicFrequency = 300;

void setup() {
  // put your setup code here, to run once:
  
  //initializing the leds and button
  for(int i = 0; i < 4; i++)
  {
  pinMode(ledPins[i],OUTPUT);
  pinMode(buttonPins[i],INPUT);
  }
  //initializing the buzzer
  pinMode(10,OUTPUT);
}

void loop() {

  //clearMemory
  clearAnimation();  
  
  /*initialize the computer sequence randomly*/
  for(int i = 0; i < levelCount; i++)
  {
    int random_number = random(1,2000);
    int random_pin = ledPins[0];
    if(random_number <= 500)
    {
      random_pin = ledPins[1];
    }
    else if(random_number <= 1000)
    {
      random_pin = ledPins[2];
    }
    else if(random_number <= 1500)
    {
      random_pin = ledPins[3];
    }
    computerSeq[i] = random_pin;
  }

  //wait for a while
  delay(2000);
  
  /*display the sequence*/
  for(int i = 0 ; i < levelCount; i++)
  {
      digitalWrite(computerSeq[i],HIGH); //2,5,4,4,5
      tone(buzzer,dynamicFrequency,150);
      delay(dynamicDelay);
      digitalWrite(computerSeq[i],LOW);
      delay(dynamicDelay);
  }

  /*take player input*/
  int inputCount = 0;
  while(true)
  {
      int getInput = input();
      if(getInput != 0)
      {
        //Serial.println(getInput);
        playerSeq[inputCount] = getInput;
        digitalWrite(getInput,HIGH);
        tone(buzzer,dynamicFrequency,150);
        delay(200);
        digitalWrite(getInput,LOW);
        inputCount++;
      }
      //exit the loop when the player input is equal to level count
      if(inputCount == levelCount)
      {
        //reset the input counter and exit the loop
        inputCount = 0;
        break;  
      }
  }
  
  /*Check for match*/
  int pass = 0;
  for(int i = 0; i < levelCount; i++)
  {
    if(computerSeq[i] != playerSeq[i])
    {
      //break if playerSeq not matching computerSeq
      break;  
    }
    pass++; 
  }
  
  /*Result*/
  if(pass == levelCount)
  {
      winAimation();
      levelCount++;  
      dynamicFrequency += 50;
      dynamicDelay -= 10;
      for(int i = 0; i < levelCount ; i++)
      computerSeq[i] = NULL;
      for(int i = 0; i < levelCount ; i++)
      playerSeq[i] = NULL;
  }
  else
  {
      loseAimation();
      dynamicFrequency = 300;
      dynamicDelay = 1000;
      for(int i = 0; i < levelCount ; i++)
      computerSeq[i] = NULL;
      for(int i = 0; i < levelCount ; i++)
      playerSeq[i] = NULL;
      levelCount = 3;
  }

  //reset the pass value for next level
  pass = 0;
}


//get the input from user
int input()
{
  for(int i = 0; i < 4; i++)
  {
    if(digitalRead(buttonPins[i]))
    {
      //return the corresponding led pin
      return buttonPins[i];
    }
  }
  return 0;
}

//clear led animation
void clearAnimation()
{  
  for(int i = 0 ; i <= 1; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      bool output = (i%2 == 0);
      digitalWrite(ledPins[j],output);
      tone(buzzer,300,50);
      delay(100);
    }
  }
  noTone(buzzer);
}

//win led animation
void winAnimation()
{
  for(int i = 0 ; i <= 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      digitalWrite(ledPins[j],HIGH);   
    }
    tone(buzzer,2500,500); 
    delay(500);
    for(int j = 0; j < 4; j++)
    {
      digitalWrite(ledPins[j],LOW);    
    }
    delay(500);
  }
}     

//loose led animation
void loseAimation()
{
    for(int i = 0 ; i <= 2; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      digitalWrite(ledPins[j],HIGH);    
    }
    tone(buzzer,500,500); 
    delay(150);
    for(int j = 0; j < 4; j++)
    {
      digitalWrite(ledPins[j],LOW);    
    }
    delay(150);
  }
  noTone(buzzer);
}
