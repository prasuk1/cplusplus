#include<iostream>
using namespace std;

class Box{
    public :
        int x, y;
        Box(){};
        Box(int a, int b): x(a) , y(b){};
        Box operator+ (const Box &);
};
Box Box::operator+ (const Box &other){
    Box newBox{};
    newBox.x = x + other.x;
    newBox.y = y + other.y;
    return newBox;
}
int main(){
    Box b1{1,2};
    Box b2{3,4};
    Box b3 = b1 + b2;
    cout << b3.x << " " << b3.y << endl;
    return 0;
}