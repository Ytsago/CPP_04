#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
/*
int main() {
	ICharacter		*player[2];
	IMateriaSource	*spellBook;

	spellBook = new MateriaSource;
	player[0] = new Character("Kevin");
	player[1] = new Character("Iris");

	std::cout << std::endl << std::endl;
	spellBook->learnMateria(new Ice);
	spellBook->learnMateria(new Cure);
	player[0]->equip(spellBook->createMateria("ice"));
	player[0]->equip(spellBook->createMateria("cure"));
	player[1]->equip(spellBook->createMateria("ice"));
	player[1]->equip(spellBook->createMateria("fire"));
	
	std::cout << std::endl;
	player[0]->use(0, *player[1]);
	player[0]->use(2, *player[1]);
	player[1]->use(1, *player[0]);
	player[1]->unequip(0);
	player[1]->use(0, *player[0]);

	std::cout << std::endl << std::endl;
	delete player[0];
	delete player[1];
	delete spellBook;
}
*/
int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}
/*
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    // IDX == 0
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    // IDX == 1
    me->equip(tmp);
    
    tmp = src->createMateria("earth");
    // IDX == 2
    me->equip(tmp);
    
    tmp = src->createMateria("fire");
    // IDX == 3
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    
    std::cout << std::endl;
    
    ICharacter* martin = me;
    martin->use(0, *me);
    martin->use(1, *me);
    martin->use(2, *me);
    martin->use(3, *me);

    std::cout << std::endl;

    // IDX 2 was earth
    // UNEQUIP HERE
    me->unequip(2);
    me->use(2, *bob);
    tmp = src->createMateria("earth");
    // IDX == 2
    me->equip(tmp);
    me->use(2, *bob);

    // ERROR SECTION //
    bob->use(0, *me);
    bob->use(1, *me);
    bob->use(2, *me);
    bob->use(3, *me);
    bob->use(4, *me);
    
    tmp = src->createMateria("thunder");

    delete bob;
    delete me;
    delete src;
    return 0;
}*/
