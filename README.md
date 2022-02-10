# raylib_GLTF
GLTF loader for raylib with more features

- Node Transformations (Proper placement of multiple meshes in their respective local space inside a GLTF file)

Use:
include "raylib_GLTF.h" in your source, static link.

LoadModelGLTF("Your Model");


Example CMakeLists.txt

file(GLOB raylib_GLTF_src
     "deps/raylib_GLTF/src/*.c"
)

add_library(raylib_GLTF STATIC ${raylib_GLTF_src})
    target_include_directories (raylib_GLTF PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/deps/raylib_GLTF/include ${CMAKE_CURRENT_SOURCE_DIR}/deps/raylib-4.0.0_webassembly/include)
    
target_include_directories (YourProject PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/deps/raylib-4.0.0_webassembly/include)
target_include_directories (YourProject PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/deps/raylib_GLTF/include)
target_link_libraries (YourProject ${CMAKE_CURRENT_SOURCE_DIR}/deps/raylib-4.0.0_webassembly/lib/libraylib.a raylib_GLTF)
