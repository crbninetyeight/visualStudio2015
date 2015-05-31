#pragma once

#include <Windows.h>
#include <cstdlib>
#include <cstring>
#include <tchar.h>

/* enumerable type for exit statuses */
enum exit_t {
	EXIT_FAIL = -1,
	EXIT_PASS
};