#pragma once

#include <bits/stdc++.h>

using namespace std;

enum class ImageType {
    FORM = 0,
    GATE_OPEN = 1,
    GATE_CLOSE = 2,
    CHEST_OPEN = 3,
    CHEST_CLOSE = 4,
    PERSON = 5,
    NPC_1 = 6,
    NPC_2 = 7,
    NUM
};

class Image {
    Image(ImageType type) {
        type_ = type;
    }
    Image() {
        type_ = ImageType::FORM;
    }

    ImageType Get_type() {
        return type_;
    }

    void Set_type(ImageType type) {
        type_ = type;
    }

private:
    ImageType type_;

};