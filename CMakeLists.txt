cmake_minimum_required(VERSION 3.12)

# Especificamos la version usando el estilo "semver"
set (PRUEBA_VERSION_MAJOR 1)
set (PRUEBA_VERSION_MINOR 0)
set (PRUEBA_VERSION_PATCH 0)
set (PRUEBA_VERSION ${PRUEBA_VERSION_MAJOR}.${PRUEBA_VERSION_MINOR}.${PRUEBA_VERSION_PATCH})
# Nombre del Proyecto y Lenguaje
project(prueba VERSION ${PRUEBA_VERSION}
               LANGUAGES CXX
               DESCRIPTION "Version de prueba para tener un esqueleto")

# Variables del Proyecto
set( ${PROJECT_NAME}_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set( ${PROJECT_NAME}_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})


# Añadimos las fuentes a compilar
set( CMAKE_SOURCES
  src/main.cpp
)

###############################
# Configuración de la versión
###############################
# Se configura el archico con las variables que tenemos
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.ini"
  "${PROJECT_BINARY_DIR}/config.h"
)

#############################
# Librerias internas
#############################
# Para añadir una librería de nuestra cosecha
# add_library(calclib STATIC src/calclib.cpp include/calc/lib.hpp)
# target_include_directories(calclib PUBLIC include)
# target_compile_features(calclib PUBLIC cxx_std_11)

#############################
# Crear Ejecutable
#############################
# La variable ${PROJECT_NAME} se crea con la directiva "project"
add_executable( ${PROJECT_NAME} ${CMAKE_SOURCES} )

##################
# Librerias externas
##################
# Aquí se deben de linkar las librerias que dependan del proyecto (opengl, threads, boost)
# target_link_libraries( ${PROJECT_NAME} ${LIBS} m )

