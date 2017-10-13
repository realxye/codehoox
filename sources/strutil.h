#pragma once

#if defined(_WIN32) && defined(_WIN32_WINNT) && (_WIN32_WINNT>0x500)
// Only support Windows XP and above
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

int ToLower(int c);

int CharCompare(int c1, int c2, BOOL caseInsensitive);

unsigned int StrLen(const char* s);

unsigned int WcsLen(const wchar_t* s);

int StrCompareN(const char* s1, const char* s2, unsigned int n, BOOL caseInsensitive);

int StrCompare(const char* s1, const char* s2, BOOL caseInsensitive);

int WcsCompareN(const wchar_t* s1, const wchar_t* s2, unsigned int n, BOOL caseInsensitive);

int WcsCompare(const wchar_t* s1, const wchar_t* s2, BOOL caseInsensitive);

char* StrChr(char* s, char c);

char* StrRChr(char* s, char c);

wchar_t* WcsChr(wchar_t* s, wchar_t c);

wchar_t* WcsRChr(wchar_t* s, wchar_t c);

unsigned int StrNCpySafe(char* destination, unsigned int size, const char* source, unsigned int n);

unsigned int StrCpySafe(char* destination, unsigned int size, const char* source);

unsigned int WcsNCpySafe(wchar_t* destination, unsigned int size, const wchar_t* source, unsigned int n);

unsigned int WcsCpySafe(wchar_t* destination, unsigned int size, const wchar_t* source);

#ifdef __cplusplus
}
#endif

#endif  // _WIN32
