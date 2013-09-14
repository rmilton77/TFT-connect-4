#include "connect_four.h"

#include <Keypad.h>
#include <ST7735.h>
#include <SPI.h>

// Option 1: use any pins but a little slower
ST7735 tft = ST7735(cs, dc, mosi, sclk, rst);  

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, keypad_ROWS, keypad_COLS );

const byte board_ROWS = 6; //four rows
const byte board_COLS = 7; //three columns
unsigned int board[board_ROWS][board_COLS]= {BLUE, RED, MAGENTA, CYAN};
unsigned int diff_board[board_ROWS][board_COLS]={0};
  
Player turn = BLANK;
Result winner = NA;
char pos = NO_KEY;
uint8_t xpos_turn = 25;
uint8_t ypos_turn = 135;
boolean validKey = false;

void testdrawtext(char *text, uint8_t xpos, uint8_t ypos, uint16_t color) {
  tft.drawString(xpos, ypos, text, color);
}

void setup(void) {
  //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  tft.initR();               // initialize a ST7735R chip
  drawBoard();
  board[4][4] = MAGENTA;
  drawBoard();
  board[6][7] = WHITE;
  placePiece(6,7);
}

void loop() {
  
  
}

void placePiece(int row, int col)
{    
    tft.fillCircle((col)*16,24+(row*16),5,board[row][col]);
}

void diffBoard(void)
{
  for(int j = 0; j < 6; j++)
  {
    for(int i = 0; i < 7; i++)
    {
        if(board[i][j])
        {
          
        }
    }
  }
}


