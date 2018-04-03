#ifndef __BUILD_H__
#define __BUILD_H__


#ifdef _WIN32
 #define __WINDOWS__
 #error This  windows. 
#else
#ifdef __gnu_linux__
 #define __LINUX__
 #error This linux.
#endif
 

#endif
