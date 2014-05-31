#define HTONS(x) (uint16_t)((x << 8) | (x >> 8))

struct bootstrap_node {
    char *address;
    uint16_t port;
    uint8_t key[32];
} bootstrap_nodes[] = {
    {
        "192.254.75.98",
        HTONS(33445),
        {
            0x95, 0x1C, 0x88, 0xB7, 0xE7, 0x5C, 0x86, 0x74, 0x18, 0xAC, 0xDB, 0x5D, 0x27, 0x38, 0x21, 0x37,
            0x2B, 0xB5, 0xBD, 0x65, 0x27, 0x40, 0xBC, 0xDF, 0x62, 0x3A, 0x4F, 0xA2, 0x93, 0xE7, 0x5D, 0x2F
        }
    },

    {
        "37.187.46.132",
        HTONS(33445),
        {
            0xA9, 0xD9, 0x82, 0x12, 0xB3, 0xF9, 0x72, 0xBD, 0x11, 0xDA, 0x52, 0xBE, 0xB0, 0x65, 0x8C, 0x32,
            0x6F, 0xCC, 0xC1, 0xBF, 0xD4, 0x9F, 0x34, 0x7F, 0x9C, 0x2D, 0x3D, 0x8B, 0x61, 0xE1, 0xB9, 0x27
        }
    },

    {
        "144.76.60.215",
        HTONS(33445),
        {
            0x04, 0x11, 0x9E, 0x83, 0x5D, 0xF3, 0xE7, 0x8B, 0xAC, 0xF0, 0xF8, 0x42, 0x35, 0xB3, 0x00, 0x54,
            0x6A, 0xF8, 0xB9, 0x36, 0xF0, 0x35, 0x18, 0x5E, 0x2A, 0x8E, 0x9E, 0x0A, 0x67, 0xC8, 0x92, 0x4F
        }
    },
    
    {
        "23.226.230.47",
        HTONS(33445),
        {
            0xA0, 0x91, 0x62, 0xD6, 0x86, 0x18, 0xE7, 0x42, 0xFF, 0xBC, 0xA1, 0xC2, 0xC7, 0x03, 0x85, 0xE6, 
            0x67, 0x96, 0x04, 0xB2, 0xD8, 0x0E, 0xA6, 0xE8, 0x4A, 0xD0, 0x99, 0x6A, 0x1A, 0xC8, 0xA0, 0x74
        }
    },
    
    {
        "54.199.139.199",
        HTONS(33445),
        {
            0x7F, 0x9C, 0x31, 0xFE, 0x85, 0x0E, 0x97, 0xCE, 0xFD, 0x4C, 0x45, 0x91, 0xDF, 0x93, 0xFC, 0x75, 
            0x7C, 0x7C, 0x12, 0x54, 0x9D, 0xDD, 0x55, 0xF8, 0xEE, 0xAE, 0xCC, 0x34, 0xFE, 0x76, 0xC0, 0x29
        }
    },
    
    {
        "109.169.46.133",
        HTONS(33445),
        {
            0x7F, 0x31, 0xBF, 0xC9, 0x3B, 0x8E, 0x40, 0x16, 0xA9, 0x02, 0x14, 0x4D, 0x0B, 0x11, 0x0C, 0x3E, 
            0xA9, 0x7C, 0xB7, 0xD4, 0x3F, 0x1C, 0x4D, 0x21, 0xBC, 0xAE, 0x99, 0x8A, 0x7C, 0x83, 0x88, 0x21
        }
    },
    
    {
        "192.210.149.121",
        HTONS(33445),
        {
            0xF4, 0x04, 0xAB, 0xAA, 0x1C, 0x99, 0xA9, 0xD3, 0x7D, 0x61, 0xAB, 0x54, 0x89, 0x8F, 0x56, 0x79, 
            0x3E, 0x1D, 0xEF, 0x8B, 0xD4, 0x6B, 0x10, 0x38, 0xB9, 0xD8, 0x22, 0xE8, 0x46, 0x0F, 0xAB, 0x67
        }
    },
};

#undef HTONS
