#ifndef _EXCEPT_H_
#define _EXCEPT_H_

#include <setjmp.h>

#define T Except_T
typedef struct T
{
    const char *reason;
};

void Except_raise(const T *e, const char *file, int line);

#define RAISE(e) Except_raise(&(e), __FILE__, __LINE__)


#undef T
#endif
