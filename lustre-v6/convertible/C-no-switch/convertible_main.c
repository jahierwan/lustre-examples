# 1 "convertible_main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "convertible_main.c"



# 1 "convertible_main.h" 1
# 9 "convertible_main.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 25 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 10 "convertible_main.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 127 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 164 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 282 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 644 "/usr/include/string.h" 3 4

# 11 "convertible_main.h" 2

# 1 "convertible_main_ext.h" 1
# 13 "convertible_main.h" 2
# 1 "lustre_types.h" 1






typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;







typedef _integer convertible_eq_case;
typedef _integer convertible_hood_speed_state;
typedef _integer convertible_hood_state;
typedef struct {
   _integer i;
   _integer j;
   _real v;
  } convertible_update_acc;
typedef _integer convertible_vehicle_state;
# 14 "convertible_main.h" 2
# 1 "lustre_consts.h" 1
# 15 "convertible_main.h" 2






typedef struct {

   convertible_hood_state _memory ;
} Lustre_pre_ctx_type;


typedef struct {

   _boolean _memory ;
} Lustre_arrow_ctx_type;


typedef struct {

   convertible_hood_speed_state _memory ;
} Lustre_pre_2_ctx_type;


typedef struct {

   _boolean _memory ;
} Lustre_arrow_2_ctx_type;


typedef struct {

   _real _memory ;
} Lustre_pre_3_ctx_type;


typedef struct {

   _boolean _memory ;
} Lustre_arrow_3_ctx_type;


typedef struct {

   Lustre_pre_2_ctx_type Lustre_pre_2_ctx_tab[1];
   Lustre_pre_3_ctx_type Lustre_pre_3_ctx_tab[2];
   Lustre_arrow_2_ctx_type Lustre_arrow_2_ctx_tab[1];
   Lustre_arrow_3_ctx_type Lustre_arrow_3_ctx_tab[2];
} convertible_hood_speed_ctx_type;


typedef struct {

   convertible_hood_speed_ctx_type convertible_hood_speed_ctx_tab[1];
   Lustre_pre_ctx_type Lustre_pre_ctx_tab[1];
   Lustre_arrow_ctx_type Lustre_arrow_ctx_tab[1];
} convertible_hood_ctx_type;


typedef struct {

   _boolean _memory ;
} Lustre_arrow_4_ctx_type;


typedef struct {

   _integer _memory ;
} Lustre_pre_4_ctx_type;


typedef struct {

   _real _memory[50] ;
} Lustre_pre_5_ctx_type;


typedef struct {

   _boolean _memory ;
} Lustre_arrow_5_ctx_type;


typedef struct {

   Lustre_pre_5_ctx_type Lustre_pre_5_ctx_tab[1];
   Lustre_pre_4_ctx_type Lustre_pre_4_ctx_tab[1];
   Lustre_arrow_5_ctx_type Lustre_arrow_5_ctx_tab[1];
   Lustre_arrow_4_ctx_type Lustre_arrow_4_ctx_tab[1];
} sum_50_0d0_ctx_type;


typedef struct {

   Lustre_pre_5_ctx_type Lustre_pre_5_ctx_tab[1];
   Lustre_pre_4_ctx_type Lustre_pre_4_ctx_tab[1];
   Lustre_arrow_5_ctx_type Lustre_arrow_5_ctx_tab[1];
   Lustre_arrow_4_ctx_type Lustre_arrow_4_ctx_tab[1];
} sum_50_0d1_ctx_type;


typedef struct {

   sum_50_0d1_ctx_type sum_50_0d1_ctx_tab[1];
   sum_50_0d0_ctx_type sum_50_0d0_ctx_tab[1];
   Lustre_pre_3_ctx_type Lustre_pre_3_ctx_tab[3];
   Lustre_arrow_3_ctx_type Lustre_arrow_3_ctx_tab[3];
} convertible_speed_kmh_ctx_type;


typedef struct {

   convertible_vehicle_state _memory ;
} Lustre_pre_6_ctx_type;


typedef struct {

   _boolean _memory ;
} Lustre_arrow_6_ctx_type;


typedef struct {

   Lustre_pre_6_ctx_type Lustre_pre_6_ctx_tab[1];
   Lustre_arrow_6_ctx_type Lustre_arrow_6_ctx_tab[1];
} convertible_vehicle_ctx_type;


typedef struct {

   Lustre_pre_3_ctx_type Lustre_pre_3_ctx_tab[1];
   Lustre_arrow_3_ctx_type Lustre_arrow_3_ctx_tab[1];
} convertible_may_collide_ctx_type;


typedef struct {

   convertible_vehicle_ctx_type convertible_vehicle_ctx_tab[1];
   convertible_speed_kmh_ctx_type convertible_speed_kmh_ctx_tab[1];
   convertible_may_collide_ctx_type convertible_may_collide_ctx_tab[1];
   convertible_hood_ctx_type convertible_hood_ctx_tab[1];
} convertible_main_ctx_type;

void Lustre_arrow_4_ctx_reset(Lustre_arrow_4_ctx_type* ctx);
void Lustre_arrow_4_ctx_init(Lustre_arrow_4_ctx_type* ctx);
void Lustre_arrow_4_step(_integer ,_integer ,_integer *,Lustre_arrow_4_ctx_type*);

void Lustre_arrow_3_ctx_reset(Lustre_arrow_3_ctx_type* ctx);
void Lustre_arrow_3_ctx_init(Lustre_arrow_3_ctx_type* ctx);
void Lustre_arrow_3_step(_real ,_real ,_real *,Lustre_arrow_3_ctx_type*);

void Lustre_arrow_2_ctx_reset(Lustre_arrow_2_ctx_type* ctx);
void Lustre_arrow_2_ctx_init(Lustre_arrow_2_ctx_type* ctx);
void Lustre_arrow_2_step(convertible_hood_speed_state ,convertible_hood_speed_state ,convertible_hood_speed_state *,Lustre_arrow_2_ctx_type*);

void Lustre_arrow_ctx_reset(Lustre_arrow_ctx_type* ctx);
void Lustre_arrow_ctx_init(Lustre_arrow_ctx_type* ctx);
void Lustre_arrow_step(convertible_hood_state ,convertible_hood_state ,convertible_hood_state *,Lustre_arrow_ctx_type*);

void Lustre_arrow_6_ctx_reset(Lustre_arrow_6_ctx_type* ctx);
void Lustre_arrow_6_ctx_init(Lustre_arrow_6_ctx_type* ctx);
void Lustre_arrow_6_step(convertible_vehicle_state ,convertible_vehicle_state ,convertible_vehicle_state *,Lustre_arrow_6_ctx_type*);

