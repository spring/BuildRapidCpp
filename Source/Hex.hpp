#pragma once

#include <cstdlib>

namespace BuildRapid {
namespace Hex {

unsigned char const DecodeTable[] = {
	0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xA,
	0xB, 0xC, 0xD, 0xE, 0xF};

char const EncodeTable[] = {
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
	0x61, 0x62, 0x63, 0x64, 0x65, 0x66};

void encode(char * Dest, unsigned char const * Source, std::size_t Length);
void decode(char const * Source, unsigned char * Dest, std::size_t Length);

}
}
