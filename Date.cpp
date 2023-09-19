#include "Date.h"
#include <iostream>
#include "maps.h"

Date::Date(int day , int mounth) {
    if(mounth > 12 || mounth < 1 || mounthDay.at(mounth) < day){
        throw "Invalid Argument";
    } else {
        this->day = day;
        this->mounth = mounth;       
        this->dayOfYear = day;
        for(int i = 1 ; i < this->mounth ; i++){
            this->dayOfYear += mounthDay.at(i);
        }
        this->remainDays = DaysOfYear - this->dayOfYear;
    }
}

Date::Date(int dayOfYear) {
    if(dayOfYear > DaysOfYear){
        throw "Invalid Argument";
    } else {
        this->dayOfYear = dayOfYear;
        this->remainDays = DaysOfYear - dayOfYear;
        this->calculateDate();
    }
}

Date Date::setDate(int day , int mounth) const {
    if(mounth > 12 || mounth < 1 || mounthDay.at(mounth) < day){
        throw "Invalid Argument";
    } else{
        return Date(day , mounth);
    }
}

Date Date::plusDay(int day) const {
    return Date(this->dayOfYear + day);
}

Date Date::minusDay(int day) const {
    return Date(this->dayOfYear - day);
}

void Date::calculateDate() {
    this->mounth = 1;
    this->day = this->dayOfYear;
    while(this->day > mounthDay.at(this->mounth)){
        this->day -= mounthDay.at(this->mounth);
        this->mounth++;
    }
}

void Date::print() const {
    std::cout << dayName.at(this->dayOfYear%7) << " , " << mounthName.at(this->mounth) << " " << this->day << " 2013" << endl;
}

int Date::getDay() const {
    return day;
}

int Date::getMounth() const {
    return mounth;
}

int Date::getDayOfYear() const {
    return dayOfYear;
}

int Date::getRemainDays() const {
    return remainDays;
}