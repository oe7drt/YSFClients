/*
*   Copyright (C) 2016 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(YSFPayload_H)
#define	YSFPayload_H

#include <string>

class CYSFPayload {
public:
	CYSFPayload();
	~CYSFPayload();

	bool readHeaderData(const unsigned char* data, unsigned char* dt);
	void writeHeaderData(const unsigned char* dt, unsigned char* data);

	bool readVDMode1Data(const unsigned char* data, unsigned char* dt);
	void writeVDMode1Data(const unsigned char* dt, unsigned char* data);

	bool readVDMode2Data(const unsigned char* data, unsigned char* dt);
	void writeVDMode2Data(const unsigned char* dt, unsigned char* data);

	bool readVoiceFRModeData(const unsigned char* data, unsigned char* dt);
	void writeVoiceFRModeData(const unsigned char* dt, unsigned char* data);

	bool readDataFRModeData1(const unsigned char* data, unsigned char* dt);
	void writeDataFRModeData1(const unsigned char* dt, unsigned char* data);

	bool readDataFRModeData2(const unsigned char* data, unsigned char* dt);
	void writeDataFRModeData2(const unsigned char* dt, unsigned char* data);

private:
};

#endif
