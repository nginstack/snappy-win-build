#ifndef UTIL_SNAPPY_SNAPPY_DLL_H_
#define UTIL_SNAPPY_SNAPPY_DLL_H_

#if defined(SNAPPY_STATIC)
#define __SNAPPY_API
#elif defined(SNAPPY_DLL)
#define __SNAPPY_API __declspec(dllexport)
#else
#define __SNAPPY_API __declspec(dllimport)
#endif

#endif  // UTIL_SNAPPY_SNAPPY_DLL_H_
