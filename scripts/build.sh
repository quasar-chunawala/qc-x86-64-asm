# Compile step
g++ -std=c++23 -g -O0 -Wall -Wextra -c src/add_sub_i32.cpp -o bin/add_sub_i32_cpp.o

# Link step
g++ -g bin/add_sub_i32_cpp.o bin/add_sub_i32_fasm.o -o bin/add_sub_i32