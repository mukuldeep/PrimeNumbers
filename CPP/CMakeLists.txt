cmake_minimum_required(VERSION 3.15)
project(PrimeNumbers)

set(CMAKE_CXX_STANDARD 17)


# Include the header directory
include_directories(include)

## Option 1
## Add all source files manually or use GLOB
#file(GLOB SOURCES "src/*.cpp")
## Create executable
#add_executable(MyProject ${SOURCES})

# Option 2
add_executable(PrimeNumbers
        src/prime_sieve_of_eratosthenes.cpp
        )
