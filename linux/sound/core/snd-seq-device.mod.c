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

KSYMTAB_FUNC(snd_seq_autoload_init, "", "");
KSYMTAB_FUNC(snd_seq_autoload_exit, "", "");
KSYMTAB_FUNC(snd_seq_device_load_drivers, "", "");
KSYMTAB_FUNC(snd_seq_device_new, "", "");
KSYMTAB_FUNC(__snd_seq_driver_register, "_gpl", "");
KSYMTAB_FUNC(snd_seq_driver_unregister, "_gpl", "");

SYMBOL_CRC(snd_seq_autoload_init, 0x370a0736, "");
SYMBOL_CRC(snd_seq_autoload_exit, 0x091def1c, "");
SYMBOL_CRC(snd_seq_device_load_drivers, 0x6339b6d0, "");
SYMBOL_CRC(snd_seq_device_new, 0xcf0676dd, "");
SYMBOL_CRC(__snd_seq_driver_register, 0x2d9298e4, "_gpl");
SYMBOL_CRC(snd_seq_driver_unregister, 0x9cafd5dd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc68b08a3, "snd_info_register" },
	{ 0x9507edad, "snd_info_create_module_entry" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x16965a52, "device_initialize" },
	{ 0x7c2b253b, "snd_info_free_entry" },
	{ 0x9ccf5a3d, "snd_seq_root" },
	{ 0x37a0cba, "kfree" },
	{ 0x36dc6ece, "put_device" },
	{ 0xdece2071, "bus_for_each_dev" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x92893115, "driver_unregister" },
	{ 0x73f49957, "device_del" },
	{ 0xb6266700, "snd_device_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf2772c4e, "driver_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1b367b9c, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "C878C826BD202EE5980B09C");
