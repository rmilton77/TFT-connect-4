#ifndef connect_four_h
#define connect_four_h

#include "Arduino.h"

// You can use any (4 or) 5 pins 
#define sclk 52  //SCL
#define mosi 51  //SDA
#define cs 48    //CS
#define dc 50    //
#define rst 53  // you can also connect this to the Arduino reset

// Color definitions
#define	BLACK           0x0000
#define	RED            0x001F
#define	BLUE             0xF800
#define	GREEN           0x07E0
#define YELLOW            0x07FF
#define MAGENTA         0xF81F
#define CYAN          0xFFE0  
#define WHITE           0xFFFF


enum Player
{
	BLANK,
	P1,
	P2,
};

enum Result
{
  NA,
  P1_WIN,
  P2_WIN,
  TIE,
};



const byte keypad_ROWS = 4; //four rows
const byte keypad_COLS = 3; //three columns
char keys[keypad_ROWS][keypad_COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[keypad_ROWS] = {45, 43, 41, 39}; //connect to the row pinouts of the keypad
byte colPins[keypad_COLS] = {37, 35, 33}; //connect to the column pinouts of the keypad

void marqueeScreenClear(void);
void drawBoard(void);
void drawYellowBoard(void);
void drawEmptyCircles(void);



#endif
