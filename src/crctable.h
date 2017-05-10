#ifndef _CRCTABLE_H
#define _CRCTABLE_H

const unsigned long int crc_tbl[256] =
{
    0x00000000, 0x77073096, 0xEE0E612C, 0x990951BA, 0x076DC419, 0x706AF48F, 0xE963A535, 0x9E6495A3,
    0x0EDB8832, 0x79DCB8A4, 0xE0D5E91E, 0x97D2D988, 0x09B64C2B, 0x7EB17CBD, 0xE7B82D07, 0x90BF1D91,
    0x1DB71064, 0x6AB020F2, 0xF3B97148, 0x84BE41DE, 0x1ADAD47D, 0x6DDDE4EB, 0xF4D4B551, 0x83D385C7,
    0x136C9856, 0x646BA8C0, 0xFD62F97A, 0x8A65C9EC, 0x14015C4F, 0x63066CD9, 0xFA0F3D63, 0x8D080DF5,
    0x3B6E20C8, 0x4C69105E, 0xD56041E4, 0xA2677172, 0x3C03E4D1, 0x4B04D447, 0xD20D85FD, 0xA50AB56B,
    0x35B5A8FA, 0x42B2986C, 0xDBBBC9D6, 0xACBCF940, 0x32D86CE3, 0x45DF5C75, 0xDCD60DCF, 0xABD13D59,
    0x26D930AC, 0x51DE003A, 0xC8D75180, 0xBFD06116, 0x21B4F4B5, 0x56B3C423, 0xCFBA9599, 0xB8BDA50F,
    0x2802B89E, 0x5F058808, 0xC60CD9B2, 0xB10BE924, 0x2F6F7C87, 0x58684C11, 0xC1611DAB, 0xB6662D3D,
    0x76DC4190, 0x01DB7106, 0x98D220BC, 0xEFD5102A, 0x71B18589, 0x06B6B51F, 0x9FBFE4A5, 0xE8B8D433,
    0x7807C9A2, 0x0F00F934, 0x9609A88E, 0xE10E9818, 0x7F6A0DBB, 0x086D3D2D, 0x91646C97, 0xE6635C01,
    0x6B6B51F4, 0x1C6C6162, 0x856530D8, 0xF262004E, 0x6C0695ED, 0x1B01A57B, 0x8208F4C1, 0xF50FC457,
    0x65B0D9C6, 0x12B7E950, 0x8BBEB8EA, 0xFCB9887C, 0x62DD1DDF, 0x15DA2D49, 0x8CD37CF3, 0xFBD44C65,
    0x4DB26158, 0x3AB551CE, 0xA3BC0074, 0xD4BB30E2, 0x4ADFA541, 0x3DD895D7, 0xA4D1C46D, 0xD3D6F4FB,
    0x4369E96A, 0x346ED9FC, 0xAD678846, 0xDA60B8D0, 0x44042D73, 0x33031DE5, 0xAA0A4C5F, 0xDD0D7CC9,
    0x5005713C, 0x270241AA, 0xBE0B1010, 0xC90C2086, 0x5768B525, 0x206F85B3, 0xB966D409, 0xCE61E49F,
    0x5EDEF90E, 0x29D9C998, 0xB0D09822, 0xC7D7A8B4, 0x59B33D17, 0x2EB40D81, 0xB7BD5C3B, 0xC0BA6CAD,
    0xEDB88320, 0x9ABFB3B6, 0x03B6E20C, 0x74B1D29A, 0xEAD54739, 0x9DD277AF, 0x04DB2615, 0x73DC1683,
    0xE3630B12, 0x94643B84, 0x0D6D6A3E, 0x7A6A5AA8, 0xE40ECF0B, 0x9309FF9D, 0x0A00AE27, 0x7D079EB1,
    0xF00F9344, 0x8708A3D2, 0x1E01F268, 0x6906C2FE, 0xF762575D, 0x806567CB, 0x196C3671, 0x6E6B06E7,
    0xFED41B76, 0x89D32BE0, 0x10DA7A5A, 0x67DD4ACC, 0xF9B9DF6F, 0x8EBEEFF9, 0x17B7BE43, 0x60B08ED5,
    0xD6D6A3E8, 0xA1D1937E, 0x38D8C2C4, 0x4FDFF252, 0xD1BB67F1, 0xA6BC5767, 0x3FB506DD, 0x48B2364B,
    0xD80D2BDA, 0xAF0A1B4C, 0x36034AF6, 0x41047A60, 0xDF60EFC3, 0xA867DF55, 0x316E8EEF, 0x4669BE79,
    0xCB61B38C, 0xBC66831A, 0x256FD2A0, 0x5268E236, 0xCC0C7795, 0xBB0B4703, 0x220216B9, 0x5505262F,
    0xC5BA3BBE, 0xB2BD0B28, 0x2BB45A92, 0x5CB36A04, 0xC2D7FFA7, 0xB5D0CF31, 0x2CD99E8B, 0x5BDEAE1D,
    0x9B64C2B0, 0xEC63F226, 0x756AA39C, 0x026D930A, 0x9C0906A9, 0xEB0E363F, 0x72076785, 0x05005713,
    0x95BF4A82, 0xE2B87A14, 0x7BB12BAE, 0x0CB61B38, 0x92D28E9B, 0xE5D5BE0D, 0x7CDCEFB7, 0x0BDBDF21,
    0x86D3D2D4, 0xF1D4E242, 0x68DDB3F8, 0x1FDA836E, 0x81BE16CD, 0xF6B9265B, 0x6FB077E1, 0x18B74777,
    0x88085AE6, 0xFF0F6A70, 0x66063BCA, 0x11010B5C, 0x8F659EFF, 0xF862AE69, 0x616BFFD3, 0x166CCF45,
    0xA00AE278, 0xD70DD2EE, 0x4E048354, 0x3903B3C2, 0xA7672661, 0xD06016F7, 0x4969474D, 0x3E6E77DB,
    0xAED16A4A, 0xD9D65ADC, 0x40DF0B66, 0x37D83BF0, 0xA9BCAE53, 0xDEBB9EC5, 0x47B2CF7F, 0x30B5FFE9,
    0xBDBDF21C, 0xCABAC28A, 0x53B39330, 0x24B4A3A6, 0xBAD03605, 0xCDD70693, 0x54DE5729, 0x23D967BF,
    0xB3667A2E, 0xC4614AB8, 0x5D681B02, 0x2A6F2B94, 0xB40BBE37, 0xC30C8EA1, 0x5A05DF1B, 0x2D02EF8D
};

