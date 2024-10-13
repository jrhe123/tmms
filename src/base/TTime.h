// pragma: 这是一个预处理指令，用于防止重复包含头文件，由编译器保证，作用类似于#ifndef
#pragma once
#include <cstdint>
#include <string>

namespace tmms
{
  namespace base
  {
    class TTime
    {
      // 定义了4个函数，我们一个一个来实现
    public:
      static int64_t NowMS();
      static int64_t Now();
      static int64_t Now(
          int &year,
          int &month,
          int &day,
          int &hour,
          int &minute,
          int &second);
      static std::string ISOTime();
    };
  }
}
