
#include <config.h>

#if defined(HAVE_PWD_H)
#include <pwd.h>
#endif

#if defined(HAVE_SYS_TYPES_H)
#include <sys/types.h>
#endif

#if defined(HAVE_UNISTD_H)
#include <unistd.h>
#endif

int main(int argc, char** argv) {
#if defined(SIZEOF_LONG_INT)
  if (sizeof(long) != SIZEOF_LONG_INT) {
    return -1;
  }
#endif
#if defined(HAVE_LONG_LONG)
  long long result;
  result = 0;
  return (int)result;
#else
  /* does nothing */
  return 0;
#endif
}
