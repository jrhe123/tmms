#pragma once

#include <string>

namespace tmms
{
  namespace base
  {
    using std::string;
    class StringUtils
    {
    public:
      static bool StartsWith(const string &s, const string &sub);
      static bool EndsWith(const string &s, const string &sub);
    };
  }
}