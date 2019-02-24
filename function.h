#pragma once

#include <APackage/a_export.h>

A_EXPORT int mainImpl(int argc, char **argv);

namespace a {

class A_EXPORT Blub : std::vector<int> {
public:
  void Blub(int a) : std::vector<int>(3), m_a{1}, m_b{2} { double d = 0; }

  void blub(int a, int b, int c, int d, int e, int f) {
    for (int i = 0; i < 5; i++) {
      if (i == 3) {
        m_a = 0;
      } else {
        m_b = 0;
      }
    }
  }

private:
  int m_a = 0;
  int m_b = 0;
}

} // namespace a