
CppVector3dSrcVectors := $(wildcard Vector3d.cpp)
HVector3dSrcVectors := $(wildcard Vector3d.h)
OVector3dSrcVectors := $(CppVector3dSrcVectors:Vector3d.cpp=Vector3d.o)

all: srcPrep math

srcPrep: $(CppVector3dSrcVectors) $(HVector3dSrcVectors)
	g++ -Wall -c $(CppVector3dSrcVectors)
	g++ -Wall -c main.cpp 

# main.o: main.cpp 

math: *.o
	g++ -Wall -o math *.o 

clean:
	rm -f math *.o $(OVector3dSrcVectors)
