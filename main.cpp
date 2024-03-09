#include <windows.h>
#include <stdio.h>

//
// original config of wireless adapter
//
unsigned char wireless_adapter_cfg[] =
{
	0x8c, 0x16, 0x2e, 0x00, 0x06, 0x01, 0x10, 0x00, 0x01, 0x00, 0x80, 0x02, 0x08, 0x00, 0x00, 0x00,
	0x04, 0x00, 0x80, 0xf7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x16, 0xa4, 0x30,
	0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00,
	0x01, 0x50, 0xc3, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x05, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x12, 0x00, 0xc0, 0x8c, 0x90, 0x05, 0x00, 0x20, 0x00, 0x00, 0x11, 0x3c, 0x03, 0x00,
	0x40, 0x00, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


//
// our own config
//
unsigned char wireless_adapter_spoof_cfg[] =
{
	0x8c, 0x16, 0x2e, 0x00, 0x06, 0x01, 0x10, 0x00, 0x01, 0x00, 0x80, 0x02, 0x08, 0x00, 0x00, 0x00,
	0x04, 0x00, 0x80, 0xf7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x16, 0xa4, 0x30,
	0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00,
	0x01, 0x50, 0xc3, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x05, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x02, 0x00, 0xc0, 0x8c, 0x90, 0x05, 0x00, 0x20, 0x00, 0x00, 0x11, 0x3c, 0x03, 0x00,
	0x40, 0x00, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

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

#define GET_BITS(data, high, low) ((data >> low) & ((1 << (high - low + 1)) - 1))
#define GET_BIT(data, bit) ((data >> bit) & 1)

namespace pci
{
	inline WORD vendor_id(PVOID cfg)   { return *(WORD*)((PBYTE)cfg + 0x00); }
	inline WORD device_id(PVOID cfg)   { return *(WORD*)((PBYTE)cfg + 0x00); }
	inline BYTE revision_id(PVOID cfg) { return *(BYTE*)((PBYTE)cfg + 0x08); }
	inline DWORD* bar(PVOID cfg)       { return (DWORD*)((PBYTE)cfg + 0x10); }

	//
	// printf("%06X\n", classcode);
	//
	inline DWORD class_code(PVOID cfg)
	{
		BYTE *cc = (BYTE*)((PBYTE)cfg + 0x09);

		DWORD dw = 0;
		((unsigned char*)&dw)[0] = cc[0];
		((unsigned char*)&dw)[1] = cc[1];
		((unsigned char*)&dw)[2] = cc[2];

		return dw;
	}

	inline WORD subsys_vendor_id(PVOID cfg) { return *(WORD*)((PBYTE)cfg + 0x2C); }
	inline WORD subsys_id(PVOID cfg) { return *(WORD*)((PBYTE)cfg + 0x2C + 0x02); }
	inline BYTE capabilities_ptr(PVOID cfg) { return *(BYTE*)((PBYTE)cfg + 0x34); }
	inline BYTE interrupt_line(PVOID cfg) { return *(BYTE*)((PBYTE)cfg + 0x3C); }
	inline BYTE interrupt_pin(PVOID cfg) { return *(BYTE*)((PBYTE)cfg + 0x3C+1); }

	namespace pm
	{
		namespace cap
		{
		inline BYTE pm_cap_on(PVOID pm) { return ((DWORD*)pm)[0] != 0; }
		inline BYTE pm_cap_next(PVOID pm) { return ((unsigned char*)(pm))[1]; }
		inline BYTE pm_cap_id(PVOID pm) { return GET_BITS(((DWORD*)pm)[0], 7, 0); }
		inline BYTE pm_cap_version(PVOID pm) { return GET_BITS(((DWORD*)pm)[0], 18, 16); }
		inline BYTE pm_cap_pme_clock(PVOID pm) { return GET_BIT(((DWORD*)pm)[0], 19); }
		inline BYTE pm_cap_rsvd_04(PVOID pm) { return GET_BIT(((DWORD*)pm)[0], 20); }
		inline BYTE pm_cap_dsi(PVOID pm) { return GET_BIT(((DWORD*)pm)[0], 21); }
		inline BYTE pm_cap_auxcurrent(PVOID pm) { return GET_BITS(((DWORD*)pm)[0], 24, 22); }
		inline BYTE pm_cap_d1support(PVOID pm) { return GET_BIT(((DWORD*)pm)[0], 25); }
		inline BYTE pm_cap_d2support(PVOID pm) { return GET_BIT(((DWORD*)pm)[0], 26); }
		inline BYTE pm_cap_pmesupport(PVOID pm) { return GET_BITS(((DWORD*)pm)[0], 31, 27); }
		}

		namespace csr
		{
		inline BYTE pm_csr_power_state(PVOID pm) { return GET_BITS(((DWORD*)pm)[1], 1, 0); }
		inline BYTE pm_csr_nosoftrst(PVOID pm) { return GET_BITS(((DWORD*)pm)[1], 3, 2)!=0; }
		inline BYTE pm_csr_dynamic_data(PVOID pm) { return GET_BIT(((DWORD*)pm)[1], 4); }
		inline BYTE pm_csr_reserved(PVOID pm) { return GET_BITS(((DWORD*)pm)[1], 7, 5); }
		inline BYTE pm_csr_pme_enabled(PVOID pm) { return GET_BIT(((DWORD*)pm)[1], 8); }
		inline BYTE pm_csr_data_select(PVOID pm) { return GET_BITS(((DWORD*)pm)[1], 12, 9); }
		inline BYTE pm_csr_data_scale(PVOID pm) { return GET_BITS(((DWORD*)pm)[1], 14, 13); }
		inline BYTE pm_csr_pme_status(PVOID pm) { return GET_BIT(((DWORD*)pm)[1], 15); }
		}
	}

	namespace msi
	{
		namespace cap
		{
		inline BYTE msi_cap_on(PVOID msi) { return ((DWORD*)msi)[0] != 0; }
		inline BYTE msi_cap_nextptr(PVOID msi) { return ((unsigned char*)(msi))[1]; }
		inline BYTE msi_cap_id(PVOID msi) { return GET_BITS(((DWORD*)msi)[0], 7, 0); }
		inline BYTE msi_cap_multimsgcap(PVOID msi) { return GET_BITS(((DWORD*)msi)[0], 19, 17); }
		inline BYTE msi_cap_multimsg_extension(PVOID msi) { return GET_BITS(((DWORD*)msi)[0], 22, 20); }
		inline BYTE msi_cap_64_bit_addr_capable(PVOID msi) { return GET_BIT(((DWORD*)msi)[0], 23); }
		inline BYTE msi_cap_per_vector_masking_capable(PVOID msi) { return GET_BIT(((DWORD*)msi)[0], 24); }
		}
	}

	namespace pcie
	{
		namespace cap
		{
		inline BYTE pcie_cap_on(PVOID pcie) { return ((DWORD*)pcie)[0] != 0; }
		inline BYTE pcie_cap_nextptr(PVOID pcie) { return ((unsigned char*)(pcie))[1]; }
		inline BYTE pcie_cap_capability_id(PVOID pcie) { return GET_BITS(((DWORD*)pcie)[0], 7, 0); }
		inline BYTE pcie_cap_capability_version(PVOID pcie) { return GET_BITS(((DWORD*)pcie)[0], 18, 16); }
		}
	}

	namespace dev
	{
		namespace cap
		{
		inline BYTE dev_cap_max_payload_supported(PVOID dev) { return GET_BITS(((DWORD*)dev)[0], 2, 0); }
		inline BYTE dev_cap_phantom_functions_support(PVOID dev) { return GET_BITS(((DWORD*)dev)[0], 4, 3); }
		inline BYTE dev_cap_ext_tag_supported(PVOID dev) { return GET_BIT(((DWORD*)dev)[0], 5); }
		inline BYTE dev_cap_endpoint_l0s_latency(PVOID dev) { return GET_BITS(((DWORD*)dev)[0], 8, 6); }
		inline BYTE dev_cap_endpoint_l1_latency(PVOID dev) { return GET_BITS(((DWORD*)dev)[0], 11, 9); }
		inline BYTE dev_cap_role_based_error(PVOID dev) { return GET_BIT(((DWORD*)dev)[0], 15); }
		inline BYTE dev_cap_enable_slot_pwr_limit_value(PVOID dev) { return GET_BITS(((DWORD*)dev)[0], 25, 18); }
		inline BYTE dev_cap_enable_slot_pwr_limit_scale(PVOID dev) { return GET_BITS(((DWORD*)dev)[0], 27, 26); }
		inline BYTE dev_cap_function_level_reset_capable(PVOID dev) { return GET_BIT(((DWORD*)dev)[0], 28); }
		}
		
		namespace ctrl
		{
		inline BYTE dev_ctrl_corr_err_reporting(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 0); }
		inline BYTE dev_ctrl_non_fatal_reporting(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 1); }
		inline BYTE dev_ctrl_fatal_err_reporting(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 2); }
		inline BYTE dev_ctrl_ur_reporting(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 3); }
		inline BYTE dev_ctrl_relaxed_ordering(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 4); }
		inline BYTE dev_ctrl_max_payload_size(PVOID dev) { return GET_BITS(((DWORD*)dev)[1], 7, 5); }
		inline BYTE dev_ctrl_ext_tag_default(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 8); }
		inline BYTE dev_ctrl_phantom_func_enable(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 9); }
		inline BYTE dev_ctrl_aux_power_enable(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 10); }
		inline BYTE dev_ctrl_enable_no_snoop(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 11); }
		inline BYTE dev_ctrl_max_read_request_size(PVOID dev) { return GET_BITS(((DWORD*)dev)[1], 14, 12); }
		inline BYTE dev_ctrl_cfg_retry_status_enable(PVOID dev) { return GET_BIT(((DWORD*)dev)[1], 15); }
		}

		namespace cap2
		{
			inline BYTE cpl_timeout_ranges_supported(PVOID dev) { return GET_BITS(((DWORD*)dev)[8], 3, 0); }
			inline BYTE cpl_timeout_disable_supported(PVOID dev) { return GET_BIT(((DWORD*)dev)[8], 4); }
		}

		namespace ctrl2
		{
			inline BYTE completiontimeoutvalue(PVOID dev) { return GET_BITS(((DWORD*)dev)[9], 3, 0); }
			inline BYTE completiontimeoutdisable(PVOID dev) { return GET_BIT(((DWORD*)dev)[9], 4); }
		}
	}

	namespace link
	{
		namespace cap
		{
		inline BYTE link_cap_max_link_speed(PVOID link)         { return GET_BITS(((DWORD*)link)[0], 3, 0); }
		inline BYTE link_cap_max_link_width(PVOID link)         { return GET_BITS(((DWORD*)link)[0], 9, 4); }
		inline BYTE link_cap_aspm_support(PVOID link)           { return GET_BITS(((DWORD*)link)[0], 11, 10); }
		inline BYTE link_cap_l0s_exit_latency(PVOID link)       { return GET_BITS(((DWORD*)link)[0], 14, 12); }
		inline BYTE link_cap_l1_exit_latency(PVOID link)        { return GET_BITS(((DWORD*)link)[0], 17, 15); }
		inline BYTE link_cap_clock_power_management(PVOID link) { return GET_BITS(((DWORD*)link)[0], 19, 18); }
		inline BYTE link_cap_aspm_optionality(PVOID link)       { return GET_BIT(((DWORD*)link)[0], 22); }
		inline BYTE link_cap_rsvd_23(PVOID link)                { return GET_BITS(((DWORD*)link)[0], 23, 19); }
		}

		namespace ctrl
		{
		inline BYTE link_control_rcb(PVOID link)                { return GET_BIT(((DWORD*)link)[1], 3); }
		}

		namespace status
		{
		inline BYTE link_status_slot_clock_config(PVOID link)   { return GET_BIT(((DWORD*)link)[1], 28); }
		}

		namespace cap2
		{
			inline BYTE linkspeedssupported(PVOID link) { return GET_BITS(((DWORD*)link)[8], 3, 1); }
		}

		namespace ctrl2
		{
		inline BYTE link_ctrl2_target_link_speed(PVOID link) { return GET_BITS(((DWORD*)link)[9], 3, 0); }
		inline BYTE entercompliance(PVOID link) { return GET_BIT(((DWORD*)link)[9], 4); }
		inline BYTE link_ctrl2_hw_autonomous_speed_disable(PVOID link) { return GET_BIT(((DWORD*)link)[9], 5); }
		inline BYTE link_ctrl2_deemphasis(PVOID link) { return GET_BIT(((DWORD*)link)[9], 6); }
		inline BYTE transmitmargin(PVOID link) { return GET_BITS(((DWORD*)link)[9], 9, 7); }
		inline BYTE entermodifiedcompliance(PVOID link) { return GET_BIT(((DWORD*)link)[9], 10); }
		inline BYTE compliancesos(PVOID link) { return GET_BIT(((DWORD*)link)[9], 11); }
		}

		namespace status2
		{
		inline BYTE deemphasis(PVOID link) { return GET_BITS(((DWORD*)link)[9], 15, 12); }
		inline BYTE deemphasislvl(PVOID link) { return GET_BIT(((DWORD*)link)[9], 16); }
		inline BYTE equalizationcomplete(PVOID link) { return GET_BIT(((DWORD*)link)[9], 17); }
		inline BYTE equalizationphase1successful(PVOID link) { return GET_BIT(((DWORD*)link)[9], 18); }
		inline BYTE equalizationphase2successful(PVOID link) { return GET_BIT(((DWORD*)link)[9], 19); }
		inline BYTE equalizationphase3successful(PVOID link) { return GET_BIT(((DWORD*)link)[9], 20); }
		inline BYTE linkequalizationrequest(PVOID link) { return GET_BIT(((DWORD*)link)[9], 21); }
		}
	}

	namespace dsn
	{
		inline BYTE dsn_cap_on(PVOID dsn) { return *(DWORD*)(dsn) != 0; }
		inline WORD dsn_cap_nextptr(PVOID dsn) { return ((WORD*)dsn)[1] >> 4; }
		inline BYTE dsn_cap_id(PVOID dsn) { return *(BYTE*)(dsn) ; }
	}

	inline PVOID get_pm(PVOID cfg) { return (PVOID)((PBYTE)cfg + capabilities_ptr(cfg)); }
	inline PVOID get_msi(PVOID cfg)
	{
		BYTE nxt = pm::cap::pm_cap_next(get_pm(cfg));
		if (nxt == 0)
		{
			return 0;
		}
		return (PVOID)((PBYTE)cfg + nxt);
	}
	inline PVOID get_pcie(PVOID cfg)
	{
		PVOID msi = get_msi(cfg);
		if (msi == 0)
		{
			return 0;
		}
		BYTE nxt = msi::cap::msi_cap_nextptr(msi);
		if (nxt == 0)
		{
			return 0;
		}
		return (PVOID)((PBYTE)cfg + nxt);
	}
	inline PVOID get_dev(PVOID cfg)
	{
		PVOID pcie = get_pcie(cfg);
		if (pcie == 0)
		{
			return 0;
		}
		return (PVOID)((PBYTE)pcie + sizeof(DWORD));
	}
	inline PVOID get_link(PVOID cfg)
	{
		PVOID pcie = get_pcie(cfg);
		if (pcie == 0)
		{
			return 0;
		}
		return (PVOID)((PBYTE)pcie + 0xC);
	}
	inline PVOID get_dsn(PVOID cfg) { return (PVOID)((PBYTE)cfg + 0x100); }
}




