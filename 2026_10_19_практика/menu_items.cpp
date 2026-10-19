#include <cstddef>
#include "menu_items.hpp"
#include "menu_functions.hpp"

const KPet::MenuItem KPet::PUSHKIN_DUBROVSKY = { "1 - Дубровский", KPet::dubrovsky, &KPet::PUSHKIN };
const KPet::MenuItem KPet::PUSHKIN_ONEGIN = { "2 - Евгений Онегин", KPet::onegin, &KPet::PUSHKIN };
const KPet::MenuItem KPet::PUSHKIN_WINTER_EVENING = { "3 - Зимний вечер", KPet::winter_evening, &KPet::PUSHKIN };
const KPet::MenuItem KPet::PUSHKIN_GO_BACK = { "0 - Выйти в предыдущее меню", KPet::go_back_writers, &KPet::PUSHKIN };

namespace {
    const KPet::MenuItem* const pushkin_children[] = {
        &KPet::PUSHKIN_GO_BACK,
        &KPet::PUSHKIN_DUBROVSKY,
        &KPet::PUSHKIN_ONEGIN, 
        &KPet::PUSHKIN_WINTER_EVENING
    };
    const int pushkin_size = sizeof(pushkin_children) / sizeof(pushkin_children[0]);
}

const KPet::MenuItem KPet::PUSHKIN = { "1 - Читать Пушкина", KPet::show_menu, &KPet::WRITERS, pushkin_children, pushkin_size };
const KPet::MenuItem KPet::LERMONTOV = { "2 - Читать Лермонтова", KPet::lermontov, &KPet::WRITERS };
const KPet::MenuItem KPet::KRYLOV = { "3 - Читать Крылова", KPet::krylov, &KPet::WRITERS };
const KPet::MenuItem KPet::WRITERS_GO_BACK = { "0 - Выйти в главное меню", KPet::go_back_main, &KPet::WRITERS };

namespace {
    const KPet::MenuItem* const writers_children[] = {
        &KPet::WRITERS_GO_BACK, 
        &KPet::PUSHKIN, 
        &KPet::LERMONTOV, 
        &KPet::KRYLOV
    };
    const int writers_size = sizeof(writers_children) / sizeof(writers_children[0]);
}

const KPet::MenuItem KPet::WRITERS = { "1 - Русские писатели", KPet::show_menu, &KPet::MAIN, writers_children, writers_size };

const KPet::MenuItem KPet::EXIT = { "0 - Завершить чтение", KPet::exit, &KPet::MAIN };

namespace {
    const KPet::MenuItem* const main_children[] = {
        &KPet::EXIT, 
        &KPet::WRITERS
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KPet::MenuItem KPet::MAIN = { nullptr, KPet::show_menu, nullptr, main_children, main_size };