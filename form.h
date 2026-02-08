#pragma once

#include <bits/stdc++.h>
#include <image.h>
#include <properties.h>
#include <key.h>

using namespace std;

static constexpr int SPEED_BASE = 1;

class FormBase {
    FormBase(int bypass, int speed, Image img) {
        bypass_ = bypass;
        speed_ = speed;
        img_ = img;
    }
    FormBase(int bypass, int speed) {
        bypass_ = bypass;
        speed_ = speed;
    }

    bool Get_bypass() {
        return bypass_;
    }

    int Get_speed() {
        return speed_;
    }

    virtual void Set_bypass(bool bypass) {
        bypass_ = bypass;
    }

    void Set_speed(int speed) {
        speed_ = speed;
    }

protected:
    bool bypass_;
    int speed_;
    Image img_;

};

class Gate : FormBase {
    Gate() : FormBase(false, SPEED_BASE, Image(ImageType::GATE_CLOSE)) {
        
    }

    void Set_bypass(bool bypass) override {
        bypass_ = bypass;
        img_.Set_type(bypass ? ImageType::GATE_OPEN : ImageType::GATE_CLOSE);
    }

};

class Chest : FormBase {
    Chest(int bypass, int speed, Properties prop, Key key) : FormBase(true, SPEED_BASE, Image(ImageType::CHEST_CLOSE)) {
        prop_ = prop;
        key_ = key;
    }

    void open() {
        img_.Set_type(ImageType::CHEST_OPEN);
        // prop , key

    }

private:
    Properties prop_;
    Key key_;


};