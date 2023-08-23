#pragma once


#ifdef CO_EXPORT
// Exports
#ifdef _MSC_VER
#define CO_API __declspec(dllexport)
#else
#define CO_API __attribute__((visibility("default")))
#endif
#else
// Imports
#ifdef _MSC_VER
#define CO_API __declspec(dllimport)
#else
#define CO_API
#endif
#endif