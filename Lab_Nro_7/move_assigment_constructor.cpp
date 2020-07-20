#include <iostream>
using namespace std;

class A {
public:
    int a;
    A& operator= (A&& other) {
        this->a = other.a;
        other.a = 0;
        return *this;
    }
};


int main(){
    A x;
    x.a = 1;
    A z;
    z = std::move(x); //significa: A& operator= (A&& other)
    cout << x.a << endl; //0
    cout << z.a << endl; //1

    return 0;
}