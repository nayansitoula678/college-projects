// Bresenham's Line Drawing Algorithm (Console Version)
#include <iostream>
#include <cmath>
using namespace std;

void putpixel(int x, int y) {
    cout << "Plot: (" << x << "," << y << ")\n";
}

void bresenham(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1), dy = abs(y2 - y1);
    int p = 2 * dy - dx;
    int x = x1, y = y1;
    int stepX = (x2 > x1) ? 1 : -1;
    int stepY = (y2 > y1) ? 1 : -1;

    putpixel(x, y);
    for (int i = 0; i < dx; i++) {
        x += stepX;
        if (p < 0) p += 2 * dy;
        else {
            y += stepY;
            p += 2 * (dy - dx);
        }
        putpixel(x, y);
    }
}

int main() {
    bresenham(2, 2, 10, 6);
    return 0;
}
