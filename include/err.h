/*
** File: include/err.h
**
** Author: bringey
**
** Contains macros for error codes used throughout the loader source.
**
*/

#ifndef _ERR_H
#define _ERR_H


//
// Success, no error
//
#define E_SUCCESS 0

//
// Generic error
//
#define E_FAILURE 1

//
// A passed argument was null
//
#define E_ARGNULL 2

//
// A passed argument is out of bounds
//
#define E_ARGBOUNDS 3

//
// An assertion check has failed
//
#define E_ASSERT 4


//
// Unable to allocate memory, no memory available
//
#define E_NOMEM 5

#endif 