#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
{
	Dog			rex;
	Cat			snow;
	WrongCat	snake;
	Animal		random;

	std::cout << std::endl;
	std::cout << "the dog say :" << std::endl;
	rex.makeSound();
	std::cout << "the cat say :" << std::endl;
	snow.makeSound();
	std::cout << "the wrong cat say :" << std::endl;
	snake.makeSound();
	std::cout << "a random animal say :" << std::endl;
	random.makeSound();
	std::cout << std::endl;
}
{
	std::cout << std::endl;
	Animal *rex = new Dog;
	Animal *snow = new Cat;
	WrongAnimal* snake = new WrongCat;

	std::cout << std::endl;
	std::cout << "An allocated dog say " << std::endl;
	rex->makeSound();
	std::cout << "An allocated cat say " << std::endl;
	snow->makeSound();
	std::cout << "An allocated wrong cat say " << std::endl;
	snake->makeSound();
	std::cout << std::endl;

	delete rex;
	delete snow;
	delete snake;
}
}