void filter_pci_cfg(unsigned char *cfg)
{
	using namespace pci;

	printf(
		"\n[General information]\n"
		"-----------------------------------------------------------\n"
	);
	printf("CFG_VEND_ID | CFG_DEV_ID 			%04X %04X\n", vendor_id(cfg), device_id(cfg));
	printf("CFG_SUBSYS_VEND_ID | CFG_SUBSYS_ID 		%04X %04X\n", subsys_vendor_id(cfg), subsys_id(cfg));
	printf("CFG_REV_ID 					%ld\n", revision_id(cfg));
	printf("BAR0 						%lx\n", bar(cfg)[0]);
	printf("CLASS_CODE 					%06X\n", class_code(cfg));
	printf("CAPABILITIES_PTR | PM_BASE_PTR 			0x%x\n", capabilities_ptr(cfg));
	printf("INTERRUPT_LINE                                  %lx\n", interrupt_line(cfg));
	printf("INTERRUPT_PIN                                   %lx\n", interrupt_pin(cfg));
	printf("-----------------------------------------------------------\n");

	PVOID pm = get_pm(cfg);

	if (pm == 0)
	{
		return;
	}		
	
	printf(
		"\n[PM Cap]\n"
		"-----------------------------------------------------------\n"
	);
	printf("PM_CAP_ON 					%d\n", pm::cap::pm_cap_on(pm));
	printf("PM_CAP_NEXTPTR | MSI_BASE_PTR 			0x%x\n", pm::cap::pm_cap_next(pm));
	printf("PM_CAP_ID 					%d\n",pm::cap::pm_cap_id(pm));
	printf("PM_CAP_PME_CLOCK 				%d\n", pm::cap::pm_cap_pme_clock(pm));
	printf("PM_CAP_DSI 					%d\n", pm::cap::pm_cap_dsi(pm));
	printf("PM_CAP_AUXCURRENT 				%d\n", pm::cap::pm_cap_auxcurrent(pm));
	printf("PM_CAP_D1SUPPORT PM_CAP_D2SUPPORT 		%d %d\n", pm::cap::pm_cap_d1support(pm), pm::cap::pm_cap_d2support(pm));
	printf("PM_CAP_PMESUPPORT 				0x0%x\n", pm::cap::pm_cap_pmesupport(pm));
	printf("PM_CAP_RSVD_04 					%ld\n", pm::cap::pm_cap_rsvd_04(pm));
	printf("PM_CAP_VERSION 					%ld\n", pm::cap::pm_cap_version(pm));
	printf("-----------------------------------------------------------\n");

	printf(
		"\n[PMCSR]\n"
		"-----------------------------------------------------------\n"
	);
	printf("PMCSR PWR STATE 				%ld\n", pm::csr::pm_csr_power_state(pm));
	printf("PM_CSR_NOSOFTRST 				%ld\n", pm::csr::pm_csr_nosoftrst(pm));
	printf("PMCSR PMESTATUS 				%ld\n", pm::csr::pm_csr_pme_status(pm));
	printf("PMCSR DATA SCALE 				%ld\n", pm::csr::pm_csr_data_scale(pm));
	printf("PMCSR DATA SELECT 				%ld\n", pm::csr::pm_csr_pme_status(pm));
	printf("PMCSR PME ENABLE 				%ld\n", pm::csr::pm_csr_pme_enabled(pm));
	printf("PMCSR reserved 					%ld\n", pm::csr::pm_csr_reserved(pm));
	printf("PMCSR dynamic data 				%ld\n", pm::csr::pm_csr_dynamic_data(pm));
	printf("-----------------------------------------------------------\n");

	PVOID msi = get_msi(cfg);

	if (msi == 0)
	{
		return;
	}

	printf(
		"\n[MSI CAP]\n"
		"-----------------------------------------------------------\n"
	);
	printf("MSI_CAP_ON 					%d\n", msi::cap::msi_cap_on(msi));
	printf("MSI_CAP_NEXTPTR | PCIE_BASE_PTR 		0x%x\n", msi::cap::msi_cap_nextptr(msi));
	printf("MSI_CAP_ID 					0x0%lx\n", msi::cap::msi_cap_id(msi));
	printf("MSI_CAP_MULTIMSGCAP 				%ld\n", msi::cap::msi_cap_multimsgcap(msi));
	printf("MSI_CAP_MULTIMSG_EXTENSION 			%ld\n", msi::cap::msi_cap_multimsg_extension(msi));
	printf("MSI_CAP_64_BIT_ADDR_CAPABLE 			%ld\n", msi::cap::msi_cap_64_bit_addr_capable(msi));
	printf("MSI_CAP_PER_VECTOR_MASKING_CAPABLE 		%ld\n", msi::cap::msi_cap_per_vector_masking_capable(msi));
	printf("-----------------------------------------------------------\n");

	PVOID pcie = get_pcie(cfg);

	if (pcie == 0)
	{
		return;
	}
	
	printf(
		"\n[PE CAP]\n"
		"-----------------------------------------------------------\n"
	);
	printf("PCIE_CAP_ON 					%d\n", pcie::cap::pcie_cap_on(pcie));
	printf("PCIE_CAP_NEXTPTR               			0x%lx\n", pcie::cap::pcie_cap_nextptr(pcie));
	printf("PCIE_CAP_CAPABILITY_ID               		0x%lx\n", pcie::cap::pcie_cap_capability_id(pcie));
	printf("PCIE_CAP_CAPABILITY_VERSION 			0x%lx\n", pcie::cap::pcie_cap_capability_version(pcie));
	printf("-----------------------------------------------------------\n");

	PVOID dev = get_dev(cfg);

	if (dev == 0)
	{
		return;
	}

	
	printf(
		"\n[PCI Express Device Capabilities]\n"
		"-----------------------------------------------------------\n"
	);
	printf("DEV_CAP_MAX_PAYLOAD_SUPPORTED 			%d\n", dev::cap::dev_cap_max_payload_supported(dev));
	printf("DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT 		%ld\n", dev::cap::dev_cap_phantom_functions_support(dev));
	printf("DEV_CAP_EXT_TAG_SUPPORTED 			%ld\n", dev::cap::dev_cap_ext_tag_supported(dev));
	printf("DEV_CAP_ENDPOINT_L0S_LATENCY 			%ld\n", dev::cap::dev_cap_endpoint_l0s_latency(dev));
	printf("DEV_CAP_ENDPOINT_L1_LATENCY 			%ld\n", dev::cap::dev_cap_endpoint_l1_latency(dev));
	printf("DEV_CAP_ROLE_BASED_ERROR 			%ld\n", dev::cap::dev_cap_role_based_error(dev));
	printf("DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE 		%ld\n", dev::cap::dev_cap_enable_slot_pwr_limit_value(dev));
	printf("DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE 		%ld\n", dev::cap::dev_cap_enable_slot_pwr_limit_scale(dev));
	printf("DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE 		%ld\n", dev::cap::dev_cap_function_level_reset_capable(dev));
	printf("-----------------------------------------------------------\n");


	printf(
		"\n[Device Control]\n"
		"-----------------------------------------------------------\n"
	);
	printf("Correctable Error Reporting Enable 		%ld\n", dev::ctrl::dev_ctrl_corr_err_reporting(dev));
	printf("Non-Fatal Error Reporting Enable 		%ld\n", dev::ctrl::dev_ctrl_non_fatal_reporting(dev));
	printf("Fatal Error Reporting Enable 			%ld\n", dev::ctrl::dev_ctrl_fatal_err_reporting(dev));
	printf("Unsupported Request Reporting Enable 		%ld\n", dev::ctrl::dev_ctrl_ur_reporting(dev));
	printf("Enable Relaxed Ordering 			%ld\n", dev::ctrl::dev_ctrl_relaxed_ordering(dev));
	printf("Max_Payload_Size 				%ld\n", dev::ctrl::dev_ctrl_max_payload_size(dev));
	printf("DEV_CONTROL_EXT_TAG_DEFAULT 			%ld\n", dev::ctrl::dev_ctrl_ext_tag_default(dev));
	printf("Phantom Functions Enable 			%ld\n", dev::ctrl::dev_ctrl_phantom_func_enable(dev));
	printf("Auxiliary Power PM Enable 			%ld\n", dev::ctrl::dev_ctrl_aux_power_enable(dev));
	printf("Enable No Snoop 				%ld\n", dev::ctrl::dev_ctrl_enable_no_snoop(dev));
	printf("Max_Read_Request_Size 				%ld\n", dev::ctrl::dev_ctrl_max_read_request_size(dev));
	printf("Configuration retry status enable 		%ld\n", dev::ctrl::dev_ctrl_cfg_retry_status_enable(dev));
	printf("-----------------------------------------------------------\n");
		
	PVOID link = get_link(cfg);

	if (link == 0)
	{
		return;
	}

	printf(
		"\n[PCI Express Link Capabilities]\n"
		"-----------------------------------------------------------\n"
	);
	printf("LINK_CAP_MAX_LINK_SPEED 			%ld\n", link::cap::link_cap_max_link_speed(link));
	printf("LINK_CAP_MAX_LINK_WIDTH 			%ld\n", link::cap::link_cap_max_link_width(link));
	printf("LINK_CAP_ASPM_SUPPORT 				%d\n",  link::cap::link_cap_aspm_support(link));
	printf("LINK_CAP_L0S_EXIT_LATENCY 			%ld\n", link::cap::link_cap_l0s_exit_latency(link));
	printf("LINK_CAP_L1_EXIT_LATENCY 			%ld\n", link::cap::link_cap_l1_exit_latency(link));
	printf("LINK_CAP_CLOCK_POWER_MANAGEMENT 		%ld\n", link::cap::link_cap_clock_power_management(link));
	printf("LINK_CAP_ASPM_OPTIONALITY 			%ld\n", link::cap::link_cap_aspm_optionality(link));
	printf("LINK_CAP_RSVD_23 				%ld\n", link::cap::link_cap_rsvd_23(link));
	printf("-----------------------------------------------------------\n");



	printf(
		"\n[Link Control]\n"
		"-----------------------------------------------------------\n"
	);
	printf("LINK_CONTROL_RCB  				%ld\n", link::ctrl::link_control_rcb(link));
	printf("-----------------------------------------------------------\n");



	printf(
		"\n[Link Status]\n"
		"-----------------------------------------------------------\n"
	);
	printf("LINK_STATUS_SLOT_CLOCK_CONFIG	 		%ld\n", link::status::link_status_slot_clock_config(link));
	printf("-----------------------------------------------------------\n");


	printf(
		"\n[PCI Express Device Capabilities 2]\n"
		"-----------------------------------------------------------\n"
	);
	printf("CPL_TIMEOUT_RANGES_SUPPORTED 			%ld\n", dev::cap2::cpl_timeout_disable_supported(dev));
	printf("CPL_TIMEOUT_DISABLE_SUPPORTED 			%ld\n", dev::cap2::cpl_timeout_disable_supported(dev));
	printf("-----------------------------------------------------------\n");


	printf(
		"\n[Device Control 2]\n"
		"-----------------------------------------------------------\n"
	);
	printf("Completion Timeout value 			%ld\n", dev::ctrl2::completiontimeoutvalue(dev));
	printf("Completion Timeout disable 			%ld\n", dev::ctrl2::completiontimeoutdisable(dev));
	printf("-----------------------------------------------------------\n");



	printf(
		"\n[PCI Express Link Capabilities 2]\n"
		"-----------------------------------------------------------\n"
	);
	printf("Link speeds supported 				%ld\n", link::cap2::linkspeedssupported(link));
	printf("-----------------------------------------------------------\n");



	printf(
		"\n[Link Control 2]\n"
		"-----------------------------------------------------------\n"
	);
	printf("LINK_CTRL2_TARGET_LINK_SPEED 			%d\n",  link::ctrl2::link_ctrl2_target_link_speed(link));
	printf("Enter Compliance 				%ld\n", link::ctrl2::entercompliance(link));
	printf("LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE 		%ld\n", link::ctrl2::link_ctrl2_hw_autonomous_speed_disable(link));
	printf("LINK_CTRL2_DEEMPHASIS 				%ld\n", link::ctrl2::link_ctrl2_deemphasis(link));
	printf("Transmit Margin 				%ld\n", link::ctrl2::transmitmargin(link));
	printf("Enter Modified Compliance 			%ld\n", link::ctrl2::entermodifiedcompliance(link));
	printf("Compliance SOS 					%d\n",  link::ctrl2::compliancesos(link));
	printf("-----------------------------------------------------------\n");


	printf(
		"\n[Link Status 2]\n"
		"-----------------------------------------------------------\n"
	);
	printf("Compliance Preset/De-emphasis 			%ld\n", link::status2::deemphasis(link));
	printf("Current De-emphasis Level 			%ld\n", link::status2::deemphasislvl(link));
	printf("Equalization Complete 				%ld\n", link::status2::equalizationcomplete(link));
	printf("Equalization Phase 1 Successful 		%ld\n", link::status2::equalizationphase1successful(link));
	printf("Equalization Phase 2 Successful 		%ld\n", link::status2::equalizationphase2successful(link));
	printf("Equalization Phase 3 Successful 		%ld\n", link::status2::equalizationphase3successful(link));
	printf("Link Equalization Request 			%ld\n", link::status2::linkequalizationrequest(link));
	printf("-----------------------------------------------------------\n");
		
	PVOID dsn = get_dsn(cfg);

	printf(
		"\n[PCI Express Extended Capability - DSN]\n"
		"-----------------------------------------------------------\n"
	);
	printf("DSN_CAP_NEXTPTR 				0x%lx\n", dsn::dsn_cap_nextptr(dsn));
	printf("DSN_CAP_ON 					%ld\n", dsn::dsn_cap_on(dsn));
	printf("DSN_CAP_ID 					0x0%lx\n", dsn::dsn_cap_id(dsn));
	printf("-----------------------------------------------------------\n");
}

