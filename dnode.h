#pragma once
#include "node.h"

class dnode: public node<dnode> {
  public:
    virtual ~dnode();
    ClassDef(dnode,0);
};
