#pragma once

#include <bits/stdc++.h>

using namespace std;

class Properties {
    Properties(int hp, int dfs, int atk, int mobility) {
        hp_ = hp;
        dfs_ = dfs;
        atk_ = atk;
        mobility_ = mobility;
    }
    Properties operator += (const Properties& prop) {
        hp_ += prop.hp_;
        dfs_ += prop.dfs_;
        atk_ += prop.atk_;
        mobility_ += prop.mobility_;
    }

    int Get_hp() {
        return hp_;
    }

    int Get_dfs() {
        return dfs_;
    }

    int Get_atk() {
        return atk_;
    }

    int Get_mobility() {
        return mobility_;
    }

    void Set_hp(int hp) {
        hp_ = hp;
    }

    void Set_dfs(int dfs) {
        dfs_ = dfs;
    }

    void Set_atk(int atk) {
        atk_ = atk;
    }

    void Set_mobility(int mobility) {
        mobility_ = mobility;
    }

private:    
    int hp_;
    int dfs_;
    int atk_;
    int mobility_;


};