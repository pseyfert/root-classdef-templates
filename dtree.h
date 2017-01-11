#pragma once
#include "tree.h"
#include "dnode.h"

class dtree: tree<dnode> {
  public:
    virtual ~dtree();
    ClassDef(dtree,0);
};
