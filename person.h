#pragma once

#include <bits/stdc++.h>
#include <properties.h>
#include <location.h>
#include <image.h>

using namespace std;

class Person{
    Person(Properties property, Location location) {
        property_ = property;
        location_ = location;
    }

    static constexpr ImageType IMAGE_TYPE = PERSON;

    Location Get_location() {
        return location_;
    }

    Location Get_next_location(char input) {
        return location_.Get_next_location(input);
    }

private:
    Properties property_;
    Location location_;


};