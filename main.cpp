#include <windows.h>
#include <stdio.h>

unsigned char xilinx_cfg[] =
{
	0xee, 0x10, 0x66, 0x06, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x60, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x10, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00,
	0x01, 0x48, 0x03, 0x78, 0x08, 0x00, 0x00, 0x00, 0x05, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x02, 0x00, 0xe2, 0x8f, 0x68, 0x00, 0x10, 0x29, 0x0A, 0x00, 0x12, 0xf4, 0x03, 0x00,
	0x40, 0x00, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x00, 0xc1, 0x10, 0x35, 0x0a, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

//
// 1337 cfg
//
unsigned char leet_cfg[] =
{
	0x02, 0x10, 0x7a, 0x43, 0x03, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
	0x00, 0x20, 0x60, 0xfc, 0x00, 0x00, 0x60, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x79, 0x43,
	0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x68, 0x23, 0xba, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x02, 0x00, 0x22, 0x83, 0x68, 0x00, 0x10, 0x29, 0x00, 0x00, 0x12, 0xf4, 0x03, 0x00,
	0x40, 0x00, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0xc1, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x30, 0x20, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x60, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


#define GET_BITS(data, high, low) ((data >> low) & ((1 << (high - low + 1)) - 1))
#define GET_BIT(data, bit) ((data >> bit) & 1)

void i_have_been_watching_you(unsigned char *cfg)
{
	BYTE *class_code = (BYTE*)(cfg + 0x09);
	DWORD base_address_register = *(DWORD*)(cfg + 0x10);

	BYTE cap_ptr = *(BYTE*)(cfg + 0x34);
	if (cap_ptr == 0)
		return;

	printf("[CFG_VEND_ID] [CFG_DEV_ID]		%04X %04X\n", *(WORD*)(cfg + 0x00), *(WORD*)(cfg + 0x02));
	printf("[CFG_SUBSYS_VEND_ID] [CFG_SUBSYS_ID]	%04X %04X\n", *(WORD*)(cfg + 0x2C), *(WORD*)(cfg + 0x2C + 2));
	printf("[CFG_REV_ID]				%ld\n", *(BYTE*)(cfg + 0x08));
	printf("[BAR0]					%lx\n", base_address_register);
	printf("[CLASS_CODE]				%02X%02X%02X\n", class_code[2],class_code[1],class_code[0]);
	printf("\n[CAPABILITIES_PTR] [PM_BASE_PTR]	0x%x 0x%x\n", cap_ptr, cap_ptr);

	unsigned char *pm_capability = cfg + cap_ptr;
	DWORD pm_capabilities = *(DWORD*)&pm_capability[0];


	printf("\n[PM_CAP_ON]				%d\n", (pm_capability[2] & 1));
	printf("[PM_CAP_NEXTPTR] [MSI_BASE_PTR]		0x%x 0x%x\n", pm_capability[1], pm_capability[1]);
	printf("[PM_CAP_ID]				%d\n", GET_BITS(pm_capabilities, 7, 0));
	printf("[PM_CAP_PME_CLOCK]			%d\n", GET_BIT(pm_capabilities, 19));
	printf("[PM_CAP_DSI]				%d\n", GET_BIT(pm_capabilities, 21));
	printf("[PM_CAP_AUXCURRENT]			%d\n", GET_BITS(pm_capabilities, 24, 22));
	printf("[PM_CAP_D1SUPPORT PM_CAP_D2SUPPORT]	%d %d\n", GET_BIT(pm_capabilities, 25), GET_BIT(pm_capabilities, 26));
	printf("[PM_CAP_PMESUPPORT]			0x0%x\n", GET_BITS(pm_capabilities, 31, 27));

	if (pm_capability[1] == 0)
		return;

	unsigned char *msi_capability = cfg + pm_capability[1];
	DWORD msi_capabilities = *(DWORD*)&msi_capability[0];

	printf("\n[MSI_CAP_ON]				%d\n", (msi_capability[2] & 1));
	printf("[MSI_CAP_NEXTPTR] [PCIE_BASE_PTR]	0x%x 0x%x\n", msi_capability[1], msi_capability[1]);
	printf("[MSI_CAP_ID]				0x0%lx\n", GET_BITS(msi_capabilities, 7, 0));
	printf("[MSI_CAP_MULTIMSGCAP]			%ld\n", GET_BITS(msi_capabilities, 19, 17));
	printf("[MSI_CAP_MULTIMSG_EXTENSION]		%ld\n", GET_BITS(msi_capabilities, 22, 20));
	printf("[MSI_CAP_64_BIT_ADDR_CAPABLE]		%ld\n", GET_BIT(msi_capabilities, 23));
	printf("[MSI_CAP_PER_VECTOR_MASKING_CAPABLE]	%ld\n", GET_BIT(msi_capabilities, 24));

	if (msi_capability[1] == 0)
		return;

	unsigned char *pcie_capability = cfg + msi_capability[1];
	DWORD pcie_capabilities = *(DWORD*)&pcie_capability[0];

	printf("\n[PCIE_CAP_ON]				%d\n", (pcie_capability[2] & 1));
	printf("[PCIE_CAP_NEXTPTR]              	0x%lx\n", pcie_capability[1]);
	printf("[PCIE_CAP_CAPABILITY_ID]              	0x%lx\n", GET_BITS(pcie_capabilities, 7, 0));
	printf("[PCIE_CAP_CAPABILITY_VERSION]		0x%lx\n", GET_BITS(pcie_capabilities, 18, 16));

	unsigned char *dev_capability = pcie_capability + 0x04;
	DWORD dev_capabilities = *(DWORD*)&dev_capability[0];

	printf("\n[DEV_CAP_ENDPOINT_L0S_LATENCY]		%d\n", GET_BITS(dev_capabilities, 8, 6));
	printf("[DEV_CAP_ENDPOINT_L1_LATENCY]		%ld\n", GET_BITS(dev_capabilities, 11, 9));
	printf("[DEV_CAP_EXT_TAG_SUPPORTED]		%ld\n", GET_BIT(dev_capabilities, 5));
	
	unsigned char *link_capability = pcie_capability + 0x0C;
	DWORD link_capabilities = *(DWORD*)&link_capability[0];

	printf("\n[LINK_CAP_ASPM_SUPPORT]			%d\n",  GET_BIT(link_capabilities, 10) | GET_BIT(link_capabilities, 11));
	printf("[LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1]	%ld\n", GET_BITS(link_capabilities, 14, 12));
	printf("[LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1]	%ld\n", GET_BITS(link_capabilities, 17, 15));
	printf("[LINK_CAP_ASPM_OPTIONALITY]		%ld\n", GET_BIT(link_capabilities, 22));
	printf("[LINK_CAP_MAX_LINK_SPEED]		%ld\n", GET_BITS(link_capabilities, 3, 0));
	printf("[LINK_CAP_MAX_LINK_WIDTH]		%ld\n", GET_BITS(link_capabilities, 9, 4));
	printf("[LINK_CAP_CLOCK_POWER_MANAGEMENT]	%ld\n", GET_BITS(link_capabilities, 19, 18));
	
	unsigned char* dsn_capability = cfg + 0x100;
	DWORD dsn_capabilities = *(DWORD*)&dsn_capability[0];

	printf("\n[DSN_CAP_NEXTPTR]			0x%lx%x\n", ((unsigned char*)&dsn_capability[2])[1], ((unsigned char*)&dsn_capability[2])[0] >> 4);
	printf("[DSN_CAP_ON]				%ld\n", dsn_capability[0] & 1);
	printf("[DSN_CAP_ID]				0x0%lx\n", dsn_capability[0]);
}


BOOL detected_again(unsigned char *cfg)
{
	unsigned char *a0 = cfg + *(BYTE*)(cfg + 0x34);
	if (a0[1] == 0)
		return 0;


	a0 = cfg + a0[1];
	if (a0[1] == 0)
		return 0;
	DWORD a1 = *(DWORD*)(cfg + a0[1] + 0x0C);


	return (GET_BITS(a1, 14, 12) + GET_BITS(a1, 17, 15) + (GET_BIT(a1, 10) | GET_BIT(a1, 11))) == 15;
}

#define YOU_HAVE_BEEN if

int main(void)
{
	i_have_been_watching_you(xilinx_cfg);

	
	printf("\n-------------------------------------------------------------\n");
	printf("Press any key to continue . . .\n");
	getchar();

	i_have_been_watching_you(leet_cfg);

	YOU_HAVE_BEEN(detected_again(leet_cfg))
	{
		printf("\n[!] tossa\n");
	}

	printf("\n-------------------------------------------------------------\n");
	printf("Press any key to continue . . .\n");

	return getchar();
}
