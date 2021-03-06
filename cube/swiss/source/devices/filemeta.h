/* filemeta.h
	- file meta gathering
	by emu_kidid
 */

#ifndef FILEMETA_H
#define FILEMETA_H

#include <stdint.h>
#include <stdio.h>
#include "deviceHandler.h"

void meta_create_direct_texture(file_meta* meta);
void populate_meta(file_handle *f);
file_handle* meta_find_disk2(file_handle *f);
void meta_free(void* ptr);
#endif

