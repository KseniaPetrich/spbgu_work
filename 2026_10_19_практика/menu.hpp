#pragma once

namespace KPet {
    struct MenuItem {
        const char* title;
        const MenuItem* (*func)(const MenuItem* current);

        const MenuItem* parent;

        const MenuItem* const *children;
        const int children_count;
    };
}

int i1
double d1
char c1
int i2
char c2
int i3