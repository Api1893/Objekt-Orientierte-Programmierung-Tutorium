# include<iostream>

class Point {
private:
    int x,y;

public:
    Point(int xx = 0, int yy = 0) : x(xx), y(yy){
        std::cout << "int ctor" << x << " " << y << std::endl;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

// --------------- Segment Klasse ---------------------
class Segment {
    Point p1, p2;   // Das Gleiche wie p1 = Point(), p2 = Point()

public:
    Segment(int x1, int y1, int x2, int y2) : p1(Point(x1,y1)), p2(Point(x2,y2)){
    }
};

int main() {
    std::cout << "Test start..." << std::endl;

    Segment segment(4,7,1,1);

    std::cout << "...Test Ende" << std::endl;
}