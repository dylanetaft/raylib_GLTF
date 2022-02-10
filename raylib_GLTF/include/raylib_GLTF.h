#pragma once
#ifdef __cplusplus
extern "C" {
#endif
#include "raylib.h"
#include "cgltf.h"
#include "raymath.h"

Model LoadModelGLTF(const char *fileName);
#ifdef __cplusplus
}
#endif
