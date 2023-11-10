#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle::draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    objectCounter++;
    setWidth(width);
    setHeight(height);
}

// Constructor Delegation
Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
    this->color = color;
}

Rectangle::~Rectangle() {
    cout << "Destructor called" << endl;
}

int Rectangle::objectCounter = 0;

int Rectangle::getObjectCounter() {
    return objectCounter;
};
