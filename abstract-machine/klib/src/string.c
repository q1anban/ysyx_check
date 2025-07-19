#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define PASS_c return __a__unused__char_star__variable__;
#define PASS return __a__unused__size_t__variable__;

char* __a__unused__char_star__variable__;
size_t __a__unused__size_t__variable__;

size_t strlen(const char *s) {
  //panic("Not implemented");
  const char *p = s;
  size_t len = 0;
  while (*p++) {
    len++;
  }
  return len;
}

char *strcpy(char *dst, const char *src) {//
  //panic("Not implemented");
  
  //compare the src and dst pointers
  if (dst == src) {
    return dst;
  }
  else if (dst > src) {
    // If dst is after src, we need to copy backwards
    char *d = dst + strlen(src);
    const char *s = src + strlen(src);
    while (s >= src) {
      *d-- = *s--;
    }
    return dst;
  }
  else 
  {
    // If dst is before src, we can copy forwards
    char *dst_start = dst;
    while (*src) {
      *dst++ = *src++;
    }
    *dst = '\0'; // Null-terminate the destination string
    return dst_start;
  }
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {//
  //panic("Not implemented");
  
  strcpy(dst + strlen(dst), src);
  return dst;

}

int strcmp(const char *s1, const char *s2) {//
  //panic("Not implemented");
  while (*s1!='\0' && *s2!='\0') {
    if (*s1 != *s2) {
      return (unsigned char)*s1 - (unsigned char)*s2;
    }
    s1++;
    s2++;
  }
  return (unsigned char)*s1 - (unsigned char)*s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  unsigned char *p = s;
  while (n--) {
    *p++ = (unsigned char)c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;
  while (n--) {
    if (*p1 != *p2) {
      return *p1 - *p2;
    }
    p1++;
    p2++;
  }
  return 0;
}

#endif
