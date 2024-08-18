//
// Created by Ky Dicker on 03/07/2024.
//

#include "Utils.h"

#include <set>

string_t Utils::format(string_t s, vector<Any> args) {
    char template_escape_param = '\\';
    char template_param = '$';
    string_t formatted;

    set<int_t> indices{};

    for (int i = 0; i < s.size() - 1; i ++) {
        auto p = s[i];
        auto c = s[i + 1];

        if (c == template_param && p != template_escape_param) {
            indices.insert(i);
        }
    }

    auto arg_index = 0;

    for (int i = 0; i < s.size(); i ++) {
        if (!indices.contains(i)) {
            formatted += s[i];
        }
        else {
            formatted += args[arg_index].to_string();
            arg_index ++;
        }
    }

    return formatted;
}
