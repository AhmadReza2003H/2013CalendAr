#include <unordered_map>
#include <string>
#include "maps.h"
using namespace std;
const unordered_map<int, int> mounthDay = {
    {1 , 31},
    {2 , 28},
    {3 , 31},
    {4 , 30},
    {5 , 31},
    {6 , 30},
    {7 , 31},
    {8 , 31},
    {9 , 30},
    {10 , 31},
    {11 , 30},
    {12 , 31}
};
const unordered_map<int, string> mounthName = {
    {1 , "January"},
    {2 , "February"},
    {3 , "March"},
    {4 , "April"},
    {5 , "May"},
    {6 , "June"},
    {7 , "July"},
    {8 , "August"},
    {9 , "September"},
    {10 , "October"},
    {11 , "November"},
    {12 , "December"}
};
const unordered_map<int, string> dayName = {
    {1 , "Tuesday"},
    {2 , "Wednesday"},
    {3 , "Thursday"},
    {4 , "Friday"},
    {5 , "Saturday"},
    {6 , "Sunday"},
    {0 , "Monday"}
};
const int DaysOfYear = 365;