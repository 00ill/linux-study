#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(b2c2_flexcop_debug, "_gpl", "");
KSYMTAB_FUNC(flexcop_pass_dmx_data, "", "");
KSYMTAB_FUNC(flexcop_pass_dmx_packets, "", "");
KSYMTAB_FUNC(flexcop_device_kmalloc, "", "");
KSYMTAB_FUNC(flexcop_device_kfree, "", "");
KSYMTAB_FUNC(flexcop_device_initialize, "", "");
KSYMTAB_FUNC(flexcop_device_exit, "", "");
KSYMTAB_FUNC(flexcop_i2c_request, "", "");
KSYMTAB_FUNC(flexcop_sram_set_dest, "", "");
KSYMTAB_FUNC(flexcop_wan_set_speed, "", "");
KSYMTAB_FUNC(flexcop_sram_ctrl, "", "");
KSYMTAB_FUNC(flexcop_eeprom_check_mac_addr, "", "");
KSYMTAB_FUNC(flexcop_dump_reg, "", "");
KSYMTAB_FUNC(flexcop_pid_feed_control, "", "");

SYMBOL_CRC(b2c2_flexcop_debug, 0x66c0289a, "_gpl");
SYMBOL_CRC(flexcop_pass_dmx_data, 0xdb02a972, "");
SYMBOL_CRC(flexcop_pass_dmx_packets, 0x4da53bef, "");
SYMBOL_CRC(flexcop_device_kmalloc, 0xfb035c97, "");
SYMBOL_CRC(flexcop_device_kfree, 0x8d267607, "");
SYMBOL_CRC(flexcop_device_initialize, 0x72f88567, "");
SYMBOL_CRC(flexcop_device_exit, 0xb3955e11, "");
SYMBOL_CRC(flexcop_i2c_request, 0xdb791e3c, "");
SYMBOL_CRC(flexcop_sram_set_dest, 0xb5e54bee, "");
SYMBOL_CRC(flexcop_wan_set_speed, 0xfacfb8bf, "");
SYMBOL_CRC(flexcop_sram_ctrl, 0x3c004dff, "");
SYMBOL_CRC(flexcop_eeprom_check_mac_addr, 0xdb59de14, "");
SYMBOL_CRC(flexcop_dump_reg, 0x3830a964, "");
SYMBOL_CRC(flexcop_pid_feed_control, 0xcddf9629, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd59ba7a8, "dvb_dmxdev_init" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf565938, "dvb_register_adapter" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xa23a2eab, "dvb_net_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe643b477, "dvb_dmxdev_release" },
	{ 0x1ea8b724, "param_ops_short" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0x2559398, "dvb_net_release" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf72fae1, "dvb_unregister_frontend" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x22286088, "cx24123_get_tuner_i2c_adapter" },
	{ 0x7ab4a2cf, "dvb_register_frontend" },
	{ 0x4c2aa3bf, "cx24113_agc_callback" },
	{ 0x88cf6d3a, "dvb_unregister_adapter" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x16d2e396, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dvb-core,cx24123,cx24113,s5h1420");


MODULE_INFO(srcversion, "4C4280033A9676EC02C54AD");