void Lustre_arrow_5_ctx_reset(Lustre_arrow_5_ctx_type* ctx);
void Lustre_arrow_5_ctx_init(Lustre_arrow_5_ctx_type* ctx);
void Lustre_arrow_5_step(_real [50],_real [50],_real [50] ,Lustre_arrow_5_ctx_type*);

void Lustre_eq_step(_integer ,_integer ,_boolean *);

void Lustre_eq_2_step(_real ,_real ,_boolean *);

void Lustre_eq_3_step(convertible_hood_state ,convertible_hood_state ,_boolean *);

void Lustre_hat_step(_real ,_real [50] );

void Lustre_pre_4_ctx_reset(Lustre_pre_4_ctx_type* ctx);
void Lustre_pre_4_ctx_init(Lustre_pre_4_ctx_type* ctx);
void Lustre_pre_4_get(_integer *,Lustre_pre_4_ctx_type*);

void Lustre_pre_4_set(_integer ,Lustre_pre_4_ctx_type*);

void Lustre_pre_3_ctx_reset(Lustre_pre_3_ctx_type* ctx);
void Lustre_pre_3_ctx_init(Lustre_pre_3_ctx_type* ctx);
void Lustre_pre_3_get(_real *,Lustre_pre_3_ctx_type*);

void Lustre_pre_3_set(_real ,Lustre_pre_3_ctx_type*);

void Lustre_pre_2_ctx_reset(Lustre_pre_2_ctx_type* ctx);
void Lustre_pre_2_ctx_init(Lustre_pre_2_ctx_type* ctx);
void Lustre_pre_2_get(convertible_hood_speed_state *,Lustre_pre_2_ctx_type*);

void Lustre_pre_2_set(convertible_hood_speed_state ,Lustre_pre_2_ctx_type*);

void Lustre_pre_ctx_reset(Lustre_pre_ctx_type* ctx);
void Lustre_pre_ctx_init(Lustre_pre_ctx_type* ctx);
void Lustre_pre_get(convertible_hood_state *,Lustre_pre_ctx_type*);

void Lustre_pre_set(convertible_hood_state ,Lustre_pre_ctx_type*);

void Lustre_pre_6_ctx_reset(Lustre_pre_6_ctx_type* ctx);
void Lustre_pre_6_ctx_init(Lustre_pre_6_ctx_type* ctx);
void Lustre_pre_6_get(convertible_vehicle_state *,Lustre_pre_6_ctx_type*);

void Lustre_pre_6_set(convertible_vehicle_state ,Lustre_pre_6_ctx_type*);

void Lustre_pre_5_ctx_reset(Lustre_pre_5_ctx_type* ctx);
void Lustre_pre_5_ctx_init(Lustre_pre_5_ctx_type* ctx);
void Lustre_pre_5_get(_real [50] ,Lustre_pre_5_ctx_type*);

void Lustre_pre_5_set(_real [50],Lustre_pre_5_ctx_type*);

void Lustre_slash_step(_real ,_real ,_real *);

void assign_50_step(_real ,_integer ,_real [50],_real [50] );

void convertible_abs_step(_real ,_real *);

void convertible_braking_time_step(_real ,_real *);

void convertible_hood_ctx_reset(convertible_hood_ctx_type* ctx);
void convertible_hood_ctx_init(convertible_hood_ctx_type* ctx);
void convertible_hood_step(_boolean ,_boolean ,_boolean ,_boolean ,_boolean *,_real *,convertible_hood_ctx_type*);

void convertible_hood_speed_ctx_reset(convertible_hood_speed_ctx_type* ctx);
void convertible_hood_speed_ctx_init(convertible_hood_speed_ctx_type* ctx);
void convertible_hood_speed_step(_boolean ,_real *,convertible_hood_speed_ctx_type*);

void convertible_main_ctx_reset(convertible_main_ctx_type* ctx);
void convertible_main_ctx_init(convertible_main_ctx_type* ctx);
void convertible_main_step(_boolean ,_boolean ,_boolean ,_boolean ,_boolean ,_boolean ,_real ,_boolean *,_boolean *,_real *,_real *,convertible_main_ctx_type*);

void convertible_maxr_step(_real ,_real ,_real *);

void convertible_may_collide_ctx_reset(convertible_may_collide_ctx_type* ctx);
void convertible_may_collide_ctx_init(convertible_may_collide_ctx_type* ctx);
void convertible_may_collide_step(_real ,_real ,_boolean *,convertible_may_collide_ctx_type*);

void convertible_ms_to_kmh_step(_real ,_real *);

void convertible_solve_eq_d2_step(_real ,_real ,_real ,_real *);

void convertible_speed_kmh_ctx_reset(convertible_speed_kmh_ctx_type* ctx);
void convertible_speed_kmh_ctx_init(convertible_speed_kmh_ctx_type* ctx);
void convertible_speed_kmh_step(_boolean ,_boolean ,_real *,convertible_speed_kmh_ctx_type*);

void convertible_sqrt_step(_real ,_real *);

void convertible_vehicle_ctx_reset(convertible_vehicle_ctx_type* ctx);
void convertible_vehicle_ctx_init(convertible_vehicle_ctx_type* ctx);
void convertible_vehicle_step(_boolean ,_boolean ,_real ,_real ,convertible_vehicle_state *,convertible_vehicle_ctx_type*);

void fillred_update_cell_do_50_step(convertible_update_acc ,_real [50],convertible_update_acc *,_real [50] );

void red_rplus_50_real_step(_real ,_real [50],_real *);

void squareR_1_step(_real ,_real ,_real *);

void squareR_2_step(_real ,_real ,_real *);

void squareR_3_step(_real ,_real ,_real *);

void squareR_4_step(_real ,_real ,_real *);

void squareR_5_step(_real ,_real ,_real *);

void sum_50_0d0_ctx_reset(sum_50_0d0_ctx_type* ctx);
void sum_50_0d0_ctx_init(sum_50_0d0_ctx_type* ctx);
void sum_50_0d0_step(_real ,_real *,sum_50_0d0_ctx_type*);

void sum_50_0d1_ctx_reset(sum_50_0d1_ctx_type* ctx);
void sum_50_0d1_ctx_init(sum_50_0d1_ctx_type* ctx);
void sum_50_0d1_step(_real ,_real *,sum_50_0d1_ctx_type*);

void update_cell_do_50_step(convertible_update_acc ,_real ,convertible_update_acc *,_real *);
# 5 "convertible_main.c" 2


