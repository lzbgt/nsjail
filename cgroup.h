/*

   nsjail - cgroup namespacing
   -----------------------------------------

   Copyright 2014 Google Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#ifndef NS_CGROUP_H
#define NS_CGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "nsjail.h"

bool cgroupInitNsFromParent(struct nsjconf_t* nsjconf, pid_t pid);
bool cgroupInitNs(void);
void cgroupFinishFromParent(struct nsjconf_t* nsjconf, pid_t pid);

#endif /* _CGROUP_H */
