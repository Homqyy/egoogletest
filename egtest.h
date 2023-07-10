#include <string>
#include <utility>

namespace etesting {

class MatchesRegex {
  public:
    std::pair<bool, std::string> matchesRegex(const std::string &str,
                                              const std::string &pattern);
};

} // namespace etesting