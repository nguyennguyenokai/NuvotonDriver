#if defined __SDCC__
extern uint8_t Read_SPROM_BYTE(const uint8_t __code *u8_addr);
void Write_SPROM_DATAFLASH_ARRAY(uint8_t u8_addr, uint8_t *pDat, uint16_t num);
void Read_SPROM_DATAFLASH_ARRAY(uint16_t u16_addr, uint8_t *pDat, uint16_t num);
#endif

