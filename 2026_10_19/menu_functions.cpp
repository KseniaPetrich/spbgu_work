#include "menu_functions.hpp"
#include <cstdlib>
#include <iostream>

const KPet::MenuItem* KPet::exit(const MenuItem* current) {
    std::exit(0);
}
const KPet::MenuItem* KPet::show_menu(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const KPet::MenuItem* KPet::study_sum(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::study_subtract(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::study_multiply(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::study_divide(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::study_go_back(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent->parent;
}