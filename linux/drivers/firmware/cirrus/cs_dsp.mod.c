#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(cs_dsp_mem_region_name, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_init_debugfs, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_cleanup_debugfs, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_coeff_write_acked_control, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_coeff_write_ctrl, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_coeff_lock_and_write_ctrl, "_gpl", "");
KSYMTAB_FUNC(cs_dsp_coeff_read_ctrl, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_coeff_lock_and_read_ctrl, "_gpl", "");
KSYMTAB_FUNC(cs_dsp_get_ctl, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_find_alg_region, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_adsp1_init, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_adsp1_power_up, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_adsp1_power_down, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_set_dspclk, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_power_up, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_power_down, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_run, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_stop, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_adsp2_init, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_halo_init, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_remove, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_read_raw_data_block, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_read_data_word, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_write_data_word, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_remove_padding, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_adsp2_bus_error, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_halo_bus_error, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_halo_wdt_expire, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_chunk_write, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_chunk_flush, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_chunk_read, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_wseq_init, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_wseq_write, "_gpl", "FW_CS_DSP");
KSYMTAB_FUNC(cs_dsp_wseq_multi_write, "_gpl", "FW_CS_DSP");

SYMBOL_CRC(cs_dsp_mem_region_name, 0x144d6986, "_gpl");
SYMBOL_CRC(cs_dsp_init_debugfs, 0x3bb4a85c, "_gpl");
SYMBOL_CRC(cs_dsp_cleanup_debugfs, 0x777308a1, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_write_acked_control, 0xba406019, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_write_ctrl, 0x08613663, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_lock_and_write_ctrl, 0xba1167e8, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_read_ctrl, 0xa6d68a3b, "_gpl");
SYMBOL_CRC(cs_dsp_coeff_lock_and_read_ctrl, 0xaa48305a, "_gpl");
SYMBOL_CRC(cs_dsp_get_ctl, 0x62445d13, "_gpl");
SYMBOL_CRC(cs_dsp_find_alg_region, 0x48a2595c, "_gpl");
SYMBOL_CRC(cs_dsp_adsp1_init, 0xc3ff582b, "_gpl");
SYMBOL_CRC(cs_dsp_adsp1_power_up, 0x9de64ff5, "_gpl");
SYMBOL_CRC(cs_dsp_adsp1_power_down, 0x69293e48, "_gpl");
SYMBOL_CRC(cs_dsp_set_dspclk, 0x0366777d, "_gpl");
SYMBOL_CRC(cs_dsp_power_up, 0xb65d2863, "_gpl");
SYMBOL_CRC(cs_dsp_power_down, 0x2fe55fe1, "_gpl");
SYMBOL_CRC(cs_dsp_run, 0x50b00e98, "_gpl");
SYMBOL_CRC(cs_dsp_stop, 0xbfd4fc8a, "_gpl");
SYMBOL_CRC(cs_dsp_adsp2_init, 0x976aba1a, "_gpl");
SYMBOL_CRC(cs_dsp_halo_init, 0xd8baada4, "_gpl");
SYMBOL_CRC(cs_dsp_remove, 0xe0a0943c, "_gpl");
SYMBOL_CRC(cs_dsp_read_raw_data_block, 0xf29b120b, "_gpl");
SYMBOL_CRC(cs_dsp_read_data_word, 0xb31e7e56, "_gpl");
SYMBOL_CRC(cs_dsp_write_data_word, 0x5c3c24bf, "_gpl");
SYMBOL_CRC(cs_dsp_remove_padding, 0x4e5562f8, "_gpl");
SYMBOL_CRC(cs_dsp_adsp2_bus_error, 0x80e62a79, "_gpl");
SYMBOL_CRC(cs_dsp_halo_bus_error, 0x81ae1d51, "_gpl");
SYMBOL_CRC(cs_dsp_halo_wdt_expire, 0xf0db19c8, "_gpl");
SYMBOL_CRC(cs_dsp_chunk_write, 0x6e0cce2d, "_gpl");
SYMBOL_CRC(cs_dsp_chunk_flush, 0x9e324cb0, "_gpl");
SYMBOL_CRC(cs_dsp_chunk_read, 0xb6c0d9e7, "_gpl");
SYMBOL_CRC(cs_dsp_wseq_init, 0x7e97a8f0, "_gpl");
SYMBOL_CRC(cs_dsp_wseq_write, 0x39a0e079, "_gpl");
SYMBOL_CRC(cs_dsp_wseq_multi_write, 0x10a74ce9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xe8d05413, "debugfs_create_bool" },
	{ 0x9cf88ef9, "debugfs_create_x32" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x71c90ddc, "single_open" },
	{ 0x669c413b, "_dev_err" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0x6cfb64fe, "regmap_raw_read" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a921311, "strncmp" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xdcb764ad, "memset" },
	{ 0xf2413f61, "regmap_multi_reg_write" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0x5d809a68, "simple_open" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x661256ad, "seq_read" },
	{ 0x10139ad8, "single_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ADA90915DF3710A0C45C3EA");
