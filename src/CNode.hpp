/* =========================================

		FCNPC - Fully Controllable NPC
			----------------------

	- File: CNode.hpp
	- Author(s): OrMisicL

  =========================================*/

#ifndef CNODE_H
#define CNODE_H

// Header
struct CNodeHeader
{
	DWORD dwNodesNumber;        // 0x0000 - 0x0004
	DWORD dwVehicleNodesNumber; // 0x0004 - 0x0008
	DWORD dwPedNodesNumber;     // 0x0008 - 0x000C
	DWORD dwNaviNodesNumber;    // 0x000C - 0x0010
	DWORD dwLinksNumber;        // 0x0010 - 0x0014
	// Size = 0x14
};

// Path Node
struct CPathNode
{
	DWORD dwMemAddress; // 0x0000 - 0x0004
	DWORD dwUnknown1;   // 0x0004 - 0x0008
	WORD wPositionX;    // 0x0008 - 0x000A
	WORD wPositionY;    // 0x000A - 0x000C
	WORD wPositionZ;    // 0x000C - 0x000E
	WORD wUnknown2;     // 0x000E - 0x0010
	WORD wLinkId;       // 0x0010 - 0x0012
	WORD wAreaId;       // 0x0012 - 0x0014
	WORD wNodeId;       // 0x0014 - 0x0016
	BYTE bytePathWidth; // 0x0016 - 0x0017
	BYTE byteNodeType;  // 0x0017 - 0x0018
	DWORD dwFlags;      // 0x0018 - 0x001C
	// Size = 0x1C
};

// Navi Node
struct CNaviNode
{
	WORD wPositionX;     // 0x0000 - 0x0002
	WORD wPositionY;     // 0x0002 - 0x0004
	WORD wAreaId;        // 0x0004 - 0x0006
	WORD wNodeId;        // 0x0006 - 0x0008
	BYTE byteDirectionX; // 0x0008 - 0x0009
	BYTE byteDirectionY; // 0x0009 - 0x000A
	DWORD dwFlags;       // 0x000A - 0x000E
	// Size = 0x0E
};

// Link Node
struct CLinkNode
{
	WORD wAreaId; // 0x0000 - 0x0002
	WORD wNodeId; // 0x0002 - 0x0004
	// Size = 0x4
};

#endif