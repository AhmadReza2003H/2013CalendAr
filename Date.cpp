#include "Date.h"
#include <iostream>
#include "maps.h"
Date::Date(int day , int mounth){
    if(mounth > 12 || mounth < 1 || mounthDay.at(mounth) < day){
        throw "Invalid Argument";
    } else {
        Date::day = day;
        Date::mounth = mounth;       
        Date::dayOfYear = day;
        for(int i = 1 ; i < Date::mounth ; i++){
            Date::dayOfYear += mounthDay.at(i);
        }
        Date::remainDays = DaysOfYear - Date::dayOfYear;
    }
}
Date Date::setDate(int day , int mounth) const{
    if(mounth > 12 || mounth < 1 || mounthDay.at(mounth) < day){
        throw "Invalid Argument";
    } else{
        return Date(day , mounth);
    }
}
Date Date::plusDay(int day) const{
    if(day > Date::remainDays || day < 0){
        throw "Invalid Argument";
    } else {
        int newDay = Date::day;
        int newMounth = Date::mounth;
        while(true){
            if(day + day > mounthDay.at(newMounth)){
                newDay -= mounthDay.at(newMounth);
                newMounth;
            } else {
                break;
            }
        }
        return Date(newDay , newMounth);
    }
}
Date Date::minusDay(int day) const{
    if(day > Date::dayOfYear || day < 0){
        throw "Invalid Argument";
    } else {
        int newDay = Date::day;
        int newMounth = Date::mounth;
        while(true){
            if(newDay - day < 1){
                day -= mounthDay.at(newMounth);
                newMounth--;
            } else {
                break;
            }
        }
        return Date(newDay , newMounth);
    }
}
void Date::print() const{
    printf("\n%s , %s %d 2013\n", dayName.at(Date::dayOfYear%7).c_str() , mounthName.at(Date::mounth).c_str() , Date::day);
}
int Date::getDay() const {
    return Date::day;
}
int Date::getMounth() const {
    return Date::mounth;
}
int Date::getDayOfYear() const {
    return Date::dayOfYear;
}
int Date::getRemainDays() const {
    return Date::remainDays;
}