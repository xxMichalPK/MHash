#ifndef __MHASH_H__
#define __MHASH_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MHash MHash;

MHash* CreateMHasherObj();
void DeleteMHasherObj(MHash *hasher);

char* GetHash(MHash *hasher, const char* text);

#ifdef __cplusplus
}
#endif

#endif