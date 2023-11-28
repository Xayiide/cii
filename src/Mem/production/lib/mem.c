#include <stdio.h>  /* fprintf */
#include <stdlib.h> /* malloc  */

#include "inc/mem.h"

void *mem_alloc(long nbytes, const char *file, int line)
{
    void *ptr;

    if (nbytes <= 0) {
        fprintf(stderr, "nbytes must be greater than 0\n");
        return NULL;
    }

    ptr = malloc(nbytes);
    if (ptr == NULL) {
        if (file == NULL) {}
            /* raise */
        else {}
            /* except_raise */
    }

    return ptr;
}

void *mem_calloc(long count, long nbytes, const char *file, int line)
{
    void *ptr;

    if (count <= 0 || nbytes <= 0) {
        fprintf(stderr, "count and nbytes must be greater than 0\n");
        return NULL;
    }

    ptr = calloc(count, nbytes);
    if (ptr == NULL) {
        if (file == NULL) {}
            /* raise */
        else {}
            /* except_raise */
    }

    return ptr;
}

void mem_free(void *ptr, const char *file, int line)
{
    if (ptr)
        free(ptr);
}

void *mem_resize(void *ptr, long nbytes, const char *file, int line)
{
    if (ptr == NULL) {
        fprintf(stderr, "ptr can't be NULL\n");
        return NULL;
    }

    if (nbytes <= 0) {
        fprintf(stderr, "nbytes must be greater than 0\n");
        return NULL;
    }

    ptr = realloc(ptr, nbytes);
    if (ptr == NULL) {
        if (file == NULL) {}
            /* raise */
        else {}
            /* except_raise */
    }

    return ptr;
}
