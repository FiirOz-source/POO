#include "lib.hpp"

// ===== Implémentation de la classe Animal =====
animal::animal(const std::string &nom, int animal_age)
    : name(nom), age(animal_age)
{
    std::cout << "Constructeur de Animal appelé pour " << name << std::endl;
}

animal::~animal()
{
    std::cout << "Destructeur de Animal appelé pour " << name << std::endl;
}

int animal::get_age(void)
{
    return age;
}

void animal::set_age(int animal_age)
{
    age = animal_age;
}

// ===== Implémentation de la classe Dog =====
dog::dog(const std::string &nom, int animal_age, const std::string &race_type)
    : animal(nom, animal_age), race(race_type)
{
    std::cout << "Constructeur de Dog appelé pour " << name << std::endl;
}

dog::~dog()
{
    std::cout << "Destructeur de Dog appelé pour " << name << std::endl;
}

std::string dog::get_race(void)
{
    return race;
}

void dog::set_race(std::string race_type)
{
    race = race_type;
}

int main()
{
    std::cout << "Salam Aleykum\n\n";

    animal animal1("Patrick", 12);

    std::cout << "\nAnimal 1 :\n";
    std::cout << "- Nom : " << animal1.name << "\n";
    std::cout << "- Âge : " << animal1.get_age() << "\n";

    animal1.set_age(animal1.get_age() + 1);
    std::cout << animal1.name << " vieillit d'une année...\n";
    std::cout << "Il a maintenant " << animal1.get_age() << " ans.\n\n";

    dog dog1("Bob", 5, "Rottweiler");

    std::cout << "Un nouvel animal est arrivé, il s'agit d'un chien !\n";
    std::cout << "Il s'appelle " << dog1.name
              << ", il a " << dog1.get_age()
              << " ans et il est de race " << dog1.get_race() << ".\n";

    std::cout << "\nFin du programme.\n";

    return 0;
}
