#include "config.h"
// #undef __OPTIMIZE__
#include "c-strcaseeq.h"
#include "streq.h"

volatile int x;

# if C_CTYPE_ASCII
#  define CASEEQ(other,upper) \
     (c_isupper (upper) ? ((other) & ~0x20) == (upper) : (other) == (upper))
# else
#  define CASEEQ(other,upper) \
     (c_toupper (other) == (upper))
# endif

static inline int unrolled(const char* s1, const char* s2) {
  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  if(CASEEQ(*s1, *s2)) {
    if(*s1 == 0) return 1;
  }
  else {
    return 0;
  }
  s1++; s2++;

  return c_strcasecmp(s1, s2) == 0;
}

int main() {
#ifdef ALREADY_UPPER
    char * volatile encoding = "UTF-8";
#else
    char * volatile encoding = "utf-8";
#endif
    for (int i = 0; i < 1e9; i++) {
        if (unrolled (encoding, "UTF-8")) {
            x = 1;
        }
    }
}
