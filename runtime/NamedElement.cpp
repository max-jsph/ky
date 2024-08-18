//
// Created by Ky Dicker on 03/07/2024.
//

#include "NamedElement.h"

#include <utility>

NamedElement::NamedElement(string_t name): name(std::move(name)) {}

long_t NamedElement::night_code() {
    return 0;
}
