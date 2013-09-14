

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
  for(int j = 0; j < board_ROWS; j++)
  {
    for(int i = 0; i < board_COLS; i++)
    {
        tft.fillCircle(16+(16*i),40+(j*16),5,board[j][i]);
    }
  }
}


