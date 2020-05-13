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

#pragma once

namespace Septem
{
	class CLogFilter
	{
	public:
		CLogFilter();
		CLogFilter(const char* in, const char * out);

		bool Init(const char* InMatchChara);
		void Run();

	private:
		char sInFile[256];
		char sOutFile[256];
		char sMatchChara[256];
		char buff[4096];
	};
}