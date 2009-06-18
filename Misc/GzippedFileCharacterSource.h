/***********************************************************************
FileCharacterSource - High-performance ASCII file reader for gzip-
compressed standard files.
Copyright (c) 2009 Oliver Kreylos

This file is part of the Miscellaneous Support Library (Misc).

The Miscellaneous Support Library is free software; you can
redistribute it and/or modify it under the terms of the GNU General
Public License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

The Miscellaneous Support Library is distributed in the hope that it
will be useful, but WITHOUT ANY WARRANTY; without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with the Miscellaneous Support Library; if not, write to the Free
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA
***********************************************************************/

#ifndef MISC_GZIPPEDFILECHARACTERSOURCE_INCLUDED
#define MISC_GZIPPEDFILECHARACTERSOURCE_INCLUDED

#include <Misc/CharacterSource.h>

namespace Misc {

class GzippedFileCharacterSource:public CharacterSource
	{
	/* Elements: */
	private:
	void* inputFile; // File descriptor of gzipped input file
	
	/* Protected methods from CharacterSource: */
	protected:
	virtual void fillBuffer(void);
	
	/* Constructors and destructors: */
	public:
	GzippedFileCharacterSource(const char* inputFileName,size_t sBufferSize =16384); // Opens the given compressed input file
	virtual ~GzippedFileCharacterSource(void); // Destroys the character source
	};

}

#endif
