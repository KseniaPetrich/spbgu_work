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

    KPet::MenuItem study = { "1 - Хочу учиться математике!", KPet::study };
    KPet::MenuItem exit  = { "0 - Я лучше пойду понежу...", KPet::exit };

    KPet::MenuItem* main_children[] = { &exit, &study };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    int user_input;
    do {
        std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
        for (int i = 1; i < main_size; i++) {
            std::cout << main_children[i]->title << std::endl;
        }
        std::cout << main_children[0]->title << std::endl;
        std::cout << "Обучайка > ";

        std::cin >> user_input;
        main_children[user_input]->func();

        std::cout << std::endl;
    } while (true);

    return 0;
}