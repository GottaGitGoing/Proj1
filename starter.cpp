// start.cpp
#include "input.hpp"
#include "distance.hpp"
#include <iostream>


int StartLoop()
{
    float start_lat;
    std::string start_ns;
    float start_lon;
    std::string start_ew;
    std::string start_name;
    std::cin >> start_lat >> start_ns >> start_lon >> start_ew;
    std::getline(std::cin,start_name);
    if (start_ns == "/S" )
    {
        start_lat *= -1;
    }
    if (start_ew == "/E")
    {
        start_lon *=-1;
    }
    // double start_lat,start_lon;
    int target;
    // std::string start_NS, start_EW, start_name;
    // start_lat = GetLat();
    // start_NS = GetNS();
    // start_lon = GetLon();
    // start_EW = GetEW();
    // start_name = GetName();
    // target = GetTarget();
    // std::cout << start_lat << " ok be good " << start_NS << start_lon 
    //           << start_EW << start_name <<std::endl;
    // std::cout << target <<std::endl;


    int i=0;
    float distance;
    float min,max;
    min = max = 0;
    std::cin >> target;
    float dest_lat, dest_lon;
    std::string dest_ns,dest_ew,dest_name;
    
    while (target != 0)
    {
        std::cin >> dest_lat >> dest_ns >> dest_lon >> dest_ew;
        std::getline(std::cin,dest_name);
        if (dest_ns == "/S" )
        {
            dest_lat *= -1;
        }
        if (dest_ew == "/E")
        {
            dest_lon *=-1;
        }
    //     dest_lat = GetLat();
    //     dest_NS =  GetNS();
    //     dest_lon = GetLon();
    //     dest_EW = GetEW();
    //     dest_name = GetName();
                
        distance = DistanceOfTwoLocations(start_lat,start_lon,dest_lat,dest_lon);
        if (distance >= max)
        {
            if (i==0) 
            {
                min = max = distance;
                i++;
            }
            else
            {
                max = distance;
            }
        }
        std::cout << distance << std::endl;
        target--; 
    }



    return 0;
}