#include "M_Error.hpp"

int
main(void) {
    M_ERROR(int, 0, "Test with int %d", 4);
    M_ERROR(bool, false, "Test with boolean");
    return (M_ERROR(int, 0, "return"));
}
