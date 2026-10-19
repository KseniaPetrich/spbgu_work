#include "menu_functions.hpp"
#include <iostream>
#include <cstdlib>

const KPet::MenuItem* KPet::show_menu(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя!" << std::endl;
    for (int i = 1; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;

    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    return current->children[user_input];
}

const KPet::MenuItem* KPet::exit(const MenuItem* current) {
    std::exit(0);
}

const KPet::MenuItem* KPet::go_back_main(const MenuItem* current) {
    return current->parent->parent;
}

const KPet::MenuItem* KPet::go_back_writers(const MenuItem* current) {
    return current->parent->parent;
}

const KPet::MenuItem* KPet::lermontov(const MenuItem* current) {
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::krylov(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::dubrovsky(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::onegin(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}

const KPet::MenuItem* KPet::winter_evening(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl;
    return current->parent;
}