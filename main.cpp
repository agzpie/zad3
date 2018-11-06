#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Figure {
protected:
    string name;
public:
    void draw() {

    }
    string getName() {
        cout << "Figure: " << name << endl;
    }
};

class ManagerFigures{
public:
    void drawFigure(Figure* figure) {
        cout << " Draw a figure " << endl;
        figure->getName();
        figure->draw();
    }
};

class Square : public Figure{
public:
    void draw() {
        for (int i = 0; i < 4; i++) {
            cout << "_";
        }
        cout << "" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "|";
            for (int j = 1; j < 3; j++) {
                cout << " ";
            }
            cout << "|" << endl;
        }
        for (int i = 0; i < 4; i++) {
            cout << "-";
        }
        cout << "" << endl;
    }
};

class Rectangle : public Figure{
public:
    void draw() {
        for (int i = 0; i < 12; i++) {
            cout << "_";
        }
        cout << "" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "|";
            for (int j = 1; j < 11; j++) {
                cout << " ";
            }
            cout << "|" << endl;
        }
        for (int i = 0; i < 12; i++) {
            cout << "-";
        }
        cout << "" << endl;
    }
};

class Line : public Figure{
public:
    virtual void draw() {
        for (int i = 0; i < 25; i++) {
            cout << "_";
        }
        cout << "" << endl;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Square square;
    Rectangle rectangle;
    Line line;

    //ManagerFigures manager;

    square.draw();
    rectangle.draw();
    line.draw();

    return 0;
}