# Esqueleto de Proyecto C++

## Características

- Cmake
- Estructura Básica
- Tests (en el futuro)

## Cómo se Usa 

1. Clona este proyecto
1. Sustituye el nombre del proyecto en `CMakeLists.txt`
1. Crea un directorio `bin` el cual no se añadirá a git por defecto (puedes modificar el comportamiento borrandolo del `.gitignore`)
1. Accede al directorio `bin` y ejecuta: `cmake .. && make` la primera vez, y solamente `make` para compilar las restantes
1. Se debe de crear un ejecutable con el nombre del proyecto
1. Modifica `src/main.cpp` y añade las fuentes necesarias, no te olvides de mantener actualizada la variable `CMAKE_SOURCES' con todas las fuentes, o compilar cada una de las librerias como se especifica en el `cmake`
1. Si tu proyecto necesita librerías externas, debes linkarlas también con la directiva `target_link_libraries`

## TODO

1. Test!
