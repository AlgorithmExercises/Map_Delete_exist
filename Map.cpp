#include "Map.h"

int Map::hash(string key)
{
  int sum = 0;

  for(int i=0;i < (int)key.length();i++)
    sum+=key[i];

  return sum;
}

Map::Map()
{
  for(int i=0;i<999999;i++)
  {
    array.push_back(new list< pair<string,int>* >);
  }
}

void Map::put(string key, int value)
{
  list< pair<string, int>* > * v =  array[hash(key)];
  v->push_back(new pair<string, int>(key, value));
}

int Map::get(string key)
{
  list< pair<string, int>* > * v =  array[hash(key)];

  for(list<pair<string, int>*>::iterator it = v->begin(); it != v->end(); it++)
  {
    pair<string, int> *current_pair = *it;
    if(current_pair->first == key)
      return current_pair->second;
  }

  return -1;
}

bool Map::exists(string key)
{
  list< pair<string, int>* > * v =  array[hash(key)];

  for(list<pair<string, int>*>::iterator it = v->begin(); it != v->end(); it++)
  {
    pair<string, int> *current_pair = *it;
    if(current_pair->first == key)
      return true;
  }
  return false;
}

void Map::remove(string key)
{
  if(exists(key)){
    list< pair<string, int>* > * v =  array[hash(key)];
    pair<string, int> *current_pair;
    for(list<pair<string, int>*>::iterator it = v->begin(); it != v->end(); it++)
    {
      current_pair = *it;
      if(current_pair->first == key){
        break;
      }
    }
    v->remove(current_pair);
  }
}
