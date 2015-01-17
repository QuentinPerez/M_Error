#ifndef M_ERROR_HPP
# define M_ERROR_HPP

# include <stdarg.h>
# include <iostream>

# define M_ERROR(type, ret, fmt, args...)	mf_error<type>(ret, __func__, __FILE__, __LINE__, fmt, ##args)

template <typename T>
T   mf_error(T ret, const char *func, const char *file, const int line, const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    std::cerr << "\033[0;37m" << file << ", line \033[1;33m" << line << ": \033[1;37m" << func << "()" << std::endl << "\033[1;31m→\t" << std::flush;
    vfprintf(stderr, fmt, ap);
    std::cerr << ".\033[0;37m" << std::endl;
    va_end(ap);
    return (ret);
}

#endif
