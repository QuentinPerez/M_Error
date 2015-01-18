#include "M_Error.hpp"
#include <typeinfo>
#include <unistd.h>

void
test_stack2(void) {
	M_ERROR(static_cast<char *>(NULL), "Test ...");
	std::cout << "type [" << typeid(M_ERROR(static_cast<char *>(NULL), "Test ...")).name() << "]" << std::endl;
}

void
test_stack(void) {
	M_ERROR(0, "Test with int %d", 4);
	std::cout << "type [" << typeid(M_ERROR(0, "Test with int %d", 4)).name() << "]" << std::endl;
	test_stack2();
}

int
main(void) {
	test_stack();
	M_ERROR(false, "Test with boolean");
	std::cout << "Type [" << typeid(M_ERROR(false, "Test with boolean")).name() << "]" << std::endl;
	return (M_ERROR(0, "return"));
}
