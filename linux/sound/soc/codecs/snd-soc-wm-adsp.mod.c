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

KSYMTAB_FUNC(wm_adsp_fw_get, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_fw_put, "_gpl", "");
KSYMTAB_DATA(wm_adsp_fw_enum, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_control_add, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_write_ctl, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_read_ctl, "_gpl", "");
KSYMTAB_FUNC(wm_adsp1_init, "_gpl", "");
KSYMTAB_FUNC(wm_adsp1_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_set_dspclk, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_preloader_get, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_preloader_put, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_power_up, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_power_down, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_early_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_run, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_stop, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_event, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_component_probe, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_component_remove, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_init, "_gpl", "");
KSYMTAB_FUNC(wm_halo_init, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_remove, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_open, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_free, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_set_params, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_get_caps, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_trigger, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_handle_irq, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_pointer, "_gpl", "");
KSYMTAB_FUNC(wm_adsp_compr_copy, "_gpl", "");
KSYMTAB_FUNC(wm_adsp2_bus_error, "_gpl", "");
KSYMTAB_FUNC(wm_halo_bus_error, "_gpl", "");
KSYMTAB_FUNC(wm_halo_wdt_expire, "_gpl", "");

SYMBOL_CRC(wm_adsp_fw_get, 0x044c6e10, "_gpl");
SYMBOL_CRC(wm_adsp_fw_put, 0x440db41d, "_gpl");
SYMBOL_CRC(wm_adsp_fw_enum, 0x894458f3, "_gpl");
SYMBOL_CRC(wm_adsp_control_add, 0xee008a45, "_gpl");
SYMBOL_CRC(wm_adsp_write_ctl, 0xf4eb4d74, "_gpl");
SYMBOL_CRC(wm_adsp_read_ctl, 0x8e421f22, "_gpl");
SYMBOL_CRC(wm_adsp1_init, 0x563d1eb2, "_gpl");
SYMBOL_CRC(wm_adsp1_event, 0xc5a84230, "_gpl");
SYMBOL_CRC(wm_adsp2_set_dspclk, 0xf161862b, "_gpl");
SYMBOL_CRC(wm_adsp2_preloader_get, 0xd8e0528a, "_gpl");
SYMBOL_CRC(wm_adsp2_preloader_put, 0x98a18887, "_gpl");
SYMBOL_CRC(wm_adsp_power_up, 0xb1296cb4, "_gpl");
SYMBOL_CRC(wm_adsp_power_down, 0x0ec33bfb, "_gpl");
SYMBOL_CRC(wm_adsp_early_event, 0x659a2171, "_gpl");
SYMBOL_CRC(wm_adsp_run, 0x8f54ea5b, "_gpl");
SYMBOL_CRC(wm_adsp_stop, 0x7f91d50d, "_gpl");
SYMBOL_CRC(wm_adsp_event, 0x0b90c136, "_gpl");
SYMBOL_CRC(wm_adsp2_component_probe, 0x187d2a17, "_gpl");
SYMBOL_CRC(wm_adsp2_component_remove, 0xbc814054, "_gpl");
SYMBOL_CRC(wm_adsp2_init, 0x3c613955, "_gpl");
SYMBOL_CRC(wm_halo_init, 0x5600fb0b, "_gpl");
SYMBOL_CRC(wm_adsp2_remove, 0xb517ec87, "_gpl");
SYMBOL_CRC(wm_adsp_compr_open, 0x8f3af7be, "_gpl");
SYMBOL_CRC(wm_adsp_compr_free, 0xe7d6a733, "_gpl");
SYMBOL_CRC(wm_adsp_compr_set_params, 0x064297d7, "_gpl");
SYMBOL_CRC(wm_adsp_compr_get_caps, 0x82fe513a, "_gpl");
SYMBOL_CRC(wm_adsp_compr_trigger, 0xa61ee69f, "_gpl");
SYMBOL_CRC(wm_adsp_compr_handle_irq, 0x494e6281, "_gpl");
SYMBOL_CRC(wm_adsp_compr_pointer, 0x9eb1bad8, "_gpl");
SYMBOL_CRC(wm_adsp_compr_copy, 0x321ff888, "_gpl");
SYMBOL_CRC(wm_adsp2_bus_error, 0xdd3c79ef, "_gpl");
SYMBOL_CRC(wm_halo_bus_error, 0xea38ee07, "_gpl");
SYMBOL_CRC(wm_halo_wdt_expire, 0x52c16479, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xaa48305a, "cs_dsp_coeff_lock_and_read_ctrl" },
	{ 0xa34de55d, "snd_soc_component_force_enable_pin" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6c37e5, "firmware_request_nowarn" },
	{ 0x777308a1, "cs_dsp_cleanup_debugfs" },
	{ 0xa6d68a3b, "cs_dsp_coeff_read_ctrl" },
	{ 0xe6af7466, "snd_compr_stop_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbfd4fc8a, "cs_dsp_stop" },
	{ 0x9de64ff5, "cs_dsp_adsp1_power_up" },
	{ 0x69293e48, "cs_dsp_adsp1_power_down" },
	{ 0x96848186, "scnprintf" },
	{ 0xc3ff582b, "cs_dsp_adsp1_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x8613663, "cs_dsp_coeff_write_ctrl" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3bb4a85c, "cs_dsp_init_debugfs" },
	{ 0xe2964344, "__wake_up" },
	{ 0x81ae1d51, "cs_dsp_halo_bus_error" },
	{ 0x7ba0b3cf, "snd_soc_dapm_sync" },
	{ 0x4e5562f8, "cs_dsp_remove_padding" },
	{ 0x48a2595c, "cs_dsp_find_alg_region" },
	{ 0xba406019, "cs_dsp_coeff_write_acked_control" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x62445d13, "cs_dsp_get_ctl" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x669c413b, "_dev_err" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd8baada4, "cs_dsp_halo_init" },
	{ 0x2fe55fe1, "cs_dsp_power_down" },
	{ 0x976aba1a, "cs_dsp_adsp2_init" },
	{ 0xddfb6567, "snd_soc_add_component_controls" },
	{ 0xe0a0943c, "cs_dsp_remove" },
	{ 0x11089ac7, "_ctype" },
	{ 0x144d6986, "cs_dsp_mem_region_name" },
	{ 0x366777d, "cs_dsp_set_dspclk" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xb65d2863, "cs_dsp_power_up" },
	{ 0xba1167e8, "cs_dsp_coeff_lock_and_write_ctrl" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x999e8297, "vfree" },
	{ 0x50b00e98, "cs_dsp_run" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5c3c24bf, "cs_dsp_write_data_word" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf0db19c8, "cs_dsp_halo_wdt_expire" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xacc484ad, "snd_soc_component_disable_pin" },
	{ 0xc1a0f5a8, "snd_soc_bytes_tlv_callback" },
	{ 0x80e62a79, "cs_dsp_adsp2_bus_error" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xf29b120b, "cs_dsp_read_raw_data_block" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb31e7e56, "cs_dsp_read_data_word" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "cs_dsp,snd-soc-core,snd-compress");


MODULE_INFO(srcversion, "6307A40EBAAB254FDFB7FAF");
