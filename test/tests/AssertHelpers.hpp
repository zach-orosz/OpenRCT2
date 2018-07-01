/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include <initializer_list>
#include <vector>
#include <gtest/gtest.h>

template<typename T, typename TExpected>
static void AssertVector(std::vector<T> actual, TExpected expected)
{
    ASSERT_EQ(actual.size(), expected.size()) <<
        "Expected vector of size " << expected.size() << ", but was " << actual.size();
    size_t i = 0;
    for (auto item : expected)
    {
        EXPECT_EQ(actual[i], item) <<
            "Element at index " << i << " did not match";
        i++;
    }
}

template<typename T>
static void AssertVector(std::vector<T> actual, std::initializer_list<T> expected)
{
    AssertVector<T, std::initializer_list<T>>(actual, expected);
}