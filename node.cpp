#include "node.h"

template <typename NT>
node<NT>::~node() {
}

class dnode;
template class node<dnode>;
templateClassImp(node);
