#include "Rectangle.h"
void Rectangle::setSize(double w, double l) {
    if (w > 0 && l > 0) { width = w; length = l; }
}
double Rectangle::area() const { return width * length; }
