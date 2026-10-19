#pragma once
#include "menu.hpp"

namespace KPet {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);

    const MenuItem* go_back_main(const MenuItem* current);

    const MenuItem* lermontov(const MenuItem* current);
    const MenuItem* krylov(const MenuItem* current);

    const MenuItem* dubrovsky(const MenuItem* current);
    const MenuItem* onegin(const MenuItem* current);
    const MenuItem* winter_evening(const MenuItem* current);

    const MenuItem* go_back_writers(const MenuItem* current);
}