/*


*************************************************
*                                               *
*     Copyright 2017 (C) Mountain X Jasper      *
*                                               * 
*                                               *
*                                               *
*                                               *
*                                               *
*************************************************
  ~(Jason_Gillies@mountainxjasper(kern_mach-o.c))



*/


#include <sys/systm.h>
#include <sys/stdio.h>
#include <sys/signal.h>

#include "mach-o/loader.h"

#define MAX_SEGMENTS 255
#define MAX_IMAGES 400
#define SECURITY_MACHO_BINARY_CHECK_SUCCESS 0
#define SECURITY_MACHO_BINARY_CHECK_FAILED 1



