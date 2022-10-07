# C++ Example Project

Extract from https://github.com/ttroy50/cmake-examples

# Building the example

[source,bash]
----
$ mkdir build

$ cd build/

$ cmake ..
-- The C compiler identification is GNU 4.8.4
-- The CXX compiler identification is GNU 4.8.4
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/matrim/workspace/cmake-examples/02-sub-projects/A-basic/build

$ make
Scanning dependencies of target sublibrary1
[ 50%] Building CXX object sublibrary1/CMakeFiles/sublibrary1.dir/src/sublib1.cpp.o
Linking CXX static library libsublibrary1.a
[ 50%] Built target sublibrary1
Scanning dependencies of target subbinary
[100%] Building CXX object subbinary/CMakeFiles/subbinary.dir/main.cpp.o
Linking CXX executable subbinary
[100%] Built target subbinary

----