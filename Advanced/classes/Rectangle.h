#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H
#include <string>

using namespace std;

class Rectangle {
public:
    // Constructors
    Rectangle() = default; // default constructor
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);

    explicit Rectangle(int width);
    ~Rectangle(); // destructor

//    explicit Rectangle(int width);

    void draw();
    int getArea();
    int getWidth(); // Getter (accessor)
    void setWidth(int width); // Setter (mutator)
    int getHeight() const;
    void setHeight(int height);
    static int getObjectCounter();
private:
    int width;
    int height;
    string color;
    static int objectCounter;
};

#endif //CLASSES_RECTANGLE_H
