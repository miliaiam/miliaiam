#include "TXLib.h"

int main()
    {
    txCreateWindow (1000, 700);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);

    txRectangle(100, 20, 120, 200);
    txRectangle(140, 20, 160, 200);
    txRectangle(180, 20, 200, 200);
    txRectangle(220, 20, 240, 200);
    txRectangle(260, 20, 280, 200);
    txRectangle(300, 20, 320, 200);

    return 0;
    }

