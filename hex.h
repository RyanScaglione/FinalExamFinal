//*************************************************************************
//Ryan Scaglione
//z1996413
//CSCI463 - PE1
//
//I certify that this is my own work, and where applicable an extension
//of the starter code for the assignment
//
//*************************************************************************


#ifndef HEX_H
#define HEX_H

#include <string>
#include <cstdint>
#include <iomanip>


class hex
{
public :
    static std :: string to_hex8 ( uint8_t i );
    static std :: string to_hex32 ( uint32_t i );
    static std :: string to_hex0x32 ( uint32_t i );
    static std :: string to_hex0x20(uint32_t i);
    static std :: string to_hex0x12(uint32_t i);
};

#endif