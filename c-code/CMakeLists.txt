cmake_minimum_required(VERSION 3.15)
project(aloxidasion)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-Wall")

add_executable(aloxidasion generated/main.c generated/proc.c lib/r_io.c lib/r_lib.c usr/usr.c generated/io.c generated/platform.c)
