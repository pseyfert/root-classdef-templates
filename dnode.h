#pragma once
#include "node.h"

class dnode: public node<dnode> {
  public:
    ~dnode();
    ClassDef(dnode,0);
};
