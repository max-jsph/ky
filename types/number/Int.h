//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef INT_H
#define INT_H
#include "Number.h"
#include "../Type.h"


class Int: public Number<int_t>{
    private:
    int_t value;

    public:
    explicit Int(int_t value);

    Byte to_byte() override;

    Short to_short() override;

    Int to_int() override;

    Long to_long() override;

    UByte to_u_byte() override;

    UShort to_u_short() override;

    UInt to_u_int() override;

    ULong to_u_long() override;

    Float to_float() override;

    Double to_double() override;
};



#endif //INT_H
