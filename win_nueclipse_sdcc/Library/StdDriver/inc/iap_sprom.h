
#if defined __SDCC__
extern uint8_t __xdata IAPSPDataBuf[127];
#endif

void Erase_SPROM(void);
void Erase_Verify_SPROM(uint16_t u16IAPDataSize);
void Program_SPROM(uint16_t u16IAPDataSize);
void Read_Verify_SPROM( uint16_t u16IAPDataSize);
