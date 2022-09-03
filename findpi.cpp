#include <iostream>
#include <cmath>

double halfCircle(double x) {
    // this is a function that will output a value
    // y on a circle for any point x,
    // given x lie between [-1, 1]
    return sqrt(1 - x*x);
}

int main() {
    // I will attempt to calculate pi using a riemann
    // sum under the halfcircle function I defined earlier
    // I'll find the area between x=0 et x=1, which is
    // a quarter of the area of the full circle.
    // given the radius is equal to one, the area
    // of the cicle will be pi, so all that needs to be done
    // is to multiply the answer I get by 4.
    double a = 0, b = 1, rec, pi = 0;
    std::cout << "Define a number of rectangles for the riemann sum: ";
    std::cin >> rec; // the user can be as precise as they wish
    double dx = (b - a) / rec;
    // the value of dx (base of each rectangle) will depend
    // on the number of rectangles the user defines
    for(double x = a; x < b; x += dx) {
        // here I create a for loop to add the area of every rectangle
        // together and I will then multiply that answer by
        // 4 to approximate the value of pi
        pi += dx * halfCircle(x);
    }
    std::cout << "The value of pi is around ~" << pi * 4 << std::endl;
}