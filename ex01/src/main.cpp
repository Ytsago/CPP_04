#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALNB 10

int main() {
{
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
	
	tygrou.getBrain()->setIdea(0, "Tuna");
	snowBall.getBrain()->setIdea(0, "Salmon");
	snowBall.getBrain()->setIdea(1, "Clownfish");
	
	std::cout << "Tygrou think primarly of " << tygrou.getBrain()->getIdea(0) << " and of " << tygrou.getBrain()->getIdea(1)
	<< "\nSnowball think primarly of " << snowBall.getBrain()->getIdea(0) << " and of " << snowBall.getBrain()->getIdea(1) << std::endl;
	tygrou = snowBall;
	std::cout << "Tygrou think primarly of " << tygrou.getBrain()->getIdea(0) << " and of " << tygrou.getBrain()->getIdea(1)
	<< "\nSnowball think primarly of " << snowBall.getBrain()->getIdea(0) << " and of " << snowBall.getBrain()->getIdea(1) << "\n" << std::endl;
	std::cout << "Tygrou's brain : " << tygrou.getBrain() << " Snowball's brain : " << snowBall.getBrain() << std::endl;
	snowBall.getBrain()->setIdea(2, "Cod");
	std::cout << "Snowball third idea : " << snowBall.getBrain()->getIdea(2) << "\nTygrou third idea : "<< tygrou.getBrain()->getIdea(2) << std::endl; 
	for (int i = 0; i < ANIMALNB; i++)
		farm[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < ANIMALNB; i++)
		delete farm[i];
}
{
	Dog			rex;
	Cat			snow;
	Animal		random;

	std::cout << std::endl;
	std::cout << "the dog say :" << std::endl;
	rex.makeSound();
	std::cout << "the cat say :" << std::endl;
	snow.makeSound();
	std::cout << "a random animal say :" << std::endl;
	random.makeSound();
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
	std::cout << std::endl;

	delete rex;
	delete snow;
}
}
