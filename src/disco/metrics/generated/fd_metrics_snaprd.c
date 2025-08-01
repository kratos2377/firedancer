/* THIS FILE IS GENERATED BY gen_metrics.py. DO NOT HAND EDIT. */
#include "fd_metrics_snaprd.h"

const fd_metrics_meta_t FD_METRICS_SNAPRD[FD_METRICS_SNAPRD_TOTAL] = {
    DECLARE_METRIC( SNAPRD_STATE, GAUGE ),
    DECLARE_METRIC( SNAPRD_FULL_NUM_RETRIES, COUNTER ),
    DECLARE_METRIC( SNAPRD_INCREMENTAL_NUM_RETRIES, COUNTER ),
    DECLARE_METRIC( SNAPRD_FULL_BYTES_READ, GAUGE ),
    DECLARE_METRIC( SNAPRD_FULL_BYTES_WRITTEN, GAUGE ),
    DECLARE_METRIC( SNAPRD_FULL_BYTES_TOTAL, GAUGE ),
    DECLARE_METRIC( SNAPRD_FULL_DOWNLOAD_RETRIES, GAUGE ),
    DECLARE_METRIC( SNAPRD_INCREMENTAL_BYTES_READ, GAUGE ),
    DECLARE_METRIC( SNAPRD_INCREMENTAL_BYTES_WRITTEN, GAUGE ),
    DECLARE_METRIC( SNAPRD_INCREMENTAL_BYTES_TOTAL, GAUGE ),
    DECLARE_METRIC( SNAPRD_INCREMENTAL_DOWNLOAD_RETRIES, GAUGE ),
};
