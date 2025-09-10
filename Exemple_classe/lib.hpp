#ifndef LIB_HPP
#define LIB_HPP

#include <iostream>
#include <string>

// ===== Classe Animal =====
class animal
{
public:
    animal(const std::string &nom, int animal_age);
    ~animal();

    int get_age(void);
    void set_age(int animal_age);

    std::string name;

private:
    int age;
};

// ===== Classe Dog =====
class dog : public animal
{
public:
    dog(const std::string &nom, int animal_age, const std::string &race_type);
    ~dog();

    std::string get_race(void);
    void set_race(std::string race_type);

private:
    std::string race;
};

#endif // LIB_HPP
