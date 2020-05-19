/*
	Copyright (c) 2019-2020 7Mersenne@gmail.com

	This file is part of LogFilter, a lib of SeptemMatrix engine in C++.

	LogFilter is free software; you can redistribute it and/or modify it under
	the terms of the GNU Lesser General Public License (LGPL) as published
	by the Free Software Foundation; either version 3 of the License, or
	(at your option) any later version.

	As a special exception, the Contributors give you permission to link
	this library with independent modules to produce an executable,
	regardless of the license terms of these independent modules, and to
	copy and distribute the resulting executable under terms of your choice,
	provided that you also meet, for each linked independent module, the
	terms and conditions of the license of that module. An independent
	module is a module which is not derived from or based on this library.
	If you modify this library, you must extend this exception to your
	version of the library.

	LogFilter is distributed in the hope that it will be useful, but WITHOUT
	ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
	FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
	License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>
#include <stdio.h>
using namespace std;

#include "Public/LogFilter.h"
using namespace Septem;

int main()
{
	{
		const char *charaList[] = {
			"[0] : config:",
			"[1] : config:"
		};
		size_t length = sizeof(charaList) / sizeof(char*);

		char outFilePath[256] = { "filter_out.log" };

		for (size_t i = 0; i < length; ++i)
		{
			sprintf_s<256>(outFilePath, "output/filter_config_%d.log", i);
			CLogFilter logFilter("input/thorium.log", outFilePath, charaList[i]);
			logFilter.Run();
		}
	}

	{
		const char *charaList[] = {
		"[0] : psr =",
		"[1] : psr =",
		"[2] : psr =",
		"[3] : psr =",
		"[4] : psr =",
		"[5] : psr =",
		"[6] : psr =",
		"[7] : psr =",
		"[8] : psr =",
		"[9] : psr =",
		"[10] : psr =",
		"[11] : psr =",
		"[12] : psr =",
		"[13] : psr =",
		"[14] : psr =",
		"[15] : psr =",
		"[16] : psr =",
		"[17] : psr =",
		"[18] : psr =",
		"[19] : psr ="
		};
		size_t length = sizeof(charaList) / sizeof(char*);

		char outFilePath[256] = { "filter_out.log" };

		for (size_t i = 0; i < length; ++i)
		{
			sprintf_s<256>(outFilePath, "output/filter_psr_%d.log", i);
			CLogFilter logFilter("input/thorium.log", outFilePath, charaList[i]);
			logFilter.Run();
		}
	}

	{
		const char *charaList[] = {
		"[0] : frame ",
		"[1] : frame ",
		"[2] : frame ",
		"[3] : frame ",
		"[4] : frame ",
		"[5] : frame ",
		"[6] : frame ",
		"[7] : frame ",
		"[8] : frame ",
		"[9] : frame ",
		"[10] : frame ",
		"[11] : frame ",
		"[12] : frame ",
		"[13] : frame ",
		"[14] : frame ",
		"[15] : frame ",
		"[16] : frame ",
		"[17] : frame ",
		"[18] : frame ",
		"[19] : frame "
		};
		size_t length = sizeof(charaList) / sizeof(char*);

		char outFilePath[256] = { "filter_out.log" };

		for (size_t i = 0; i < length; ++i)
		{
			sprintf_s<256>(outFilePath, "output/filter_frame_psr_%d.log", i);
			CLogFilter logFilter("input/thorium.log", outFilePath, charaList[i]);
			logFilter.Run();
		}
	}
	

	system("pause");
	return 0;
}