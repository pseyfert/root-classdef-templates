#include "node.h"

template <typename NT>
node<NT>::~node() {
}

template <typename NT>
std::ostream& operator<<( std::ostream& os, const node<NT>& thenode ) {
  os << thenode.f;
  return os;
}

class dnode;
template class node<dnode>;
template std::ostream& operator<<( std::ostream& os, const node<dnode>& thenode ) ;
templateClassImp(node);
