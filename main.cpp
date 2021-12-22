#include <iostream>
#include <string>
#include <fstream>
#include "TXLib.h"
using namespace std;

struct pic {
  const char* name;
  int x, y;
  bool visible;
  int width;
  int height;
};

int save(string file, pic kartinki[5])
{

  ofstream f(file);
  f<<kartinki[0].x<<"\n";
  f<<kartinki[0].y<<"\n";
  f<<kartinki[0].name<<"\n";
  f<<kartinki[0].visible<<"\n";
  f<<kartinki[0].width<<"\n";
  f<<kartinki[0].height<<"\n";
  f.close();
  }

int main()
{ txCreateWindow(800, 600);
  pic kartinki[5];

  txSetColor(TX_BLACK);
  txSetFillColor(TX_WHITE);
  {
  kartinki[0].x=0;
  kartinki[0].y=0;
  kartinki[0].name="pic1.bmp";
  kartinki[0].visible=true;
  kartinki[0].width=299;
  kartinki[0].height=197;


  HDC pic = txLoadImage(kartinki[0].name);

  if (kartinki[0].visible) txBitBlt (txDC(), kartinki[0].x, kartinki[0].y, kartinki[0].width, kartinki[0].height, pic, 0, 0);

   }


  txSetColor(TX_BLACK);
  txSetFillColor(TX_WHITE);

  txRectangle(100, 100, 240, 40);
  txDrawText(100, 100, 240, 40, "Save");

  RECT area = {100, 100, 240, 40};

  while ( 1 )
  if(txMouseButtons() == 1)
  {
    if (txMouseButtons() == 1 &&
        txMouseX() < 240 &&
        txMouseX() > 100 &&
        txMouseY() < 100 &&
        txMouseY() > 40)
    {
    save("file2.txt",kartinki);
    }

  }
   cout << save("file2.txt",kartinki);

}

