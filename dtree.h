#pragma once
#include "tree.h"
#include "dnode.h"

class dtree: tree<dnode> {
  public:
    ~dtree();
    ClassDef(dtree,0);
};
