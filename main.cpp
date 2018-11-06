#include <cstdlib>
#include <iostream>
using namespace std;

class Figure {
protected:
    string name;
public:
    virtual void draw() {}

    string getName() {
        return name;
    }

    Figure(){}
    ~Figure(){}
};

class FigureManager{
public:
    void drawFigure(Figure* figure) {
        cout << "Draw a figure: " << figure->getName() << endl;
        figure->draw();
        cout << "" << endl;
    }

    FigureManager(){}
    ~FigureManager(){}
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

    Square(){
        name = "square";
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

    Rectangle() {
        name = "rectangle";
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

    Line(){
        name = "line";
    }
};

int main() {
    Square square;
    Rectangle rectangle;
    Line line;

    FigureManager manager;
    manager.drawFigure(&square);
    manager.drawFigure(&rectangle);
    manager.drawFigure(&line);

    return 0;
}