void Lustre_arrow_4_ctx_reset(Lustre_arrow_4_ctx_type* ctx){
  int _i;
  ctx->_memory = 1;
}


void Lustre_arrow_4_ctx_init(Lustre_arrow_4_ctx_type* ctx){

  Lustre_arrow_4_ctx_reset(ctx);
 }

void Lustre_arrow_4_step(_integer x,_integer y,_integer *z,Lustre_arrow_4_ctx_type* ctx){ *z = ((ctx->_memory)? x : y);
  ctx->_memory = 0;

}


void Lustre_arrow_3_ctx_reset(Lustre_arrow_3_ctx_type* ctx){
  int _i;
  ctx->_memory = 1;
}


void Lustre_arrow_3_ctx_init(Lustre_arrow_3_ctx_type* ctx){

  Lustre_arrow_3_ctx_reset(ctx);
 }

void Lustre_arrow_3_step(_real x,_real y,_real *z,Lustre_arrow_3_ctx_type* ctx){ *z = ((ctx->_memory)? x : y);
  ctx->_memory = 0;

}


void Lustre_arrow_2_ctx_reset(Lustre_arrow_2_ctx_type* ctx){
  int _i;
  ctx->_memory = 1;
}


void Lustre_arrow_2_ctx_init(Lustre_arrow_2_ctx_type* ctx){

  Lustre_arrow_2_ctx_reset(ctx);
 }

void Lustre_arrow_2_step(convertible_hood_speed_state x,convertible_hood_speed_state y,convertible_hood_speed_state *z,Lustre_arrow_2_ctx_type* ctx){ *z = ((ctx->_memory)? x : y);
  ctx->_memory = 0;

}


void Lustre_arrow_ctx_reset(Lustre_arrow_ctx_type* ctx){
  int _i;
  ctx->_memory = 1;
}


void Lustre_arrow_ctx_init(Lustre_arrow_ctx_type* ctx){

  Lustre_arrow_ctx_reset(ctx);
 }

void Lustre_arrow_step(convertible_hood_state x,convertible_hood_state y,convertible_hood_state *z,Lustre_arrow_ctx_type* ctx){ *z = ((ctx->_memory)? x : y);
  ctx->_memory = 0;

}


void Lustre_arrow_6_ctx_reset(Lustre_arrow_6_ctx_type* ctx){
  int _i;
  ctx->_memory = 1;
}


void Lustre_arrow_6_ctx_init(Lustre_arrow_6_ctx_type* ctx){

  Lustre_arrow_6_ctx_reset(ctx);
 }

void Lustre_arrow_6_step(convertible_vehicle_state x,convertible_vehicle_state y,convertible_vehicle_state *z,Lustre_arrow_6_ctx_type* ctx){ *z = ((ctx->_memory)? x : y);
  ctx->_memory = 0;

}


void Lustre_arrow_5_ctx_reset(Lustre_arrow_5_ctx_type* ctx){
  int _i;
  ctx->_memory = 1;
}


void Lustre_arrow_5_ctx_init(Lustre_arrow_5_ctx_type* ctx){

  Lustre_arrow_5_ctx_reset(ctx);
 }

void Lustre_arrow_5_step(_real x[50],_real y[50],_real z[50] ,Lustre_arrow_5_ctx_type* ctx){ int j; for (j=0; j<50; j++) { z[j]=((ctx->_memory)? x : y)[j]; };
  ctx->_memory = 0;

}


void Lustre_eq_step(_integer x,_integer y,_boolean *z){
  *z = (x == y);

}


void Lustre_eq_2_step(_real x,_real y,_boolean *z){
  *z = (x == y);

}


void Lustre_eq_3_step(convertible_hood_state x,convertible_hood_state y,_boolean *z){
  *z = (x == y);

}


void Lustre_hat_step(_real x,_real z[50] ){
  z[0] = x;
  z[1] = x;
  z[2] = x;
  z[3] = x;
  z[4] = x;
  z[5] = x;
  z[6] = x;
  z[7] = x;
  z[8] = x;
  z[9] = x;
  z[10] = x;
  z[11] = x;
  z[12] = x;
  z[13] = x;
  z[14] = x;
  z[15] = x;
  z[16] = x;
  z[17] = x;
  z[18] = x;
  z[19] = x;
  z[20] = x;
  z[21] = x;
  z[22] = x;
  z[23] = x;
  z[24] = x;
  z[25] = x;
  z[26] = x;
  z[27] = x;
  z[28] = x;
  z[29] = x;
  z[30] = x;
  z[31] = x;
  z[32] = x;
  z[33] = x;
  z[34] = x;
  z[35] = x;
  z[36] = x;
  z[37] = x;
  z[38] = x;
  z[39] = x;
  z[40] = x;
  z[41] = x;
  z[42] = x;
  z[43] = x;
  z[44] = x;
  z[45] = x;
  z[46] = x;
  z[47] = x;
  z[48] = x;
  z[49] = x;

}


void Lustre_pre_4_ctx_reset(Lustre_pre_4_ctx_type* ctx){
  int _i;

}


void Lustre_pre_4_ctx_init(Lustre_pre_4_ctx_type* ctx){

  Lustre_pre_4_ctx_reset(ctx);
 }

void Lustre_pre_4_get(_integer *z,Lustre_pre_4_ctx_type* ctx){
  *z = ctx->_memory;

}

void Lustre_pre_4_set(_integer x,Lustre_pre_4_ctx_type* ctx){
  ctx->_memory = x;

}


void Lustre_pre_3_ctx_reset(Lustre_pre_3_ctx_type* ctx){
  int _i;

}


void Lustre_pre_3_ctx_init(Lustre_pre_3_ctx_type* ctx){

  Lustre_pre_3_ctx_reset(ctx);
 }

void Lustre_pre_3_get(_real *z,Lustre_pre_3_ctx_type* ctx){
  *z = ctx->_memory;

}

void Lustre_pre_3_set(_real x,Lustre_pre_3_ctx_type* ctx){
  ctx->_memory = x;

}


void Lustre_pre_2_ctx_reset(Lustre_pre_2_ctx_type* ctx){
  int _i;

}


void Lustre_pre_2_ctx_init(Lustre_pre_2_ctx_type* ctx){

  Lustre_pre_2_ctx_reset(ctx);
 }

void Lustre_pre_2_get(convertible_hood_speed_state *z,Lustre_pre_2_ctx_type* ctx){
  *z = ctx->_memory;

}

void Lustre_pre_2_set(convertible_hood_speed_state x,Lustre_pre_2_ctx_type* ctx){
  ctx->_memory = x;

}


void Lustre_pre_ctx_reset(Lustre_pre_ctx_type* ctx){
  int _i;

}


