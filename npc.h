#pragma once

#include <bits/stdc++.h>
#include <person.h>

using namespace std;

class NPC{
    NPC(Properties property, Location location, Image img) {
        property_ = property;
        location_ = location;
        img_ = img;
    }

    Location pursue(Person person) {
        Location person_location = person.Get_location();
        if(abs(person_location.Get_x() - location_.Get_x()) > abs(person_location.Get_y() - location_.Get_y())) {
            if(person_location.Get_x() > location_.Get_x()) {
                return Location(location_.Get_x()+1, location_.Get_y());
            }
            else {
                return Location(location_.Get_x()-1, location_.Get_y());
            }
        }
        else {
            if(person_location.Get_y() > location_.Get_y()) {
                return Location(location_.Get_x(), location_.Get_y()+1);
            }
            else {
                return Location(location_.Get_x(), location_.Get_y()-1);
            }
        }
    }

    bool ifpursue(Person person) {
        
        Location person_location = person.Get_location();
        return Location::distance(person_location, location_) <= 3;
    }

private:
    Properties property_;
    Location location;
    Image img;

};

