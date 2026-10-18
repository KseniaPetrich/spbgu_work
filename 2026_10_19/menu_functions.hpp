#pragma once

#include "menu.hpp"

namespace KPet {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);

    const MenuItem* study_sum(const MenuItem* current);
    const MenuItem* study_subtract(const MenuItem* current);
    const MenuItem* study_multiply(const MenuItem* current);
    const MenuItem* study_divide(const MenuItem* current);
    const MenuItem* study_go_back(const MenuItem* current);
}