namespace KPet {
    struct MenuItem {
        const char* const title;
        void (*func)();
    };
}