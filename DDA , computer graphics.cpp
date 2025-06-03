// Digital Differential Analyzer (DDA) Algorithm (Console Version)
#include <iostream>
#include <cmath>
using namespace std;

void putpixel(int x, int y) {
    cout << "Plot: (" << x << "," << y << ")\n";
}

void dda(int x1, int y1, int x2, int y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xInc = dx / steps, yInc = dy / steps;
    float x = x1, y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y));
        x += xInc;
        y += yInc;
    }
}

int main() {
    dda(2, 2, 10, 6);
    return 0;
}
