#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  assert(dst != NULL && src != NULL); //检查指针的有效性  

  char *ret = dst;  //记下dst的初始地址防止找不到

  while ((*dst++=*src++)!='\0'); //将src中所有字符(包括'\0')一个字符一个字符的拷贝到dst(包括'\0')。在赋值完'\0'后，循环停止

  return ret;

}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *tmp = dst;//记下dest的初始地址防止找不到
 
  while (*dst)
          dst++; //找到dest的末尾
  while ((*dst++ = *src++) != '\0'); //将src附加到dest后面

  return tmp;

}

int strcmp(const char *s1, const char *s2) {
  if (s1 == NULL || s2 == NULL) return 0;
  int ret = 0 ;
  while( !(ret = *(unsigned char *)s1 - *(unsigned char *)s2) && *s2)
      ++s1, ++s2;
  if ( ret < 0 )
      ret = -1 ;
  else if ( ret > 0 )
      ret = 1 ;
  return( ret );

  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  const unsigned char uc = c;
  unsigned char *su;
  for(su = s; 0 < n; ++su, --n)

      *su = uc;

  return (s);
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *su1, *su2;

  for(su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, --n)

      if(*su1 != *su2)

          return ((*su1 < *su2) ? -1 : +1);

  return 0;

}

#endif
