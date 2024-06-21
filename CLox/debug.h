//
//  debug.h
//  CLox
//
//  Created by Evren Sen on 2024-06-21.
//

#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif /* clox_debug_h */
