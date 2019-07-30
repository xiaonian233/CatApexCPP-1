#include <string>
#include "proc_help.h"

#ifndef CATAPEXCPP_APEXUTILS_H
#define CATAPEXCPP_APEXUTILS_H

using std::string;
using std::wstring;

#endif //CATAPEXCPP_APEXUTILS_H

void readWorldArray(void *array);
void readVec3D(__int64 addr, Vec3D * vec3D);
void writeVec3D(__int64 addr, Vec3D * vec3D);
char *readPlayerName(int index);
Vec3D GetBonePos(__int64 entity, int ID, Vec3D entityLocal);
void DrawBone(ImDrawList * drawList, __int64 entity, Vec3D entityLocal, ImFont *font, float size, ImColor col);
int GetEntityType(__int64 entityPoint);
void drawBones(ImDrawList * drawList, __int64 entity, Vec3D local, ImColor col, int boneIndex[3][16]);