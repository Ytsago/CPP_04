#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALNB 10

int main() {
{
	Dog			rex;
	Cat			snow;
//	Animal		random;

	std::cout << std::endl;
	std::cout << "the dog say :" << std::endl;
	rex.makeSound();
	std::cout << "the cat say :" << std::endl;
	snow.makeSound();
	//std::cout << "a random animal say :" << std::endl;
	//random.makeSound();
	std::cout << std::endl;
}
{
	std::cout << std::endl;
	Animal *rex = new Dog;
	Animal *snow = new Cat;

	std::cout << std::endl;
	std::cout << "An allocated dog say " << std::endl;
	rex->makeSound();
	std::cout << "An allocated cat say " << std::endl;
	snow->makeSound();
	std::cout << "An allocated wrong cat say " << std::endl;
	std::cout << std::endl;

	delete rex;
	delete snow;
}
	Animal	*farm[ANIMALNB];
	Cat		snowBall;
	Cat		tygrou;	

	for (int i = 0; i < ANIMALNB; i++) {
		if (i % 2 == 0)
			farm[i] = new Cat;
		else
	  		farm[i] = new Dog;
	}
	std::cout << std::endl;
	tygrou = snowBall;
	for (int i = 0; i < ANIMALNB; i++)
		farm[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < ANIMALNB; i++)
		delete farm[i];
}
