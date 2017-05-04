#include "Test.h"
#include <iostream>
//#include <map>
#include "Map.h"
using namespace std;

int main ()
{
    test();
    Map *map = new Map();
    map->put("hola",5);
    map->put("amor",7);
    map->put("jamon",8);
    map->put("zorra",9);
    map->put("arroz",10);

    // cout<<map->get("hola")<<endl;
    // cout<<map->get("amor")<<endl;
    // cout<<map->get("jamon")<<endl;
    // cout<<map->get("zorra")<<endl;
    // cout<<map->get("arroz")<<endl;
    return 0;
}
