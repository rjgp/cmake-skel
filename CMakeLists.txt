cmake_minimum_required(VERSION 3.12)

# Especificamos la version usando el estilo "semver"
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)
set (VERSION_PATCH 0)
set (PROJECT_VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})
# Nombre del Proyecto y Lenguaje
project(prueba VERSION ${PROJECT_VERSION}
               LANGUAGES CXX
               DESCRIPTION "Version de prueba para tener un esqueleto")

# Variables del Proyecto
set( ${PROJECT_NAME}_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set( ${PROJECT_NAME}_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
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
add_library(point STATIC ${${PROJECT_NAME}_SOURCE_DIR}/point.cpp ${${PROJECT_NAME}_INCLUDE_DIR}/point.h)
target_include_directories(point PUBLIC ${${PROJECT_NAME}_INCLUDE_DIR})
target_compile_features(point PUBLIC cxx_std_11)

set( LIBS
    point
    )
#############################
# Crear Ejecutable
#############################
# La variable ${PROJECT_NAME} se crea con la directiva "project"
add_executable( ${PROJECT_NAME} ${CMAKE_SOURCES} )

##################
# Librerias externas
##################
# Aquí se deben de linkar las librerias que dependan del proyecto (opengl, threads, boost)
target_link_libraries( ${PROJECT_NAME} ${LIBS} )

