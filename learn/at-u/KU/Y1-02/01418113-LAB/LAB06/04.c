#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    /* your code here */
    char pieceChar = '\0';
    int numPieces = 0, x = 0, y = 0;

    scanf("%d", &numPieces);
    
    for (int i = 0; i < numPieces; i++)
        scanf("\n%c(%d, %d)", &pieceChar, &x, &y);

    printf("%c\n", pieceChar);
    printf("%d\n", x);
    printf("%d\n", y);
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    /* your code here */
}