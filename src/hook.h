// Used by modules to hook actions to master process
//
// Copyright (c) 2013 The Wheatserver Author. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef WHEATSERVER_HOOK_H
#define WHEATSERVER_HOOK_H

#include "list.h"

/* typedef hook functions */

typedef void afterInitProc();
typedef void whenReadyProc();
typedef void preForkWorkerProc();
typedef void afterForkWorkerProc();
typedef void whenWakeProc();
typedef void beforeSleepProc();

struct hookCenter {
    struct list *afterinit;
    struct list *whenready;
    struct list *prefork_worker;
    struct list *afterfork_worker;
    struct list *whenwake;
    struct list *beforesleep;
};

void initHookCenter();

#endif
