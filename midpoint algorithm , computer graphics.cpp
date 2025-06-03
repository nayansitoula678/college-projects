// Midpoint Line Drawing Algorithm (Console Version)
#include <iostream>
#include <cmath>
using namespace std;

void putpixel(int x, int y) {
    cout << "Plot: (" << x << "," << y << ")\n";
}

void midpoint(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int d = dy - (dx / 2);
    int x = x1, y = y1;

    putpixel(x, y);
    while (x < x2) {
        x++;
        if (d < 0) d += dy;
        else {
            d += (dy - dx);
            y++;
        }
        putpixel(x, y);
    }
}

int main() {
    midpoint(2, 2, 10, 6);
    return 0;
}
