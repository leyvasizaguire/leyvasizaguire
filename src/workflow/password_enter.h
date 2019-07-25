// Copyright 2019 Shift Cryptosecurity AG
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _PASSWORD_ENTER_H_
#define _PASSWORD_ENTER_H_

#include <ui/components/set_password.h> // for SET_PASSWORD_MAX_PASSWORD_LENGTH

/**
 * Starts the enter password workflow.
 * This call blocks.
 * @param[in] title screen
 * @param[out] password_out must be SET_PASSWORD_MAX_PASSWORD_LENGTH bytes (including null
 * terminator). Use `UTIL_CLEANUP_STR` to make sure that the password is destroyed after use.
 */
void password_enter(const char* title, char* password_out);

#endif
