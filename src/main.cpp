#include <iostream>
#include <point.h>

int main(int argc, char** argv)
{
    geo::Point myPoint;
    myPoint.SetX(2);
    myPoint.SetY(5);
    std::cout << myPoint << std::endl;
    std::cout << "Hola, mundo!" << std::endl;
    return 0;
}
