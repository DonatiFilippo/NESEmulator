cmake_minimum_required(VERSION 3.21)
project (NESEmulator C)

set(CMAKE_C_STANDARD 99)

include_directories(src)

add_executable(NESEmulator src/main.c src/cpu6502.c src/cpu6502.h src/ppu.c src/ppu.h)
