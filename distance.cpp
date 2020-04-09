// distance.cpp
#include <cmath>

const float radius = 3959.9;

float DegreeToRadians(float n)
{
    float s;
    s = n* (M_PI/180);
    return s;
}

float DistanceOfTwoLocations(float lon1, float lat1, float lon2, float lat2)
{

    float dlon, dlat, a, c, d;
    dlon = lon2 - lon1;
    dlat = lat2 - lat1;
    a = std::pow(std::sin(dlat/2),2) +  std::cos(lat1) * std::cos(lat2) *  std::pow(std::sin(dlon/2),2);
    c = 2 * std::atan2(std::sqrt(a),std::sqrt(1-a));
    d = radius * c;
    return d;
}
