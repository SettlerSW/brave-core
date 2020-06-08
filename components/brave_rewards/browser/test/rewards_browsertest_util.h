/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_REWARDS_BROWSER_TEST_REWARDS_BROWSERTEST_UTIL_H_
#define BRAVE_COMPONENTS_BRAVE_REWARDS_BROWSER_TEST_REWARDS_BROWSERTEST_UTIL_H_

#include <string>

#include "base/files/file_path.h"
#include "bat/ledger/internal/request/request_util.h"

namespace rewards_browsertest_util {

enum class ContributionType { OneTimeTip, MonthlyTip };

void GetTestDataDir(base::FilePath* test_data_dir);

}  // namespace rewards_browsertest_util

#endif  // BRAVE_COMPONENTS_BRAVE_REWARDS_BROWSER_TEST_REWARDS_BROWSERTEST_UTIL_H_
