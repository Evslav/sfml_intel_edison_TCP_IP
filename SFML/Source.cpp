#include <iostream>
#include "Time.hpp"
#include "String.hpp"
#include "Network.hpp"


int main() {
	sf::String s("Hello");
	std::cout << s.toAnsiString() << std::endl;
	return 0;
}
