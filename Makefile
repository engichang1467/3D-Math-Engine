
CppVector3d := $(wildcard Vector3d.cpp)
HVector3d := $(wildcard Vector3d.h)
OVector3d := $(CppVector3d:Vector3d.cpp=Vector3d.o)

CppMatrix3d := $(wildcard Matrix3d.cpp)
HMatrix3d := $(wildcard Matrix3d.h)
OMatrix3d := $(CppMatrix3d:Matrix3d.cpp=Matrix3d.o)

CppQuaternion3d := $(wildcard Quaternion3d.cpp)
HQuaternion3d := $(wildcard Quaternion3d.h)
OQuaternion3d := $(CppQuaternion3d:Quaternion3d.cpp=Quaternion3d.o)

CppMathSrc = $(CppVector3d) $(CppMatrix3d) $(CppQuaternion3d)
HMathSrc = $(HVector3d) $(HMatrix3d) $(HQuaternion3d)
OMathSrc = $(OVector3d) $(OMatrix3d) $(OQuaternion3d)

all: srcPrep math

srcPrep: $(CppMathSrc) $(HMathSrc)
	g++ -Wall -c main.cpp  $(CppMathSrc)

math: *.o
	g++ -Wall -o math *.o 

clean:
	rm -f math *.o $(OMathSrc)
