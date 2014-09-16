/* -*- Mode: C++; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2010-2012 Couchbase, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */
#include "config.h"
#include <gtest/gtest.h>
#include "iotests/iotests.h"

int main(int argc, char **argv)
{
    setvbuf(stdout, NULL, _IOLBF, 2048);
    setvbuf(stderr, NULL, _IOLBF, 2048);
    ::testing::AddGlobalTestEnvironment(MockEnvironment::getInstance());
    ::testing::InitGoogleTest(&argc, argv);
    setup_test_timeout_handler();
    return RUN_ALL_TESTS();
}