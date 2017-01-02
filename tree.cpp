#include "tree.h"

template <typename NT>
tree<NT>::~tree() {
}

class dnode;
template class tree<dnode>;
templateClassImp(tree);
