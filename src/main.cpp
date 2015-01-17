#include "M_Error.hpp"
#include <typeinfo>

int
main(void) {
	M_ERROR(0, "Test with int %d", 4);
	std::cout << "type [" << typeid(M_ERROR(0, "Test with int %d", 4)).name() << "]" << std::endl;
	M_ERROR(false, "Test with boolean");
	std::cout << "Type [" << typeid(M_ERROR(false, "Test with boolean")).name() << "]" << std::endl;
    return (M_ERROR(0, "return"));
}
