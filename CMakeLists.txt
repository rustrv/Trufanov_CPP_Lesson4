cmake_minimum_required(VERSION 3.10)

# Название проекта
project(Fibonacci)

# Устанавливаем стандарт C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл
add_executable(Fibonacci main.cpp)
