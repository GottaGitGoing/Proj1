// input.cpp
/*
    double lat;
    std::string ns;
    double lon;
    std::string we;
    std::string rest;
    std::cin >> lat >> ns >> lon >> we;
    std::getline(std::cin,rest);

    std::cout << lat <<std::endl; //<< ns << lon << we << rest <<std::endl;
    std::cout << ns << std::endl;
    std::cout << lon << std::endl;
    std::cout << we << std::endl;
    std::cout << rest << std::endl;

*/
#include <iostream>
#include <string>

double GetLat()
{
    double lat;
    std::cin>>lat;
    return lat;
}

std::string GetNS()
{
    std::string ns;
    std::cin >> ns;
    return ns;
}

double GetLon()
{
    double lon;
    std::cin >> lon;
    return lon;
}

std::string GetEW()
{
    std::string ew;
    std::cin >> ew;
    return ew;
}

std::string GetName()
{
    std::string name;
    std::getline(std::cin, name);
    return name;
}

int GetTarget()
{
    int target;
    std::cin >> target;
    return target;
}

