# cd to where ROOT is
# source bin/thisroot.sh
# export CPPFLAGS="`root-config --cflags` -march=native -O2 -flto -g -Wextra -Wall -Wshadow"
# export LDFLAGS="`root-config --libs` -lRooStats -lRooFitCore -lRooFit -lMinuit -lFoam -lMathMore -lTMVA -lstdc++ -m64 -g -march=native -flto -fuse-ld=gold"
# export ROOT_INCDIR="`root-config --incdir`"
# export CPP=c++
# export CXX=c++
# export CC=c++

all: main

HDR_FILES = $(filter-out LinkDef.h, $(wildcard *.h))
OBJ_FILES = $(patsubst %.h,%.o,$(HDR_FILES))

# cut out of the root build process
G__foo.cxx: $(HDR_FILES) LinkDef.h
	rootcling -rootbuild -f G__foo.cxx -s libfoo.so -rml libfoo.so -rmf libfoo.so -writeEmptyRootPCM -I$(ROOT_INCDIR) $^

# lazy linking for auto rules
G__foo.cpp: G__foo.cxx
	ln -f -s G__foo.cxx G__foo.cpp

clean:
	rm -f *.o G__* lib* main

main: $(OBJ_FILES) G__foo.o

.PHONY: all clean
