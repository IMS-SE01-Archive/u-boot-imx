/*
 * (C) Copyright 2009
 * Stefan Roese, DENX Software Engineering, sr@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/ppc4xx_config.h>

struct ppc4xx_config ppc4xx_config_val[] = {
	{
		"333-133-nor", "NOR  CPU: 333 PLB: 133 OPB:  66 EBC:  66",
		{
			0x84, 0x70, 0xa2, 0xa6, 0x05, 0x57, 0xa0, 0x10,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"333-166-nor", "NOR  CPU: 333 PLB: 166 OPB:  83 EBC:  55",
		{
			0xc7, 0x78, 0xf3, 0x4e, 0x05, 0xd7, 0xa0, 0x30,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"333-166-nand", "NAND CPU: 333 PLB: 166 OPB:  83 EBC:  55",
		{
			0xc7, 0x78, 0xf3, 0x4e, 0x05, 0xd7, 0xd0, 0x30,
			0xa0, 0x68, 0x23, 0x58, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"400-133-nor", "NOR  CPU: 400 PLB: 133 OPB:  66 EBC:  66",
		{
			0x86, 0x78, 0xc2, 0xc6, 0x05, 0x57, 0xa0, 0x30,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"400-160-nor", "NOR  CPU: 400 PLB: 160 OPB:  80 EBC:  53",
		{
			0x86, 0x78, 0xc2, 0xa6, 0x05, 0xd7, 0xa0, 0x10,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"416-166-nor", "NOR  CPU: 416 PLB: 166 OPB:  83 EBC:  55",
		{
			0xc6, 0x78, 0x52, 0xa6, 0x05, 0xd7, 0xa0, 0x10,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"416-166-nand", "NAND CPU: 416 PLB: 166 OPB:  83 EBC:  55",
		{
			0xc6, 0x78, 0x52, 0xa6, 0x05, 0xd7, 0xd0, 0x10,
			0xa0, 0x68, 0x23, 0x58, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"500-166-nor", "NOR  CPU: 500 PLB: 166 OPB:  83 EBC:  55",
		{
			0xc7, 0x78, 0x52, 0xc6, 0x05, 0xd7, 0xa0, 0x30,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"500-166-nand", "NAND CPU: 500 PLB: 166 OPB:  83 EBC:  55",
		{
			0xc7, 0x78, 0x52, 0xc6, 0x05, 0xd7, 0xd0, 0x30,
			0xa0, 0x68, 0x23, 0x58, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"533-133-nor", "NOR  CPU: 533 PLB: 133 OPB:  66 EBC:  66",
		{
			0x87, 0x78, 0x82, 0x52, 0x09, 0x57, 0xa0, 0x30,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"667-133-nor", "NOR  CPU: 667 PLB: 133 OPB:  66 EBC:  66",
		{
			0x87, 0x78, 0xa2, 0x56, 0x09, 0x57, 0xa0, 0x30,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"667-166-nor", "NOR  CPU: 667 PLB: 166 OPB:  83 EBC:  55",
		{
			0x87, 0x78, 0xa2, 0x52, 0x09, 0xd7, 0xa0, 0x30,
			0x40, 0x08, 0x23, 0x50, 0x0d, 0x05, 0x00, 0x00
		}
	},
	{
		"667-166-nand", "NAND CPU: 667 PLB: 166 OPB:  83 EBC:  55",
		{
			0x87, 0x78, 0xa2, 0x52, 0x09, 0xd7, 0xd0, 0x30,
			0xa0, 0x68, 0x23, 0x58, 0x0d, 0x05, 0x00, 0x00
		}
	},
};

int ppc4xx_config_count = ARRAY_SIZE(ppc4xx_config_val);