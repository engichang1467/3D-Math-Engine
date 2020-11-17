
CppVector3d := $(wildcard Vector3d.cpp)
HVector3d := $(wildcard Vector3d.h)
OVector3d := $(CppVector3d:Vector3d.cpp=Vector3d.o)

CppMatrix3d := $(wildcard Matrix3d.cpp)
HMatrix3d := $(wildcard Matrix3d.h)
OMatrix3d := $(CppMatrix3d:Matrix3d.cpp=Vector3d.o)

CppMathSrc = $(CppVector3d) $(CppMatrix3d)
HMathSrc = $(HVector3d) $(HMatrix3d)
OMathSrc = $(OVector3d) $(OMatrix3d)

all: srcPrep math

srcPrep: $(CppMathSrc) $(HMathSrc)
	g++ -Wall -c main.cpp  $(CppMathSrc)

# main.o: main.cpp $(HMathSrc)
# 	g++ -Wall -c main.cpp 

math: *.o
	g++ -Wall -o math *.o 

clean:
	rm -f math *.o $(OVector3dSrcVectors)
