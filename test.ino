

void drawBoard(void)
{
  marqueeScreenClear();
  drawYellowBoard();
  drawEmptyCircles();
}

void marqueeScreenClear(void)
{
  //Clear screen
  tft.writecommand(ST7735_DISPON);
  tft.fillScreen(BLACK);
}

void drawYellowBoard(void)
{
  //DRAW BOARD
  for(int i = 30; i < 130; i++)
  {
    tft.drawHorizontalLine(5,i,118,YELLOW);
  }
}

void drawEmptyCircles(void)
{
  for(int j = 1; j < board_ROWS+1; j++)
  {
    for(int i = 1; i < board_COLS+1; i++)
    {
        tft.fillCircle(16*i,24+(j*16),5,board[j][i]);
    }
  }
}


