#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

int main() {
    enum Color color;

    printf("Enter a color code (0-5): ");
    scanf("%d", &color);

    switch (color) {
        case RED:
            printf("Hexadecimal color code for RED: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal color code for GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal color code for BLUE: #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal color code for YELLOW: #FFFF00\n");
            break;
        case BLACK:
            printf("Hexadecimal color code for BLACK: #000000\n");
            break;
        case WHITE:
            printf("Hexadecimal color code for WHITE: #FFFFFF\n");
            break;
        default:
            printf("Invalid color code.\n");
    }

    return 0;
}
