#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
  char *p = out;
  while( *fmt) {
    if (*fmt == '%') {
      fmt++;
      switch (*fmt) {
        case 'd': {
          int num = va_arg(ap, int);
          if (num < 0) {
            *p++ = '-';
            num = -num;
          }
          char buf[20]; 
          char *buf_ptr = buf + sizeof(buf) - 1; 
          *buf_ptr = '\0'; 
          do {
            *--buf_ptr = '0' + (num % 10); 
            num /= 10;
          } while (num > 0);
          while (*buf_ptr) {
            *p++ = *buf_ptr++;
          }
          break;
        }
        case 's': {
          const char *str = va_arg(ap, const char *);
          while (*str) {
            *p++ = *str++;
          }
          break;
        }
        case 'c': {
          char c = (char)va_arg(ap, int);
          *p++ = c;
          break;
        }
        default:
          *p++ = *fmt; 
      }
    } else {
      *p++ = *fmt; 
    }
    fmt++;
  }
  *p = '\0';
  return p - out; 
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
