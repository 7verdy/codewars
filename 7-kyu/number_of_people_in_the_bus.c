// https://www.codewars.com/kata/5648b12ce68d9daa6b000099

#include <stddef.h>

int bus_terminus (size_t nb_stops, const short bus_stops[nb_stops][2])
{
  int passengers_left = 0;
  for (size_t i = 0; i < nb_stops; i++) { passengers_left += bus_stops[i][0]; passengers_left -= bus_stops[i][1]; }
  return passengers_left;
}