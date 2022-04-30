# CMakeList.txt: projeto de CMake para solid-alura-rh, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

include_directories("../solid-alura-rh")

# Adicione a origem ao executável deste projeto.
add_executable (solid-alura-rh-tests "main-test.cpp" "funcionario-test.cpp" "reajuse-test.cpp")

target_sources (solid-alura-rh-tests PUBLIC "${PROJECT_SOURCE_DIR}/solid-alura-rh/Funcionario.cpp" "${PROJECT_SOURCE_DIR}/solid-alura-rh/ValidacaoException.cpp" "${PROJECT_SOURCE_DIR}/solid-alura-rh/ReajusteSalarial.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET solid-alura-rh PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