void Lustre_pre_ctx_init(Lustre_pre_ctx_type* ctx){

  Lustre_pre_ctx_reset(ctx);
 }

void Lustre_pre_get(convertible_hood_state *z,Lustre_pre_ctx_type* ctx){
  *z = ctx->_memory;

}

void Lustre_pre_set(convertible_hood_state x,Lustre_pre_ctx_type* ctx){
  ctx->_memory = x;

}


void Lustre_pre_6_ctx_reset(Lustre_pre_6_ctx_type* ctx){
  int _i;

}


void Lustre_pre_6_ctx_init(Lustre_pre_6_ctx_type* ctx){

  Lustre_pre_6_ctx_reset(ctx);
 }

void Lustre_pre_6_get(convertible_vehicle_state *z,Lustre_pre_6_ctx_type* ctx){
  *z = ctx->_memory;

}

void Lustre_pre_6_set(convertible_vehicle_state x,Lustre_pre_6_ctx_type* ctx){
  ctx->_memory = x;

}


void Lustre_pre_5_ctx_reset(Lustre_pre_5_ctx_type* ctx){
  int _i;

}


void Lustre_pre_5_ctx_init(Lustre_pre_5_ctx_type* ctx){

  Lustre_pre_5_ctx_reset(ctx);
 }

void Lustre_pre_5_get(_real z[50] ,Lustre_pre_5_ctx_type* ctx){
  int j; for (j=0; j<50; j++) { z[j]=ctx->_memory[j]; };

}

void Lustre_pre_5_set(_real x[50],Lustre_pre_5_ctx_type* ctx){
  int j; for (j=0; j<50; j++) { ctx->_memory[j]=x[j]; };

}


void Lustre_slash_step(_real x,_real y,_real *z){
  *z = (x / y);

}


void assign_50_step(_real v,_integer jv,_real t[50],_real nt[50] ){
   convertible_update_acc _v_3;
   convertible_update_acc dummy;

  _v_3.i = 0;
  _v_3.j = jv;
  _v_3.v = v;
  fillred_update_cell_do_50_step(_v_3,t,&dummy,nt);

}


void convertible_abs_step(_real x,_real *y){
   _real _v_2;






   _boolean _v_1;







  _v_2 = - x;
  _v_1 = x >= 0.0;
   if (_v_1 == 1) {
     *y = x;
   } else {
     *y = _v_2;
   }

}


void convertible_braking_time_step(_real Speed,_real *res){
   _real _v_4;







  _v_4 = Speed * Speed;
  Lustre_slash_step(_v_4,5500.0,res);

}


void convertible_hood_ctx_reset(convertible_hood_ctx_type* ctx){
  int _i;

    convertible_hood_speed_ctx_reset(&ctx->convertible_hood_speed_ctx_tab[0]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[0]);
    Lustre_arrow_ctx_reset(&ctx->Lustre_arrow_ctx_tab[0]);
}


void convertible_hood_ctx_init(convertible_hood_ctx_type* ctx){

  convertible_hood_ctx_reset(ctx);
 }

void convertible_hood_step(_boolean Tic,_boolean Parked,_boolean OnOff,_boolean Done,_boolean *Locked,_real *Hood_Speed,convertible_hood_ctx_type* ctx){ _real _v_12;






   _real _v_11;
   convertible_hood_state _v_10;






   _boolean _v_9;






   convertible_hood_state _v_8;






   _boolean _v_7;






   _boolean _v_6;






   convertible_hood_state _v_5;






   convertible_hood_state pst;






   convertible_hood_state st;






   _boolean Tic_on_in_motion;







  Lustre_pre_get(&_v_5,&ctx->Lustre_pre_ctx_tab[0]);
  Lustre_arrow_step(0,_v_5,&pst,&ctx->Lustre_arrow_ctx_tab[0]);
  if (pst == 1) {
  _v_9 = Done;
   if (_v_9 == 1) {
     _v_10 = 0;
   } else {
     _v_10 = 1;
   }
  st = _v_10;

  } else {
  } _v_6 = OnOff & Parked;
  if (pst == 0) {
  _v_7 = _v_6;
   if (_v_7 == 1) {
     _v_8 = 1;
   } else {
     _v_8 = 0;
   }
  st = _v_8;

  } else {
  } Lustre_pre_set(st,&ctx->Lustre_pre_ctx_tab[0]);
  Lustre_eq_3_step(st,0,Locked);
  if (st == 1) {
  Tic_on_in_motion = Tic;
  convertible_hood_speed_step(Tic_on_in_motion,&_v_12,&ctx->convertible_hood_speed_ctx_tab[0]);
  *Hood_Speed = _v_12;

  } else {
  if (st == 0) {
  _v_11 = 0.0;
  *Hood_Speed = _v_11;

  } else {
  }}
}


void convertible_hood_speed_ctx_reset(convertible_hood_speed_ctx_type* ctx){
  int _i;

    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[0]);
    Lustre_pre_3_ctx_reset(&ctx->Lustre_pre_3_ctx_tab[0]);
    Lustre_pre_3_ctx_reset(&ctx->Lustre_pre_3_ctx_tab[1]);
    Lustre_arrow_2_ctx_reset(&ctx->Lustre_arrow_2_ctx_tab[0]);
    Lustre_arrow_3_ctx_reset(&ctx->Lustre_arrow_3_ctx_tab[0]);
    Lustre_arrow_3_ctx_reset(&ctx->Lustre_arrow_3_ctx_tab[1]);
}


void convertible_hood_speed_ctx_init(convertible_hood_speed_ctx_type* ctx){

  convertible_hood_speed_ctx_reset(ctx);
 }

