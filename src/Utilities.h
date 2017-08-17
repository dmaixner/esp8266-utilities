#ifndef _utilities_h
#define _utilities_h

#include <Arduino.h>

class Utilities
{
  public:
    static void printByteArray(const String label, const byte *byteArray, const size_t size, const bool hex);
    static String base64UrlEncode(byte *source, const size_t sourceSize);
};

#endif // _utilities_h
