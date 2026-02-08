#pragma once

#include <bits/stdc++.h>

using namespace std;

class Key {

    Key operator += (const Key& key) {
        num_ += key.num_;
    }

    uint32_t num_;

};