void convertible_hood_speed_step(_boolean Tic,_real *Hood_Speed,convertible_hood_speed_ctx_type* ctx){ _real _v_35;






   _real _v_34;






   _real _v_33;






   _real _v_32;






   _real _v_31;






   _real _v_30;






   _real _v_29;






   _real _v_28;






   _real _v_27;






   _real _v_26;






   _real _v_25;






   _real _v_24;






   _real _v_23;






   _real _v_22;






   _real _v_21;






   _real _v_20;






   convertible_hood_speed_state _v_19;






   _boolean _v_18;






   _real _v_17;






   convertible_hood_speed_state _v_16;






   _boolean _v_15;






   _real _v_14;






   convertible_hood_speed_state _v_13;






   convertible_hood_speed_state pst;






   convertible_hood_speed_state st;






   _real kh;






   _real Hood_Percent;






   _real pHood_Percent;






   _real slow_it_down;






   _real pHood_Speed;







  if (Tic == 1) {
  Lustre_pre_2_get(&_v_13,&ctx->Lustre_pre_2_ctx_tab[0]);
  Lustre_arrow_2_step(0,_v_13,&pst,&ctx->Lustre_arrow_2_ctx_tab[0]);
  Lustre_pre_3_get(&_v_20,&ctx->Lustre_pre_3_ctx_tab[0]);
  Lustre_arrow_3_step(0.0,_v_20,&pHood_Percent,&ctx->Lustre_arrow_3_ctx_tab[0]);
  if (pst == 1) {
  _v_14 = pHood_Percent;
  _v_15 = _v_14 < 85.0;
   if (_v_15 == 1) {
     _v_16 = 1;
   } else {
     _v_16 = 2;
   }
  st = _v_16;

  } else {
  if (pst == 2) {
  _v_17 = pHood_Percent;
  _v_18 = _v_17 < 100.0;
   if (_v_18 == 1) {
     _v_19 = 2;
   } else {
     _v_19 = 0;
   }
  st = _v_19;

  } else {
  if (pst == 0) {
  st = 1;

  } else {
  }}} Lustre_pre_2_set(st,&ctx->Lustre_pre_2_ctx_tab[0]);
  Lustre_slash_step(5.,0.1,&_v_25);
  Lustre_slash_step(100.,_v_25,&kh);
  _v_30 = kh + pHood_Percent;
  if (st == 1) {
  _v_31 = _v_30;
  Hood_Percent = _v_31;

  } else {
  if (st == 2) {
  _v_34 = pHood_Percent;
  _v_21 = pHood_Percent;
  _v_22 = 100.0 - _v_21;
  Lustre_slash_step(_v_22,5.0,&_v_23);
  convertible_sqrt_step(_v_23,&_v_24);
  convertible_sqrt_step(_v_24,&slow_it_down);
  _v_32 = kh;
  _v_33 = slow_it_down * _v_32;
  _v_35 = _v_33 + _v_34;
  Hood_Percent = _v_35;

  } else {
  if (st == 0) {
  Hood_Percent = 0.0;
  Hood_Percent = 0.0;

  } else {
  }}} Lustre_pre_3_set(Hood_Percent,&ctx->Lustre_pre_3_ctx_tab[0]);

  } else {
  } Lustre_pre_3_get(&_v_26,&ctx->Lustre_pre_3_ctx_tab[1]);
  Lustre_arrow_3_step(0.0,_v_26,&pHood_Speed,&ctx->Lustre_arrow_3_ctx_tab[1]);
  if (Tic == 0) {
  _v_27 = pHood_Speed;
  *Hood_Speed = _v_27;

  } else {
  if (Tic == 1) {
  if (st == 1) {
  _v_29 = 10.0;
  _v_29 = 10.0;

  } else {
  if (st == 2) {
  _v_28 = 10.0 * slow_it_down;
  _v_29 = _v_28;

  } else {
  if (st == 0) {
  _v_29 = 0.0;
  _v_29 = 0.0;

  } else {
  }}} *Hood_Speed = _v_29;

  } else {
  }} Lustre_pre_3_set(*Hood_Speed,&ctx->Lustre_pre_3_ctx_tab[1]);

}


void convertible_main_ctx_reset(convertible_main_ctx_type* ctx){
  int _i;

    convertible_vehicle_ctx_reset(&ctx->convertible_vehicle_ctx_tab[0]);
    convertible_speed_kmh_ctx_reset(&ctx->convertible_speed_kmh_ctx_tab[0]);
    convertible_may_collide_ctx_reset(&ctx->convertible_may_collide_ctx_tab[0]);
    convertible_hood_ctx_reset(&ctx->convertible_hood_ctx_tab[0]);
}


void convertible_main_ctx_init(convertible_main_ctx_type* ctx){

  convertible_main_ctx_reset(ctx);
 }

void convertible_main_step(_boolean Start,_boolean Parked,_boolean Rot,_boolean Tic,_boolean OnOff,_boolean Done,_real Distance,_boolean *Danger,_boolean *Locked,_real *Speed,_real *Hood_Speed,convertible_main_ctx_type* ctx){ _boolean _v_38;






   _real _v_37;






   _real _v_36;






   convertible_vehicle_state St;






   _boolean _v_39;






   _boolean _v_40;







  _v_39 = OnOff & Start;
  _v_40 = ! _v_39;
  convertible_hood_step(Tic,Parked,OnOff,Done,Locked,Hood_Speed,&ctx->convertible_hood_ctx_tab[0]);
  convertible_speed_kmh_step(Rot,Tic,Speed,&ctx->convertible_speed_kmh_ctx_tab[0]);
  convertible_vehicle_step(Start,*Locked,*Speed,Distance,&St,&ctx->convertible_vehicle_ctx_tab[0]);
  if (St == 2) {
  _v_37 = Distance;
  _v_36 = *Speed;
  convertible_may_collide_step(_v_36,_v_37,&_v_38,&ctx->convertible_may_collide_ctx_tab[0]);
  *Danger = _v_38;

  } else {
  if (St == 1) {
  *Danger = 0;
  *Danger = 0;

  } else {
  if (St == 0) {
  *Danger = 0;
  *Danger = 0;

  } else {
  }}}
}


void convertible_maxr_step(_real x,_real y,_real *res){
   _boolean _v_41;







  _v_41 = x < y;
   if (_v_41 == 1) {
     *res = y;
   } else {
     *res = x;
   }

}


void convertible_may_collide_ctx_reset(convertible_may_collide_ctx_type* ctx){
  int _i;

    Lustre_pre_3_ctx_reset(&ctx->Lustre_pre_3_ctx_tab[0]);
    Lustre_arrow_3_ctx_reset(&ctx->Lustre_arrow_3_ctx_tab[0]);
}


void convertible_may_collide_ctx_init(convertible_may_collide_ctx_type* ctx){

  convertible_may_collide_ctx_reset(ctx);
 }

void convertible_may_collide_step(_real Speed,_real Distance,_boolean *Res,convertible_may_collide_ctx_type* ctx){ _real _v_47;






   _real _v_46;






   _real _v_45;






   _real _v_44;






   _real _v_43;






   _real _v_42;






   _real Accel;






   _real tChoc;






   _real tBrake;







  Lustre_pre_3_get(&_v_42,&ctx->Lustre_pre_3_ctx_tab[0]);
  _v_43 = Speed - _v_42;
  Lustre_slash_step(_v_43,0.1,&_v_44);
  Lustre_pre_3_set(Speed,&ctx->Lustre_pre_3_ctx_tab[0]);
  Lustre_arrow_3_step(0.0,_v_44,&Accel,&ctx->Lustre_arrow_3_ctx_tab[0]);
  convertible_braking_time_step(Speed,&tBrake);
  _v_46 = -2.0 * Distance;
  _v_45 = 2.0 * Speed;
  convertible_solve_eq_d2_step(Accel,_v_45,_v_46,&tChoc);
  _v_47 = 2.0 + tBrake;
  *Res = tChoc < _v_47;

}


