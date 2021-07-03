/*
  In this project, a 4-Digit 7-segment display module (common anode) shall be used as a count up counter
  You can set a upper limit for the counter, the system will then reset and resume count up again
*/
//*************************************************************
//the pins of 4-digit 7-segment display attached to arduino board digital pins 2 - 13 respectively
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;      
const int G = 8;
const int D1 = 10;
const int D2 = 11;
const int D3 = 12;
const int D4 = 13;

int dig1 = 1; // initial display of 4 digits before counter starts
int dig2 = 2; // to have initial assurance that your wiring is correct 
int dig3 = 3;
int dig4 = 4;

const int del = 5;//delay time is 5 ms     
int count = 995; //declare the value of variable to start counter,
              // number 995 chosen to have counting reach 1000+ ie. all 4 digits will be involved.
              // you can change it to suit your preference
long timer = millis() + 1000;//if you put number less then 1000 the counting will be faster
//**************************************************************************************************
void setup()
{
//set all the pins of the LED display as output
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop()
{
  //counter
  while (count > 0)
  {
    if (millis() > timer) {
      count++; // counter increases by 1
      if (count > 1005) {//restart counter, you can change this according to your preference
        delay(2000);//delay set for 2 seconds before counter reset
        count = 995; // upon reset, counter starts from this number, change this to suit your preference
      }
      dig1 = count / 1000; // get value of thounsand
      dig2 = ((count%1000)/100); //get value of hundred          
      dig3 = ((count%100)/10);  // get value of ten                
      dig4 = count % 10; // get value of last digit
      timer = millis() + 1000;//a number less then 1000 will have faster counting
    }
    digitalWrite(D4, HIGH); //Digit 4
    pickNumber(dig4);
    delay(del);
    digitalWrite(D4, LOW);

    digitalWrite(D3, HIGH); //Digit 3
    pickNumber(dig3);
    delay(del);
    digitalWrite(D3, LOW);

    digitalWrite(D2, HIGH); //Digit 2
    pickNumber(dig2);
    delay(del);
    digitalWrite(D2, LOW);

    digitalWrite(D1, HIGH); //Digit 1
    pickNumber(dig1);
    delay(del);
    digitalWrite(D1, LOW);
  }
} 
//*************************************************************
//The function is to control the 7-segment LED display to display numbers. Here x is the number to be displayed. It is an integer from 0 to 9 
void pickNumber(int x) {
  switch (x) {
    case 1: number1(); break;
    case 2: number2(); break;
    case 3: number3(); break;
    case 4: number4(); break;
    case 5: number5(); break;
    case 6: number6(); break;
    case 7: number7(); break;
    case 8: number8(); break;
    case 9: number9(); break;
    default: number0(); break;
  }
}
//*************************************************************
void clearLEDs()
{
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void number1()       //Display Number 1
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void number2()       //Display Number 2
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}

void number3()      //Display Number 3
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}

void number4()      //Display Number 4
{
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void number5()      //Display Number 5
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void number6()      //Display Number 6
{
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void number7()      //Display Number 7
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void number8()      //Display Number 8
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void number9()      //Display Number 9
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void number0()     //Display Number 0
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
