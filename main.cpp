#include "distance.hpp"
#include <iostream>




int main()
{
    float a,b,c,d;
    a = DegreeToRadians(33.9425);
    b = DegreeToRadians(118.4081);
    c = DegreeToRadians(20.8987);
    d = DegreeToRadians(156.4305);

    std::cout << DistanceOfTwoLocations(a,b,c,d);


    return 0;
}


