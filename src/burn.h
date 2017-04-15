// Copyright (c) 2016-2017 The CryptoCoderz Team / Tattoocoin
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef TSETLE_BURN_H
#define TSETLE_BURN_H

#include "bignum.h"
#include "init.h"

/** Coin burn block */
static const int64_t COIN_BURN_BLOCK    = 110000; // Initial burn height
static const int64_t COIN_BURN_BLOCK_2  = 125000; // Second burn height
                                                  // TODO: Create burn heights as burns occur
/** Coin burn total as of burn block */
static const int64_t COIN_BURN_COUNT    = 425050011; // Rounded up exactly by 1 COIN to avoid needless calculations
static const int64_t COIN_BURN_COUNT_2  = COIN_BURN_COUNT + 42000000; // Exact coin value
#endif
