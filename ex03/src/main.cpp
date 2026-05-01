#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "========== TEST 1: MateriaSource full ==========\n";
    {
        MateriaSource src;

        src.learnMateria(new Ice());
        src.learnMateria(new Cure());
        src.learnMateria(new Ice());
        src.learnMateria(new Cure());

        src.learnMateria(new Ice());
    }

    std::cout << "\n========== TEST 2: Equip / Unequip (NO LEAKS) ==========\n";
    {
        MateriaSource src;
        src.learnMateria(new Ice());
        src.learnMateria(new Cure());

        Character me("me");

        AMateria* tmp;

        tmp = src.createMateria("ice");
        me.equip(tmp);

        tmp = src.createMateria("cure");
        me.equip(tmp);

        me.unequip(0);
        me.unequip(1);
    }

    std::cout << "\n========== TEST 3: Uso de materias ==========\n";
    {
        MateriaSource src;
        src.learnMateria(new Ice());
        src.learnMateria(new Cure());

        Character me("me");
        Character bob("bob");

        AMateria* tmp;

        tmp = src.createMateria("ice");
        me.equip(tmp);

        tmp = src.createMateria("cure");
        me.equip(tmp);

        me.use(0, bob);
        me.use(1, bob);
		me.unequip(0);
		me.use(0, bob);
    }

    std::cout << "\n========== TEST 4: Deep Copy Character ==========\n";
    {
        MateriaSource src;
        src.learnMateria(new Ice());
        src.learnMateria(new Cure());

        Character original("original");

        AMateria* tmp;

        tmp = src.createMateria("ice");
        original.equip(tmp);

        tmp = src.createMateria("cure");
        original.equip(tmp);

        // Copia
        Character copy(original);

        std::cout << "--- Using original ---\n";
        Character target("target");
        original.use(0, target);
        original.use(1, target);

        std::cout << "--- Using copy ---\n";
        copy.use(0, target);
        copy.use(1, target);

        original.unequip(0);

        std::cout << "--- After unequip original ---\n";
        original.use(0, target);
        copy.use(0, target);
    }

    std::cout << "\n========== TEST 5: Assignment operator ==========\n";
    {
        MateriaSource src;
        src.learnMateria(new Ice());
        src.learnMateria(new Cure());

        Character a("A");
        Character b("B");

        AMateria* tmp;

        tmp = src.createMateria("ice");
        a.equip(tmp);

        tmp = src.createMateria("cure");
        a.equip(tmp);

        b = a;

        Character target("target");

        std::cout << "--- A uses ---\n";
        a.use(0, target);
        a.use(1, target);

        std::cout << "--- B uses ---\n";
        b.use(0, target);
        b.use(1, target);

        a.unequip(0);

        std::cout << "--- After modifying A ---\n";
        a.use(0, target);
        b.use(0, target);
    }

    std::cout << "\n========== FIN ==========\n";
    return 0;
}