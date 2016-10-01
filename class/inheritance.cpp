#include <iostream>
using namespace std;
class Point2D { 
public: 
    Point2D() {
        _x = 0;
        _y = 0;
    }
    Point2D(int x, int y) : _x(x), _y(y) {
    }
    int x() {return _x;} 
    int y() {return _y;} 
    /*void x(int x) {
        _x = x;
    }
    void y(int y) {
        _y = y;
    }*/
protected:
    int _x;
    int _y;
}; 
class Point3D : public Point2D { 
public: 
    Point3D() { 
        _z = 0; 
    } 
    Point3D(int x, int y, int z) : Point2D(x, y), _z(z) { 
    } 
    int z() {return _z;}
    void z(int z) {_z = z;}
 
private:
    int _z;
}; 
int main() {
    Point3D p1(1, 3, 4);
    

    cout << "p1: (" 
         << p1.x() << ", " 
         << p1.y() << ", " 
         << p1.z() << ")"
         << endl;
    Point3D p2(5, 7, 8);
    /*p2.x(5);
    p2.y(7);
    p2.z(8);*/
 
    cout << "p2: (" 
         << p2.x() << ", " 
         << p2.y() << ", " 
         << p2.z() << ")"
         << endl;
 
    return 0;
}