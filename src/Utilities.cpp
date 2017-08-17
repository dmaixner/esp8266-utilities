#include "Utilities.h"
#include <base64.h>

void Utilities::printByteArray(const String label, const byte *byteArray, const size_t size, const bool hex)
{
    Serial.print(label + ": ");
    for (size_t i = 0; (i < size) && (hex || (byteArray[i] != '\0')); i++)
    {
        if (hex)
        {
            Serial.print("0x");
            Serial.print(byteArray[i], HEX);
            if (i < (size - 1))
            {
                Serial.print(", ");
            }
        }
        else
        {
            Serial.write(byteArray[i]);
        }
    }
    Serial.println();
}

String Utilities::base64UrlEncode(byte *source, const size_t sourceSize)
{
    String encoded = base64::encode(source, sourceSize);
    encoded.replace("\n", "");
    encoded.replace("+", "-");
    encoded.replace("/", "_");
    return encoded;
}