const unsigned char crc_chop_tbl[256][4] =
{
    { 0x26,0x70,0x6A,0x0F }, { 0x67,0x76,0x1B,0xD4 }, { 0xE5,0x7A,0xF9,0x62 }, { 0xA4,0x7C,0x88,0xB9 },
    { 0xA0,0x65,0x4C,0xD4 }, { 0xE1,0x63,0x3D,0x0F }, { 0x63,0x6F,0xDF,0xB9 }, { 0x22,0x69,0xAE,0x62 },
    { 0x6B,0x5D,0x57,0x62 }, { 0x2A,0x5B,0x26,0xB9 }, { 0xA8,0x57,0xC4,0x0F }, { 0xE9,0x51,0xB5,0xD4 },
    { 0xED,0x48,0x71,0xB9 }, { 0xAC,0x4E,0x00,0x62 }, { 0x2E,0x42,0xE2,0xD4 }, { 0x6F,0x44,0x93,0x0F },
    { 0xBC,0x2A,0x10,0xD5 }, { 0xFD,0x2C,0x61,0x0E }, { 0x7F,0x20,0x83,0xB8 }, { 0x3E,0x26,0xF2,0x63 },
    { 0x3A,0x3F,0x36,0x0E }, { 0x7B,0x39,0x47,0xD5 }, { 0xF9,0x35,0xA5,0x63 }, { 0xB8,0x33,0xD4,0xB8 },
    { 0xF1,0x07,0x2D,0xB8 }, { 0xB0,0x01,0x5C,0x63 }, { 0x32,0x0D,0xBE,0xD5 }, { 0x73,0x0B,0xCF,0x0E },
    { 0x77,0x12,0x0B,0x63 }, { 0x36,0x14,0x7A,0xB8 }, { 0xB4,0x18,0x98,0x0E }, { 0xF5,0x1E,0xE9,0xD5 },
    { 0x53,0xC3,0xEF,0x60 }, { 0x12,0xC5,0x9E,0xBB }, { 0x90,0xC9,0x7C,0x0D }, { 0xD1,0xCF,0x0D,0xD6 },
    { 0xD5,0xD6,0xC9,0xBB }, { 0x94,0xD0,0xB8,0x60 }, { 0x16,0xDC,0x5A,0xD6 }, { 0x57,0xDA,0x2B,0x0D },
    { 0x1E,0xEE,0xD2,0x0D }, { 0x5F,0xE8,0xA3,0xD6 }, { 0xDD,0xE4,0x41,0x60 }, { 0x9C,0xE2,0x30,0xBB },
    { 0x98,0xFB,0xF4,0xD6 }, { 0xD9,0xFD,0x85,0x0D }, { 0x5B,0xF1,0x67,0xBB }, { 0x1A,0xF7,0x16,0x60 },
    { 0xC9,0x99,0x95,0xBA }, { 0x88,0x9F,0xE4,0x61 }, { 0x0A,0x93,0x06,0xD7 }, { 0x4B,0x95,0x77,0x0C },
    { 0x4F,0x8C,0xB3,0x61 }, { 0x0E,0x8A,0xC2,0xBA }, { 0x8C,0x86,0x20,0x0C }, { 0xCD,0x80,0x51,0xD7 },
    { 0x84,0xB4,0xA8,0xD7 }, { 0xC5,0xB2,0xD9,0x0C }, { 0x47,0xBE,0x3B,0xBA }, { 0x06,0xB8,0x4A,0x61 },
    { 0x02,0xA1,0x8E,0x0C }, { 0x43,0xA7,0xFF,0xD7 }, { 0xC1,0xAB,0x1D,0x61 }, { 0x80,0xAD,0x6C,0xBA },
    { 0xCC,0x16,0x61,0xD0 }, { 0x8D,0x10,0x10,0x0B }, { 0x0F,0x1C,0xF2,0xBD }, { 0x4E,0x1A,0x83,0x66 },
    { 0x4A,0x03,0x47,0x0B }, { 0x0B,0x05,0x36,0xD0 }, { 0x89,0x09,0xD4,0x66 }, { 0xC8,0x0F,0xA5,0xBD },
    { 0x81,0x3B,0x5C,0xBD }, { 0xC0,0x3D,0x2D,0x66 }, { 0x42,0x31,0xCF,0xD0 }, { 0x03,0x37,0xBE,0x0B },
    { 0x07,0x2E,0x7A,0x66 }, { 0x46,0x28,0x0B,0xBD }, { 0xC4,0x24,0xE9,0x0B }, { 0x85,0x22,0x98,0xD0 },
    { 0x56,0x4C,0x1B,0x0A }, { 0x17,0x4A,0x6A,0xD1 }, { 0x95,0x46,0x88,0x67 }, { 0xD4,0x40,0xF9,0xBC },
    { 0xD0,0x59,0x3D,0xD1 }, { 0x91,0x5F,0x4C,0x0A }, { 0x13,0x53,0xAE,0xBC }, { 0x52,0x55,0xDF,0x67 },
    { 0x1B,0x61,0x26,0x67 }, { 0x5A,0x67,0x57,0xBC }, { 0xD8,0x6B,0xB5,0x0A }, { 0x99,0x6D,0xC4,0xD1 },
    { 0x9D,0x74,0x00,0xBC }, { 0xDC,0x72,0x71,0x67 }, { 0x5E,0x7E,0x93,0xD1 }, { 0x1F,0x78,0xE2,0x0A },
    { 0xB9,0xA5,0xE4,0xBF }, { 0xF8,0xA3,0x95,0x64 }, { 0x7A,0xAF,0x77,0xD2 }, { 0x3B,0xA9,0x06,0x09 },
    { 0x3F,0xB0,0xC2,0x64 }, { 0x7E,0xB6,0xB3,0xBF }, { 0xFC,0xBA,0x51,0x09 }, { 0xBD,0xBC,0x20,0xD2 },
    { 0xF4,0x88,0xD9,0xD2 }, { 0xB5,0x8E,0xA8,0x09 }, { 0x37,0x82,0x4A,0xBF }, { 0x76,0x84,0x3B,0x64 },
    { 0x72,0x9D,0xFF,0x09 }, { 0x33,0x9B,0x8E,0xD2 }, { 0xB1,0x97,0x6C,0x64 }, { 0xF0,0x91,0x1D,0xBF },
    { 0x23,0xFF,0x9E,0x65 }, { 0x62,0xF9,0xEF,0xBE }, { 0xE0,0xF5,0x0D,0x08 }, { 0xA1,0xF3,0x7C,0xD3 },
    { 0xA5,0xEA,0xB8,0xBE }, { 0xE4,0xEC,0xC9,0x65 }, { 0x66,0xE0,0x2B,0xD3 }, { 0x27,0xE6,0x5A,0x08 },
    { 0x6E,0xD2,0xA3,0x08 }, { 0x2F,0xD4,0xD2,0xD3 }, { 0xAD,0xD8,0x30,0x65 }, { 0xEC,0xDE,0x41,0xBE },
    { 0xE8,0xC7,0x85,0xD3 }, { 0xA9,0xC1,0xF4,0x08 }, { 0x2B,0xCD,0x16,0xBE }, { 0x6A,0xCB,0x67,0x65 },
    { 0xB3,0xBB,0x0D,0x6A }, { 0xF2,0xBD,0x7C,0xB1 }, { 0x70,0xB1,0x9E,0x07 }, { 0x31,0xB7,0xEF,0xDC },
    { 0x35,0xAE,0x2B,0xB1 }, { 0x74,0xA8,0x5A,0x6A }, { 0xF6,0xA4,0xB8,0xDC }, { 0xB7,0xA2,0xC9,0x07 },
    { 0xFE,0x96,0x30,0x07 }, { 0xBF,0x90,0x41,0xDC }, { 0x3D,0x9C,0xA3,0x6A }, { 0x7C,0x9A,0xD2,0xB1 },
    { 0x78,0x83,0x16,0xDC }, { 0x39,0x85,0x67,0x07 }, { 0xBB,0x89,0x85,0xB1 }, { 0xFA,0x8F,0xF4,0x6A },
    { 0x29,0xE1,0x77,0xB0 }, { 0x68,0xE7,0x06,0x6B }, { 0xEA,0xEB,0xE4,0xDD }, { 0xAB,0xED,0x95,0x06 },
    { 0xAF,0xF4,0x51,0x6B }, { 0xEE,0xF2,0x20,0xB0 }, { 0x6C,0xFE,0xC2,0x06 }, { 0x2D,0xF8,0xB3,0xDD },
    { 0x64,0xCC,0x4A,0xDD }, { 0x25,0xCA,0x3B,0x06 }, { 0xA7,0xC6,0xD9,0xB0 }, { 0xE6,0xC0,0xA8,0x6B },
    { 0xE2,0xD9,0x6C,0x06 }, { 0xA3,0xDF,0x1D,0xDD }, { 0x21,0xD3,0xFF,0x6B }, { 0x60,0xD5,0x8E,0xB0 },
    { 0xC6,0x08,0x88,0x05 }, { 0x87,0x0E,0xF9,0xDE }, { 0x05,0x02,0x1B,0x68 }, { 0x44,0x04,0x6A,0xB3 },
    { 0x40,0x1D,0xAE,0xDE }, { 0x01,0x1B,0xDF,0x05 }, { 0x83,0x17,0x3D,0xB3 }, { 0xC2,0x11,0x4C,0x68 },
    { 0x8B,0x25,0xB5,0x68 }, { 0xCA,0x23,0xC4,0xB3 }, { 0x48,0x2F,0x26,0x05 }, { 0x09,0x29,0x57,0xDE },
    { 0x0D,0x30,0x93,0xB3 }, { 0x4C,0x36,0xE2,0x68 }, { 0xCE,0x3A,0x00,0xDE }, { 0x8F,0x3C,0x71,0x05 },
    { 0x5C,0x52,0xF2,0xDF }, { 0x1D,0x54,0x83,0x04 }, { 0x9F,0x58,0x61,0xB2 }, { 0xDE,0x5E,0x10,0x69 },
    { 0xDA,0x47,0xD4,0x04 }, { 0x9B,0x41,0xA5,0xDF }, { 0x19,0x4D,0x47,0x69 }, { 0x58,0x4B,0x36,0xB2 },
    { 0x11,0x7F,0xCF,0xB2 }, { 0x50,0x79,0xBE,0x69 }, { 0xD2,0x75,0x5C,0xDF }, { 0x93,0x73,0x2D,0x04 },
    { 0x97,0x6A,0xE9,0x69 }, { 0xD6,0x6C,0x98,0xB2 }, { 0x54,0x60,0x7A,0x04 }, { 0x15,0x66,0x0B,0xDF },
    { 0x59,0xDD,0x06,0xB5 }, { 0x18,0xDB,0x77,0x6E }, { 0x9A,0xD7,0x95,0xD8 }, { 0xDB,0xD1,0xE4,0x03 },
    { 0xDF,0xC8,0x20,0x6E }, { 0x9E,0xCE,0x51,0xB5 }, { 0x1C,0xC2,0xB3,0x03 }, { 0x5D,0xC4,0xC2,0xD8 },
    { 0x14,0xF0,0x3B,0xD8 }, { 0x55,0xF6,0x4A,0x03 }, { 0xD7,0xFA,0xA8,0xB5 }, { 0x96,0xFC,0xD9,0x6E },
    { 0x92,0xE5,0x1D,0x03 }, { 0xD3,0xE3,0x6C,0xD8 }, { 0x51,0xEF,0x8E,0x6E }, { 0x10,0xE9,0xFF,0xB5 },
    { 0xC3,0x87,0x7C,0x6F }, { 0x82,0x81,0x0D,0xB4 }, { 0x00,0x8D,0xEF,0x02 }, { 0x41,0x8B,0x9E,0xD9 },
    { 0x45,0x92,0x5A,0xB4 }, { 0x04,0x94,0x2B,0x6F }, { 0x86,0x98,0xC9,0xD9 }, { 0xC7,0x9E,0xB8,0x02 },
    { 0x8E,0xAA,0x41,0x02 }, { 0xCF,0xAC,0x30,0xD9 }, { 0x4D,0xA0,0xD2,0x6F }, { 0x0C,0xA6,0xA3,0xB4 },
    { 0x08,0xBF,0x67,0xD9 }, { 0x49,0xB9,0x16,0x02 }, { 0xCB,0xB5,0xF4,0xB4 }, { 0x8A,0xB3,0x85,0x6F },
    { 0x2C,0x6E,0x83,0xDA }, { 0x6D,0x68,0xF2,0x01 }, { 0xEF,0x64,0x10,0xB7 }, { 0xAE,0x62,0x61,0x6C },
    { 0xAA,0x7B,0xA5,0x01 }, { 0xEB,0x7D,0xD4,0xDA }, { 0x69,0x71,0x36,0x6C }, { 0x28,0x77,0x47,0xB7 },
    { 0x61,0x43,0xBE,0xB7 }, { 0x20,0x45,0xCF,0x6C }, { 0xA2,0x49,0x2D,0xDA }, { 0xE3,0x4F,0x5C,0x01 },
    { 0xE7,0x56,0x98,0x6C }, { 0xA6,0x50,0xE9,0xB7 }, { 0x24,0x5C,0x0B,0x01 }, { 0x65,0x5A,0x7A,0xDA },
    { 0xB6,0x34,0xF9,0x00 }, { 0xF7,0x32,0x88,0xDB }, { 0x75,0x3E,0x6A,0x6D }, { 0x34,0x38,0x1B,0xB6 },
    { 0x30,0x21,0xDF,0xDB }, { 0x71,0x27,0xAE,0x00 }, { 0xF3,0x2B,0x4C,0xB6 }, { 0xB2,0x2D,0x3D,0x6D },
    { 0xFB,0x19,0xC4,0x6D }, { 0xBA,0x1F,0xB5,0xB6 }, { 0x38,0x13,0x57,0x00 }, { 0x79,0x15,0x26,0xDB },
    { 0x7D,0x0C,0xE2,0xB6 }, { 0x3C,0x0A,0x93,0x6D }, { 0xBE,0x06,0x71,0xDB }, { 0xFF,0x00,0x00,0x00 }
};

#endif /* crctable.h */
