// start.cpp
#include "input.hpp"
#include "distance.hpp"
#include "name_creator.hpp"
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
    
    int target;
    
    
    // std::cout << CreateLocName(start_lat, start_ns, start_lon, start_ew, start_name) << std::endl;

    int i=0;
    float distance;
    float min,max;
    min = max = 0;
    std::cin >> target;
    std::cin.ignore(1);
    // std::cout << target << std::endl;
    float dest_lat, dest_lon;
    std::string dest_ns,dest_ew,dest_name;
    std::string min_name, max_name;
    while (target != 0)
    {
        std::cin >> dest_lat >> dest_ns >> dest_lon >> dest_ew;
        std::getline(std::cin,dest_name);
        // std::cout << CreateLocName(dest_lat,dest_ns,dest_lon, dest_ew,dest_name) <<std::endl;
        if (dest_ns == "/S" )
        {
            dest_lat *= -1;
        }
        if (dest_ew == "/E")
        {
            dest_lon *=-1;
        }
                
        distance = DistanceOfTwoLocations(start_lat,start_lon,dest_lat,dest_lon);
        if (distance >= max)
        {
            if (i==0) 
            {
                min = max = distance;
                min_name = max_name = CreateLocName(dest_lat,dest_ns,dest_lon,dest_ew,dest_name);
                i++;
            }
            else
            {
                max = distance;
                max_name = CreateLocName(dest_lat,dest_ns,dest_lon,dest_ew,dest_name);
            }
        }
        else
        {
            min = distance;
            min_name = CreateLocName(dest_lat,dest_ns,dest_lon,dest_ew,dest_name);
        }
        
        // std::cout << distance << std::endl;
        target--; 
    }



    return 0;
}