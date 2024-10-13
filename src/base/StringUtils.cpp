#include "StringUtils.h"

using namespace tmms::base;

bool StartsWith(const string &s, const string &sub)
{
  if (sub.empty())
  {
    return true;
  }
  if (s.empty())
  {
    return false;
  }
  auto len = s.size();
  auto sublen = sub.size();
  if (len < sublen)
  {
    return false;
  }
  return s.compare(0, sublen, sub) == 0;
}

bool EndsWith(const string &s, const string &sub)
{
  if (sub.empty())
  {
    return true;
  }
  if (s.empty())
  {
    return false;
  }
  auto len = s.size();
  auto sublen = sub.size();
  if (len < sublen)
  {
    return false;
  }
  return s.compare(len - sublen, sublen, sub) == 0;
}