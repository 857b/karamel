/*
  Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
  Licensed under the Apache 2.0 License.
*/


#ifndef __FStar_ST_H
#define __FStar_ST_H



#include "FStar_Monotonic_Heap.h"
#include <inttypes.h>
#include "krmllib.h"
#include "krml/internal/compat.h"
#include "krml/internal/target.h"
typedef void *FStar_ST_gst_pre;

extern FStar_Monotonic_Heap_heap_rec FStar_ST_gst_get();

extern void FStar_ST_gst_put(FStar_Monotonic_Heap_heap_rec h1);

typedef void *FStar_ST_heap_predicate;

typedef void *FStar_ST_st_pre;

extern FStar_Monotonic_Heap_heap_rec FStar_ST_get();


#define __FStar_ST_H_DEFINED
#endif
