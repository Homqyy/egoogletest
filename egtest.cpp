#include <regex>
#include "egtest.h"

namespace etesting {

std::pair<bool, std::string> 
MatchesRegex::matchesRegex(const std::string& str, const std::string& pattern)
{
    std::regex r(pattern);
    bool result = std::regex_match(str, r);
    return std::make_pair(result, str);
}

}  // namespace etesting