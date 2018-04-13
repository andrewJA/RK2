#include <iostream>;
#include <string>;

int main(){
	std::string name = std::getenv("Hello");
	std::cout << name;
}
