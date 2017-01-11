#pragma once
#include "Rtypes.h"
#include <iostream>

template <typename NT>
class node;

template <typename NT>
std::ostream& operator<<( std::ostream& os, const node<NT>& thenode );

template <typename NT>
class node {
  friend std::ostream& operator<< <>( std::ostream& os, const node<NT>& thenode );
  public:
    virtual ~node();
    ClassDef(node,0);
  private:
    float f;
};
