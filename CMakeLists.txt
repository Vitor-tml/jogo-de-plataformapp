cmake_minimum_required(VERSION 3.0)

project(JogoDePlataformapp)

# Define o uso das libs estáticas (não precisa copiar dll)
set(SFML_STATIC_LIBRARIES TRUE)

# Define o uso de paralelismo para compilar o programa (mais rápido, cuidado com o número de threads do seu pc)
set(CMAKE_MAKE_PROGRAM "${CMAKE_MAKE_PROGRAM} -j$(nproc)")

# Define o local dos aquivos cmake da bibliteca
set(SFML_DIR "./lib/SFML-2.6.1/lib/cmake/SFML")

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

# Adicionar o arquivo de código-fonte
add_executable(main main.cpp)

# Linkar a biblioteca SFML ao seu executável
target_link_libraries(main sfml-graphics sfml-window sfml-system -static)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")