//
// Created by Ky Dicker on 03/07/2024.
//

#ifndef SHORT_H
#define SHORT_H

#include "Number.h"
#include "../Type.h"

class Short: public Number<short_t>{
    protected:
    ~Short() = default;

    private:
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



#endif //SHORT_H
