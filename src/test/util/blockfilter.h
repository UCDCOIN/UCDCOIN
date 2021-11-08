// Copyright (c) 2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef UNITEDCONTINENTALDOLLAR_TEST_UTIL_BLOCKFILTER_H
#define UNITEDCONTINENTALDOLLAR_TEST_UTIL_BLOCKFILTER_H

#include <blockfilter.h>
class CBlockIndex;

bool ComputeFilter(BlockFilterType filter_type, const CBlockIndex* block_index, BlockFilter& filter);

#endif // UNITEDCONTINENTALDOLLAR_TEST_UTIL_BLOCKFILTER_H
