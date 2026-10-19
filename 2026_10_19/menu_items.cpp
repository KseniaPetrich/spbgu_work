#include <cstddef>

#include "menu_items.hpp"
#include "menu_functions.hpp"

const KPet::MenuItem KPet::STUDY_SUMM = { "1 - Хочу учиться складывать!", KPet::study_sum, &KPet::STUDY };
const KPet::MenuItem KPet::STUDY_SUBSTRACT = { "2 - Хочу учиться вычитать!", KPet::study_subtract, &KPet::STUDY };
const KPet::MenuItem KPet::STUDY_MULTIPLY = { "3 - Хочу учиться умножать!", KPet::study_multiply, &KPet::STUDY };
const KPet::MenuItem KPet::STUDY_DIVIDE = { "4 - Хочу учиться делить!", KPet::study_divide, &KPet::STUDY };
const KPet::MenuItem KPet::STUDY_GO_BACK = { "0 - Войти в главное меню", KPet::study_go_back, &KPet::STUDY };

namespace {
    const KPet::MenuItem* const study_children[] = {
        &KPet::STUDY_GO_BACK,
        &KPet::STUDY_SUMM,
        &KPet::STUDY_SUBSTRACT,
        &KPet::STUDY_MULTIPLY,
        &KPet::STUDY_DIVIDE
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}
    
const KPet::MenuItem KPet::STUDY = { "1 - Хочу учиться математике!", KPet::show_menu, &KPet::MAIN, study_children, study_size };
const KPet::MenuItem KPet::EXIT = { "0 - Я лучше пойду понежу...", KPet::exit, &KPet::MAIN };
    
namespace {
    const KPet::MenuItem* const main_children[] = {
        &KPet::EXIT,
        &KPet::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KPet::MenuItem KPet::MAIN = { nullptr, KPet::show_menu, nullptr, main_children, main_size };