void FontColor(int color = 0x07)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void compare_cfg(unsigned char *cfg, unsigned char *orig_cfg)
{
	printf("\n     00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F\n\n");

	int line_counter=0;
	for (int i = 0; i < 256; i++)
	{
		if (line_counter == 0)
		{
			printf("%02X   ", i);
		}

		line_counter++;


		if (cfg[i] == orig_cfg[i])
			printf("%02X ", cfg[i]);
		else
		{
			FontColor(2);
			printf("%02X ", orig_cfg[i]);
			FontColor();
		}

		if (line_counter == 16)
		{
			printf("\n");
			line_counter=0;
		}
		
	}

	printf("\n");

	line_counter=0;
	for (int i = 0; i < 256; i++)
	{
		if (line_counter == 0)
		{
			printf("%02X   ", i);
		}

		line_counter++;


		if (cfg[i] == orig_cfg[i])
			printf("%02X ", cfg[i]);
		else
		{
			FontColor(4);
			printf("%02X ", cfg[i]);
			FontColor();
		}

		if (line_counter == 16)
		{
			printf("\n");
			line_counter=0;
		}
		
	}
}

int main(void)
{
	compare_cfg(wireless_adapter_spoof_cfg, wireless_adapter_cfg);
	printf("\n");
	filter_pci_cfg(xilinx_cfg);
	return getchar();
}

