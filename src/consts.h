#ifndef LSM_CONSTANTS_H
#define LSM_CONSTANTS_H

#include <string>
#include "../kvstore_api.h"

typedef std::string String;
typedef uint64_t Key;
typedef unsigned long long Size;
typedef unsigned long long TimeStamp;

// todo: should move them to a .cpp file

const size_t MAX_SSTABLE_SIZE = 1 << 21;

const size_t INDEX_SIZE_PER_VALUE = 12;

const size_t HEADER_SIZE = 32;

const size_t BLOOM_FILTER_SIZE = 10240;

const String DELETION_MARK = "~DELETED~";

#endif