void convertible_ms_to_kmh_step(_real x,_real *res){

  *res = x * 3.6;

}


void convertible_solve_eq_d2_step(_real a,_real b,_real c,_real *res){
   _real _v_75;






   _real _v_74;






   _real _v_73;






   _real _v_72;






   _real _v_71;






   _real _v_70;






   _real _v_69;






   _real _v_68;






   _real _v_67;






   _real _v_66;






   _real _v_65;






   _real _v_64;






   _real _v_63;






   _real _v_62;






   _real _v_61;






   _real _v_60;






   _real _v_59;






   _real _v_58;






   convertible_eq_case _v_57;






   convertible_eq_case _v_56;






   _boolean _v_55;






   _boolean _v_54;






   convertible_eq_case _v_53;






   _boolean _v_52;






   _boolean _v_51;






   _real _v_50;






   _real _v_49;






   _real _v_48;






   _real delta;






   convertible_eq_case sol_nb;






   _real a2;






   _real b2;






   _real delta_pos;







  _v_49 = 4.0 * a;
  _v_50 = _v_49 * c;
  _v_48 = b * b;
  delta = _v_48 - _v_50;
  Lustre_eq_2_step(delta,0.0,&_v_55);
   if (_v_55 == 1) {
     _v_56 = 2;
   } else {
     _v_56 = 3;
   }
  _v_54 = delta < 0.0;
   if (_v_54 == 1) {
     _v_57 = 0;
   } else {
     _v_57 = _v_56;
   }
  Lustre_eq_2_step(b,0.0,&_v_52);
   if (_v_52 == 1) {
     _v_53 = 0;
   } else {
     _v_53 = 1;
   }
  Lustre_eq_2_step(a,0.0,&_v_51);
   if (_v_51 == 1) {
     sol_nb = _v_53;
   } else {
     sol_nb = _v_57;
   }
  if (sol_nb == 3) {
  delta_pos = delta;
  a2 = a;
  b2 = b;
  convertible_sqrt_step(delta_pos,&_v_66);
  _v_67 = 2.0 * a2;
  Lustre_slash_step(_v_66,_v_67,&_v_68);
  _v_65 = - b2;
  _v_69 = _v_65 + _v_68;
  convertible_sqrt_step(delta_pos,&_v_71);
  _v_72 = 2.0 * a2;
  Lustre_slash_step(_v_71,_v_72,&_v_73);
  _v_70 = - b2;
  _v_74 = _v_70 - _v_73;
  convertible_maxr_step(_v_69,_v_74,&_v_75);

  } else {
  } _v_61 = - b;
  _v_62 = 2.0 * a;
  Lustre_slash_step(_v_61,_v_62,&_v_63);
  if (sol_nb == 2) {
  _v_64 = _v_63;

  } else {
  } _v_58 = - c;
  Lustre_slash_step(_v_58,b,&_v_59);
  if (sol_nb == 1) {
  _v_60 = _v_59;
  *res = _v_60;

  } else {
  if (sol_nb == 3) {
  *res = _v_75;

  } else {
  if (sol_nb == 2) {
  *res = _v_64;

  } else {
  if (sol_nb == 0) {
  *res = -1.0;
  *res = -1.0;

  } else {
  }}}}
}


void convertible_speed_kmh_ctx_reset(convertible_speed_kmh_ctx_type* ctx){
  int _i;

    sum_50_0d1_ctx_reset(&ctx->sum_50_0d1_ctx_tab[0]);
    sum_50_0d0_ctx_reset(&ctx->sum_50_0d0_ctx_tab[0]);
    Lustre_pre_3_ctx_reset(&ctx->Lustre_pre_3_ctx_tab[0]);
    Lustre_pre_3_ctx_reset(&ctx->Lustre_pre_3_ctx_tab[1]);
    Lustre_pre_3_ctx_reset(&ctx->Lustre_pre_3_ctx_tab[2]);
    Lustre_arrow_3_ctx_reset(&ctx->Lustre_arrow_3_ctx_tab[0]);
    Lustre_arrow_3_ctx_reset(&ctx->Lustre_arrow_3_ctx_tab[1]);
    Lustre_arrow_3_ctx_reset(&ctx->Lustre_arrow_3_ctx_tab[2]);
}


void convertible_speed_kmh_ctx_init(convertible_speed_kmh_ctx_type* ctx){

  convertible_speed_kmh_ctx_reset(ctx);
 }

void convertible_speed_kmh_step(_boolean Rot,_boolean Tic,_real *Speed,convertible_speed_kmh_ctx_type* ctx){ _real _v_87;






   _real _v_86;






   _real _v_85;






   _real _v_84;






   _real _v_83;






   _real _v_82;






   _real _v_81;






   _real _v_80;






   _real _v_79;






   _real _v_78;






   _real _v_77;






   _real _v_76;






   _real d;






   _real t;






   _real pd;






   _real pt;






   _real dx;






   _real tx;






   _boolean TicOrRot;







   if (Rot == 1) {
     dx = 1.4;
   } else {
     dx = 0.0;
   }
   if (Tic == 1) {
     tx = 0.1;
   } else {
     tx = 0.0;
   }
  TicOrRot = Tic | Rot;
  Lustre_pre_3_get(&_v_76,&ctx->Lustre_pre_3_ctx_tab[0]);
  Lustre_arrow_3_step(0.0,_v_76,&pd,&ctx->Lustre_arrow_3_ctx_tab[0]);
  if (TicOrRot == 0) {
  _v_78 = pd;
  d = _v_78;

  } else {
  if (TicOrRot == 1) {
  _v_79 = dx;
  sum_50_0d0_step(_v_79,&_v_80,&ctx->sum_50_0d0_ctx_tab[0]);
  d = _v_80;

  } else {
  }} Lustre_pre_3_set(d,&ctx->Lustre_pre_3_ctx_tab[0]);
  Lustre_pre_3_get(&_v_77,&ctx->Lustre_pre_3_ctx_tab[1]);
  Lustre_arrow_3_step(0.0,_v_77,&pt,&ctx->Lustre_arrow_3_ctx_tab[1]);
  if (TicOrRot == 0) {
  _v_83 = pt;
  _v_84 = _v_83;

  } else {
  if (TicOrRot == 1) {
  _v_81 = tx;
  sum_50_0d1_step(_v_81,&_v_82,&ctx->sum_50_0d1_ctx_tab[0]);
  _v_84 = _v_82;

  } else {
  }} convertible_maxr_step(0.1,_v_84,&t);
  Lustre_pre_3_set(t,&ctx->Lustre_pre_3_ctx_tab[1]);
  Lustre_pre_3_get(&_v_87,&ctx->Lustre_pre_3_ctx_tab[2]);
  Lustre_slash_step(d,t,&_v_85);
  convertible_ms_to_kmh_step(_v_85,&_v_86);
  Lustre_pre_3_set(_v_86,&ctx->Lustre_pre_3_ctx_tab[2]);
  Lustre_arrow_3_step(0.0,_v_87,Speed,&ctx->Lustre_arrow_3_ctx_tab[2]);

}


