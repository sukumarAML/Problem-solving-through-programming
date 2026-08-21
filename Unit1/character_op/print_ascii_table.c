#include <stdio.h>

int main()
{
    int i;

    printf("ASCII TABLE\n");
    printf("--------------------------------\n");
    printf("Decimal\tCharacter\n");
    printf("--------------------------------\n");

    for (i = 0; i <= 127; i++)
    {
        if (i < 32 || i == 127)
            printf("%3d\tNon-Printable\n", i);
        else
            printf("%3d\t%c\n", i, i);
    }

    return 0;
}

/*
| Decimal | Hex | Name | Meaning                   |
| ------: | --: | ---- | ------------------------- |
|       0 |  00 | NUL  | Null                      |
|       1 |  01 | SOH  | Start of Heading          |
|       2 |  02 | STX  | Start of Text             |
|       3 |  03 | ETX  | End of Text               |
|       4 |  04 | EOT  | End of Transmission       |
|       5 |  05 | ENQ  | Enquiry                   |
|       6 |  06 | ACK  | Acknowledge               |
|       7 |  07 | BEL  | Bell/Alert                |
|       8 |  08 | BS   | Backspace                 |
|       9 |  09 | HT   | Horizontal Tab            |
|      10 |  0A | LF   | Line Feed                 |
|      11 |  0B | VT   | Vertical Tab              |
|      12 |  0C | FF   | Form Feed                 |
|      13 |  0D | CR   | Carriage Return           |
|      14 |  0E | SO   | Shift Out                 |
|      15 |  0F | SI   | Shift In                  |
|      16 |  10 | DLE  | Data Link Escape          |
|      17 |  11 | DC1  | Device Control 1          |
|      18 |  12 | DC2  | Device Control 2          |
|      19 |  13 | DC3  | Device Control 3          |
|      20 |  14 | DC4  | Device Control 4          |
|      21 |  15 | NAK  | Negative Acknowledge      |
|      22 |  16 | SYN  | Synchronous Idle          |
|      23 |  17 | ETB  | End of Transmission Block |
|      24 |  18 | CAN  | Cancel                    |
|      25 |  19 | EM   | End of Medium             |
|      26 |  1A | SUB  | Substitute                |
|      27 |  1B | ESC  | Escape                    |
|      28 |  1C | FS   | File Separator            |
|      29 |  1D | GS   | Group Separator           |
|      30 |  1E | RS   | Record Separator          |
|      31 |  1F | US   | Unit Separator            |

*/
/* 
0–31     → Control characters
32       → Space
33–47    → Symbols
48–57    → 0–9
58–64    → Symbols
65–90    → A–Z
91–96    → Symbols
97–122   → a–z
123–126  → Symbols
127      → DEL
*/