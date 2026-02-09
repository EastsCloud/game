#pragma once

#include <bits/stdc++.h>

using namespace std;

class Location{
    Location(int x, int y) {
        x_ = x;
        y_ = y;
    }

    Location Get_next_location(char input) {
        if(input == 'w' || input == 'W') {
            return Location(x_-1, y_);
        }
        if(input == 'a' || input == 'A') {
            return Location(x_, y_-1);
        }
        if(input == 's' || input == 'S') {
            return Location(x_+1, y_);
        }
        if(input == 'd' || input == 'D') {
            return Location(x_, y_+1);
        }
    }

    int Get_x() {
        return x_;
    }

    int Get_y() {
        return y_;
    }

    int distance(Location a, Location b) {
        return sqrt(abs(a.Get_x()-b.Get_x())*abs(a.Get_x()-b.Get_x()) + abs(a.Get_y()-b.Get_y())*abs(a.Get_y()-b.Get_y()));
    }
    
private:
    int x_;
    int y_;

};