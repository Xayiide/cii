#ifndef _ATOM_H_
#define _ATOM_H_

extern       int   atom_length(const char *str);
extern const char *atom_new   (const char *str, int len);
extern const char *atom_string(const char *str);
extern const char *atom_int   (long n);

#endif
