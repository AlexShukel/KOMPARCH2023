#pragma once

#include <iostream>

#include "macro.h"

namespace comp {
    using namespace std;

    struct IfNotDefMacro : public Macro {
        IfNotDefMacro();

        bool pre_comp_time_process(Preprocessor& preprocessor, vector<string>& args) override;
        bool comp_time_process(Preprocessor& preprocessor, vector<string>& args) override;
    };
};