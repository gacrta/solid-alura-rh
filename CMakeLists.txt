# CMakeList.txt: arquivo de projeto de CMake de nível superior, fazer configuração global
# e inclua subprojetos aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("solid-alura-rh")

# Inclua subprojetos.
add_subdirectory ("solid-alura-rh")
add_subdirectory ("tests")

