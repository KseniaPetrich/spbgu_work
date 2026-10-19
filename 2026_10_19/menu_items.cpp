#include <cstddef>

#include "menu_items.hpp"
#include "menu_functions.hpp"

const KPet::MenuItem KPet::STUDY_GO_BACK = { "0 - Выйти в главное меню", KPet::go_back_to_main, &KPet::STUDY };
const KPet::MenuItem KPet::ALGEBRA_SUM = { "1 - Хочу научиться складывать!", KPet::algebra_sum, &KPet::ALGEBRA };
const KPet::MenuItem KPet::ALGEBRA_SUBTRACT = { "2 - Хочу научиться вычитать!", KPet::algebra_subtract, &KPet::ALGEBRA };
const KPet::MenuItem KPet::ALGEBRA_MULTIPLY = { "3 - Хочу научиться умножать!", KPet::algebra_multiply, &KPet::ALGEBRA };
const KPet::MenuItem KPet::ALGEBRA_DIVIDE = { "4 - Хочу научиться делить!", KPet::algebra_divide, &KPet::ALGEBRA };
const KPet::MenuItem KPet::ALGEBRA_GO_BACK = { "0 - Вернуться к выбору предметов.", KPet::go_back_to_subjects, &KPet::ALGEBRA };

namespace {
    const KPet::MenuItem* const algebra_children[] = {
        &KPet::ALGEBRA_GO_BACK, 
        &KPet::ALGEBRA_SUM, 
        &KPet::ALGEBRA_SUBTRACT, 
        &KPet::ALGEBRA_MULTIPLY, 
        &KPet::ALGEBRA_DIVIDE
    };
    const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const KPet::MenuItem KPet::MATAN_DERIVATIVE = { "1 - Хочу изучить дифференциальное исчисление!", KPet::matan_derivative, &KPet::MATAN };
const KPet::MenuItem KPet::MATAN_INTEGRAL = { "2 - Хочу изучить интегральное исчисление!", KPet::matan_integral, &KPet::MATAN };
const KPet::MenuItem KPet::MATAN_GO_BACK = { "0 - Вернуться к выбору предметов.", KPet::go_back_to_subjects, &KPet::MATAN };

namespace {
    const KPet::MenuItem* const matan_children[] = {
        &KPet::MATAN_GO_BACK, 
        &KPet::MATAN_DERIVATIVE, 
        &KPet::MATAN_INTEGRAL
    };
    const int matan_size = sizeof(matan_children) / sizeof(matan_children[0]);
}

const KPet::MenuItem KPet::ALGEBRA = { "1 - Хочу изучать алгебру!", KPet::show_menu, &KPet::STUDY, algebra_children, algebra_size };
const KPet::MenuItem KPet::MATAN = { "2 - Хочу изучать математический анализ!", KPet::show_menu, &KPet::STUDY, matan_children, matan_size };

namespace {
    const KPet::MenuItem* const study_children[] = {
        &KPet::STUDY_GO_BACK, 
        &KPet::ALGEBRA,
        &KPet::MATAN
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const KPet::MenuItem KPet::STUDY = { "1 - Хочу учиться математике!", KPet::show_menu, &KPet::MAIN, study_children, study_size };
const KPet::MenuItem KPet::EXIT = { "0 - Я лучше пойду полежу...", KPet::exit, &KPet::MAIN };

namespace {
    const KPet::MenuItem* const main_children[] = {
        &KPet::EXIT,
        &KPet::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KPet::MenuItem KPet::MAIN = { nullptr, KPet::show_menu, nullptr, main_children, main_size };
