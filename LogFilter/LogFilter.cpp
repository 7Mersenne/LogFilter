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

#include "LogFilter.h"

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

namespace Septem {

	CLogFilter::CLogFilter()
	{
		strcpy_s<256>(sInFile, "in.txt");
		strcpy_s<256>(sOutFile, "out.txt");
		strcpy_s<256>(sMatchChara, "[0] : psr =");
		memset(buff, 0, sizeof(buff));
	}

	CLogFilter::CLogFilter(const char * in, const char * out)
	{
		strcpy_s<256>(sInFile, in);
		strcpy_s<256>(sOutFile, out);
		strcpy_s<256>(sMatchChara, "[0] : psr =");
		memset(buff, 0, sizeof(buff));
	}

	bool CLogFilter::Init(const char * InMatchChara)
	{
		if (InMatchChara != NULL)
		{
			strcpy_s<256>(sMatchChara, InMatchChara);

			return true;
		}
		
		return false;
	}
	void CLogFilter::Run()
	{
		const int LineLength = 4096;

		ifstream fin;
		ofstream fout;


		fin.open(sInFile);

		if (fin.is_open()) {
			fout.open(sOutFile);

			if (fout.is_open())
			{
				const char* pMatch = strstr(buff, sMatchChara);
				if (pMatch)
					fout << pMatch << endl;
				fout.close();
			}

			fin.close();
		}
	}
}