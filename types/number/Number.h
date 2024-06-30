//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef NUMBER_H
#define NUMBER_H
#include <cstdint>

using namespace std;

class Byte;
class Short;
class Int;
class Long;

class UByte;
class UShort;
class UInt;
class ULong;

class Float;
class Double;

template<class T>
class Number {
    protected:
    ~Number() = default;

    private:
    virtual Byte to_byte() = 0;
    virtual Short to_short() = 0;
    virtual Int to_int() = 0;
    virtual Long to_long() = 0;

    virtual UByte to_u_byte() = 0;
    virtual UShort to_u_short() = 0;
    virtual UInt to_u_int() = 0;
    virtual ULong to_u_long() = 0;

    virtual Float to_float() = 0;
    virtual Double to_double() = 0;
};



#endif //NUMBER_H
