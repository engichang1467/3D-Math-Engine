# 3D Math Engine

Developing a 3D math engine in C++ that can perform basic calculations with vectors, matrices, and Quaternions.

## Engine can now perform
- [x] Vectors
- [ ] Matrices
- [ ] Quaternions

## How to use it?

- Use the command below, and type ```make``` command to compile the engine. Then, type ```./math``` to see the output.
```bash
>> make
...
>> ./math
```

## Vectors

### Create a Vector
```c++
Vector3d vector1(2.0f, 3.0f, 1.0f);
Vector3d vector2(1.0f, 2.0f, 0.0f);
```

### Print out a Vector
```c++
cout << vector1 << endl;
```

### Vector Addition
```c++
Vector3d vector3 = vector1 + vector2;
// or
vector1 += vector2;
```

### Vector Subtraction
```c++
Vector3d vector3 = vector1 - vector2;
// or
vector1 -= vector2;
```

### Scalar Multiplication
```c++
Vector3d vector3 = vector1 * 5.0f;
// or
vector1 *= 5.0f;
```

### Scalar Division
```c++
Vector3d vector3 = vector1 / 5.0f;
// or
vector1 /= 5.0f;
```

### Dot Product
```c++
float dotProduct = vector1.dot(vector2);
// or
float dotProduct = vvector1 * vector2;
```

### Cross Product
```c++
Vector3d vector3 = vector1.cross(vector2);
// or
Vector3d vector4 = vector1 % vector2;
// or
vector1 %= vector2;
```

### Vector Magnitude
```c++
float magnitude = vector1.magnitude();
```

### Vector Normalization
```c++
vector1.normalize();
```