void convertible_sqrt_step(_real R,_real *Sqrt){

  squareR_5_step(R,1.0,Sqrt);

}


void convertible_vehicle_ctx_reset(convertible_vehicle_ctx_type* ctx){
  int _i;

    Lustre_pre_6_ctx_reset(&ctx->Lustre_pre_6_ctx_tab[0]);
    Lustre_arrow_6_ctx_reset(&ctx->Lustre_arrow_6_ctx_tab[0]);
}


void convertible_vehicle_ctx_init(convertible_vehicle_ctx_type* ctx){

  convertible_vehicle_ctx_reset(ctx);
 }

void convertible_vehicle_step(_boolean Start,_boolean Locked,_real Speed,_real Distance,convertible_vehicle_state *st,convertible_vehicle_ctx_type* ctx){ convertible_vehicle_state _v_153;






   _boolean _v_152;






   _boolean _v_151;






   convertible_vehicle_state _v_150;






   convertible_vehicle_state _v_149;






   _boolean _v_148;






   _boolean _v_147;






   _boolean _v_146;






   convertible_vehicle_state _v_145;






   _boolean _v_144;






   _boolean _v_143;






   convertible_vehicle_state _v_142;






   convertible_vehicle_state pst;






   _boolean ac_cond;







  Lustre_pre_6_get(&_v_142,&ctx->Lustre_pre_6_ctx_tab[0]);
  Lustre_arrow_6_step(0,_v_142,&pst,&ctx->Lustre_arrow_6_ctx_tab[0]);
  ac_cond = Speed >= 110.0;
  if (pst == 2) {
  _v_151 = ac_cond;
  _v_152 = ! _v_151;
   if (_v_152 == 1) {
     _v_153 = 1;
   } else {
     _v_153 = 2;
   }
  *st = _v_153;

  } else {
  } Lustre_eq_2_step(Speed,0.0,&_v_147);
  if (pst == 1) {
  _v_148 = _v_147;
   if (_v_148 == 1) {
     _v_149 = 0;
   } else {
     _v_149 = 1;
   }
  _v_146 = ac_cond;
   if (_v_146 == 1) {
     _v_150 = 2;
   } else {
     _v_150 = _v_149;
   }
  *st = _v_150;

  } else {
  } _v_143 = Start & Locked;
  if (pst == 0) {
  _v_144 = _v_143;
   if (_v_144 == 1) {
     _v_145 = 1;
   } else {
     _v_145 = 0;
   }
  *st = _v_145;

  } else {
  } Lustre_pre_6_set(*st,&ctx->Lustre_pre_6_ctx_tab[0]);

}


void fillred_update_cell_do_50_step(convertible_update_acc acc,_real cell[50],convertible_update_acc *nacc,_real ncell[50] ){
  int _i;
  for (_i=0 ; _i<49 ; _i+=2){
    update_cell_do_50_step(acc,cell[_i],&acc,&ncell[_i]);
    update_cell_do_50_step(acc,cell[_i+1],&acc,&ncell[_i+1]);
  }
   *nacc = acc;

}


void red_rplus_50_real_step(_real i1,_real i2[50],_real *o){
  int _i;
  for (_i=0 ; _i<49 ; _i+=2){
    i1 = i1 + i2[_i];
    i1 = i1 + i2[_i+1];
  }
   *o = i1;

}


void squareR_1_step(_real x,_real presqrt,_real *Sqrt){
   _real _v_91;






   _real _v_90;






   _real _v_89;






   _real _v_88;






   _real sqrt;






   _boolean ecart;







  Lustre_slash_step(x,presqrt,&_v_90);
  _v_91 = presqrt + _v_90;
  sqrt = 0.5 * _v_91;
  _v_88 = presqrt - sqrt;
  convertible_abs_step(_v_88,&_v_89);
  ecart = _v_89 < 0.0005;
  *Sqrt = sqrt;

}


void squareR_2_step(_real x,_real presqrt,_real *Sqrt){
   _real _v_99;






   _real _v_98;






   _real _v_97;






   _real _v_96;






   _real _v_95;






   _real _v_94;






   _real _v_93;






   _real _v_92;






   _real sqrt;






   _boolean ecart;







  Lustre_slash_step(x,presqrt,&_v_94);
  _v_95 = presqrt + _v_94;
  sqrt = 0.5 * _v_95;
  _v_92 = presqrt - sqrt;
  convertible_abs_step(_v_92,&_v_93);
  ecart = _v_93 < 0.0005;
  if (ecart == 1) {
  _v_99 = sqrt;
  *Sqrt = _v_99;

  } else {
  if (ecart == 0) {
  _v_97 = sqrt;
  _v_96 = x;
  squareR_1_step(_v_96,_v_97,&_v_98);
  *Sqrt = _v_98;

  } else {
  }}
}


void squareR_3_step(_real x,_real presqrt,_real *Sqrt){
   _real _v_107;






   _real _v_106;






   _real _v_105;






   _real _v_104;






   _real _v_103;






   _real _v_102;






   _real _v_101;






   _real _v_100;






   _real sqrt;






   _boolean ecart;







  Lustre_slash_step(x,presqrt,&_v_102);
  _v_103 = presqrt + _v_102;
  sqrt = 0.5 * _v_103;
  _v_100 = presqrt - sqrt;
  convertible_abs_step(_v_100,&_v_101);
  ecart = _v_101 < 0.0005;
  if (ecart == 1) {
  _v_107 = sqrt;
  *Sqrt = _v_107;

  } else {
  if (ecart == 0) {
  _v_105 = sqrt;
  _v_104 = x;
  squareR_2_step(_v_104,_v_105,&_v_106);
  *Sqrt = _v_106;

  } else {
  }}
}


