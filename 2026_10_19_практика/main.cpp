#include "menu_items.hpp"
#include "menu_functions.hpp"

int main() {

    const KPet::MenuItem* current = &KPet::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}