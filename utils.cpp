//
// Created by Megnath Ramesh on 2021-12-12.
//

#include "utils.h"

std::string vec2str(std::vector<int> vec) {
    std::ostringstream vts;

    if (!vec.empty())
    {
        // Convert all but the last element to avoid a trailing ","
        std::copy(vec.begin(), vec.end()-1,
                  std::ostream_iterator<int>(vts, ", "));

        // Now add the last element with no delimiter
        vts << vec.back();
    }

    return vts.str();
}