void squareR_4_step(_real x,_real presqrt,_real *Sqrt){
   _real _v_115;






   _real _v_114;






   _real _v_113;






   _real _v_112;






   _real _v_111;






   _real _v_110;






   _real _v_109;






   _real _v_108;






   _real sqrt;






   _boolean ecart;







  Lustre_slash_step(x,presqrt,&_v_110);
  _v_111 = presqrt + _v_110;
  sqrt = 0.5 * _v_111;
  _v_108 = presqrt - sqrt;
  convertible_abs_step(_v_108,&_v_109);
  ecart = _v_109 < 0.0005;
  if (ecart == 1) {
  _v_115 = sqrt;
  *Sqrt = _v_115;

  } else {
  if (ecart == 0) {
  _v_113 = sqrt;
  _v_112 = x;
  squareR_3_step(_v_112,_v_113,&_v_114);
  *Sqrt = _v_114;

  } else {
  }}
}


void squareR_5_step(_real x,_real presqrt,_real *Sqrt){
   _real _v_123;






   _real _v_122;






   _real _v_121;






   _real _v_120;






   _real _v_119;






   _real _v_118;






   _real _v_117;






   _real _v_116;






   _real sqrt;






   _boolean ecart;







  Lustre_slash_step(x,presqrt,&_v_118);
  _v_119 = presqrt + _v_118;
  sqrt = 0.5 * _v_119;
  _v_116 = presqrt - sqrt;
  convertible_abs_step(_v_116,&_v_117);
  ecart = _v_117 < 0.0005;
  if (ecart == 1) {
  _v_123 = sqrt;
  *Sqrt = _v_123;

  } else {
  if (ecart == 0) {
  _v_121 = sqrt;
  _v_120 = x;
  squareR_4_step(_v_120,_v_121,&_v_122);
  *Sqrt = _v_122;

  } else {
  }}
}


void sum_50_0d0_ctx_reset(sum_50_0d0_ctx_type* ctx){
  int _i;

    Lustre_pre_5_ctx_reset(&ctx->Lustre_pre_5_ctx_tab[0]);
    Lustre_pre_4_ctx_reset(&ctx->Lustre_pre_4_ctx_tab[0]);
    Lustre_arrow_5_ctx_reset(&ctx->Lustre_arrow_5_ctx_tab[0]);
    Lustre_arrow_4_ctx_reset(&ctx->Lustre_arrow_4_ctx_tab[0]);
}


void sum_50_0d0_ctx_init(sum_50_0d0_ctx_type* ctx){

  sum_50_0d0_ctx_reset(ctx);
 }

void sum_50_0d0_step(_real s,_real *res,sum_50_0d0_ctx_type* ctx){ _integer _v_128;






   _real _v_127[50];






   _real _v_126[50];






   _integer _v_125;






   _integer _v_124;






   _real a[50];






   _real pre_a[50];






   _integer i;







  Lustre_pre_4_get(&_v_124,&ctx->Lustre_pre_4_ctx_tab[0]);
  Lustre_arrow_4_step(0,_v_124,&_v_125,&ctx->Lustre_arrow_4_ctx_tab[0]);
  i = _v_125 + 1;
  Lustre_pre_4_set(i,&ctx->Lustre_pre_4_ctx_tab[0]);
  Lustre_pre_5_get(_v_127,&ctx->Lustre_pre_5_ctx_tab[0]);
  Lustre_hat_step(0.0,_v_126);
  Lustre_arrow_5_step(_v_126,_v_127,pre_a,&ctx->Lustre_arrow_5_ctx_tab[0]);
  _v_128 = i % 50;
  assign_50_step(s,_v_128,pre_a,a);
  Lustre_pre_5_set(a,&ctx->Lustre_pre_5_ctx_tab[0]);
  red_rplus_50_real_step(0.0,a,res);

}


void sum_50_0d1_ctx_reset(sum_50_0d1_ctx_type* ctx){
  int _i;

    Lustre_pre_5_ctx_reset(&ctx->Lustre_pre_5_ctx_tab[0]);
    Lustre_pre_4_ctx_reset(&ctx->Lustre_pre_4_ctx_tab[0]);
    Lustre_arrow_5_ctx_reset(&ctx->Lustre_arrow_5_ctx_tab[0]);
    Lustre_arrow_4_ctx_reset(&ctx->Lustre_arrow_4_ctx_tab[0]);
}


void sum_50_0d1_ctx_init(sum_50_0d1_ctx_type* ctx){

  sum_50_0d1_ctx_reset(ctx);
 }

void sum_50_0d1_step(_real s,_real *res,sum_50_0d1_ctx_type* ctx){ _integer _v_133;






   _real _v_132[50];






   _real _v_131[50];






   _integer _v_130;






   _integer _v_129;






   _real a[50];






   _real pre_a[50];






   _integer i;







  Lustre_pre_4_get(&_v_129,&ctx->Lustre_pre_4_ctx_tab[0]);
  Lustre_arrow_4_step(0,_v_129,&_v_130,&ctx->Lustre_arrow_4_ctx_tab[0]);
  i = _v_130 + 1;
  Lustre_pre_4_set(i,&ctx->Lustre_pre_4_ctx_tab[0]);
  Lustre_pre_5_get(_v_132,&ctx->Lustre_pre_5_ctx_tab[0]);
  Lustre_hat_step(0.1,_v_131);
  Lustre_arrow_5_step(_v_131,_v_132,pre_a,&ctx->Lustre_arrow_5_ctx_tab[0]);
  _v_133 = i % 50;
  assign_50_step(s,_v_133,pre_a,a);
  Lustre_pre_5_set(a,&ctx->Lustre_pre_5_ctx_tab[0]);
  red_rplus_50_real_step(0.0,a,res);

}


void update_cell_do_50_step(convertible_update_acc acc,_real cell,convertible_update_acc *nacc,_real *ncell){
   _integer _v_139;






   _integer _v_138;
   _integer _v_140;
   _real _v_141;
   _real _v_137;
   _boolean _v_136;






   _integer _v_135;
   _integer _v_134;

  _v_137 = acc.v;
  _v_134 = acc.i;
  _v_135 = acc.j;
  Lustre_eq_step(_v_134,_v_135,&_v_136);
   if (_v_136 == 1) {
     *ncell = _v_137;
   } else {
     *ncell = cell;
   }
  _v_138 = acc.i;
  _v_139 = _v_138 + 1;
  _v_140 = acc.j;
  _v_141 = acc.v;
  nacc->i = _v_139;
  nacc->j = _v_140;
  nacc->v = _v_141;

}
