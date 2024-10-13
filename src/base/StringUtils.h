#pragma once

#include <string>
#include <vector>

namespace tmms
{
  namespace base
  {
    using std::string;
    using std::vector;

    class StringUtils
    {
    public:
      static bool StartsWith(const string &s, const string &sub);
      static bool EndsWith(const string &s, const string &sub);

      static string FilePath(const std::string &path);
      static string FileNameExt(const std::string &path);
      static string FileName(const std::string &path);
      static string Extension(const std::string &path);
      static vector<string> SplitString(const string &s, const string &delimiter);
    };
  }
}