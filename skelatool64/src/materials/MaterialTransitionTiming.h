#ifndef __MATERIALS_MATERIAL_TRANSITION_TIMING_H__
#define __MATERIALS_MATERIAL_TRANSITION_TIMING_H__

#define TIMING_SP_GEOMETRY_MODE     0.324
#define TIMING_SP_OTHER_MODE_H      0.770
#define TIMING_SP_OTHER_MODE_L      0.751
#define TIMING_DP_COLOR             0.395

#define TIMING_DP_TEXTURE           0.305
#define TIMING_DP_TEXTURE_IMAGE     0.698
#define TIMING_DP_SET_TILE          0.395
#define TIMING_DP_SET_TILE_SIZE     0.394
#define TIMING_DP_TILE_SYNC         0.385
#define TIMING_DP_LOAD_SYNC         0.388
#define TIMING_DP_PIPE_SYNC         0.388

#define TIMING_DP_MATRIX_LOAD       1.880
#define TIMING_DP_MATRIX_MUL        4.134
#define TIMING_DP_MATRIX_POP        1.780

#define TIMING_DP_LOAD_BLOCK(bytes) ((bytes) * 0.00772)

#endif