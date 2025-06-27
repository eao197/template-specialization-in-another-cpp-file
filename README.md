Проверить посредством GCC:

```sh
g++ -o test1_gcc main.cpp a.cpp b.cpp
./test1_gcc

g++ -o test2_gcc -DNO_COMMON_IMPL main.cpp a.cpp b.cpp
./test2_gcc
```

Проверить посредством VC++:

```cmd
cl -Fetest1_vc -EHsc main.cpp a.cpp b.cpp
test1_vc

cl -Fetest2_vc -EHsc -DNO_COMMON_IMPL main.cpp a.cpp b.cpp
test2_vc
```

Проверить посредством clang:

```sh
clang++ -o test1_clang main.cpp a.cpp b.cpp
./test1_clang

clang++ -o test2_clang -DNO_COMMON_IMPL main.cpp a.cpp b.cpp
./test2_clang
```

