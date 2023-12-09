#include <iostream>
#include<Windows.h>

#define COLOR_BLACK 0
#define COLOR_RED 4
#define MOVING << 4
#define WHITE_COLOR 7
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ENTER '\r'
#define CROSS 'x'
#define CIRCLE 'o'
#define GREEN_COLOR 2

using namespace std;

void clearField(int size, char field[][3]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            field[i][j] = ' ';
        }
    }
}
int main() {


    return 0;
}