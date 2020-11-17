# 3D Math Engine

- Developing a 3D math engine in C++ that can perform basic calculations with vectors, matrices, and Quaternions.
- If you want to check it out, you are welcome to play around on ```main.cpp```, and check out the [documentation](https://github.com/engichang1467/3D-Math-Engine/wiki).

## Engine can now perform
- [x] Vectors
- [x] Matrices
- [ ] Quaternions

## How to use it?

- Use the command below, and type ```make``` command to compile the engine. Then, type ```./math``` to see the output.
```bash
>> make
...
>> ./math
```

## Sample Usage

### Create Vector, Matrices, and Quad

```c++
Vector3d vector1(2.0f, 3.0f, 1.0f);
Vector3d vector2(1.0f, 2.0f, 0.0f);

Matrix3d matrix1(2.0f, 3.0f, 1.0f, 
                 2.0f, 1.0f, 4.0f, 
                 5.0f, 3.0f, 2.0f);

Matrix3d matrix2(5.0f, 3.0f, 2.0f, 
                 2.0f, 1.0f, 1.0f, 
                 5.0f, 3.0f, 2.0f);
```

### Basic Arithmatic
```c++
Vector3d result = vector1 + vector2;
Vector3d result2 = vector1 - vector2;
vector1 *= 3.0f;

Matrix3d result3 = matrix1 + matrix2;
Matrix3d result4 = matrix1 * matrix2;
```

## Want to Know More?
- [Check out the documentation here](https://github.com/engichang1467/3D-Math-Engine/wiki)