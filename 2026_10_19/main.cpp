#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {

    KPet::MenuItem study_sum = { "1 - Хочу учиться складывать!", KPet::study_sum };
    KPet::MenuItem study_subtract = { "2 - Хочу учиться вычитать!", KPet::study_subtract };
    KPet::MenuItem study_multiply = { "3 - Хочу учиться умножать!", KPet::study_multiply };
    KPet::MenuItem study_divide = { "4 - Хочу учиться делить!", KPet::study_divide };
    KPet::MenuItem study_go_back = { "0 - Войти в главное меню", KPet::study_go_back };

    KPet::MenuItem* study_children[] = {
        &study_go_back,
        &study_sum,
        &study_subtract,
        &study_multiply,
        &study_divide
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);

    KPet::MenuItem study = { "1 - Хочу учиться математике!", KPet::show_menu, study_children, study_size };
    KPet::MenuItem exit  = { "0 - Я лучше пойду понежу...", KPet::exit };

    KPet::MenuItem* main_children[] = { &exit, &study };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    KPet::MenuItem root = { nullptr, KPet::show_menu, main_children, main_size };

    study_sum.parent = &study;
    study_subtract.parent = &study;
    study_multiply.parent = &study;
    study_divide.parent = &study;
    study_go_back.parent = &study;

    study.parent = &root;
    exit.parent = &root;

    const KPet::MenuItem* current = &root;

    do {
        current = current->func(current);
    } while (true);

    return 0;
}