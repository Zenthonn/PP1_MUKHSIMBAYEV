#include <iostream>
using namespace std;

int main() {
    // Read the width and height of the canvas
    int width, height;
    cin >> width >> height;

    // Read the number of rectangles
    int n;
    cin >> n;

    // Initialize the total area painted to 0
    int total_painted_area = 0

    // Read the coordinates of each rectangle and add its area to the total painted area
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int rect_area = (x2 - x1) * (y2 - y1);
        total_painted_area += rect_area;
    }

    // Calculate the unpainted area by subtracting the total painted area from the total canvas area
    int unpainted_area = width * height - total_painted_area;

    // Print the unpainted area
    cout << unpainted_area << endl;

    return 0;
}




