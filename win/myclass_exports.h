
#ifndef MC_EXPORT_H
#define MC_EXPORT_H

#ifdef _WIN32
#if defined (_MSC_VER)
#pragma warning(disable: 4251)
#endif
#ifdef MC_EXPORTS
#define MC_API __declspec(dllexport)
#else
#define MC_API __declspec(dllimport)
#endif
#else
#define MC_API
#endif

#endif 