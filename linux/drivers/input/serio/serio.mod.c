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

KSYMTAB_FUNC(serio_rescan, "", "");
KSYMTAB_FUNC(serio_reconnect, "", "");
KSYMTAB_FUNC(__serio_register_port, "", "");
KSYMTAB_FUNC(serio_unregister_port, "", "");
KSYMTAB_FUNC(serio_unregister_child_port, "", "");
KSYMTAB_FUNC(__serio_register_driver, "", "");
KSYMTAB_FUNC(serio_unregister_driver, "", "");
KSYMTAB_FUNC(serio_open, "", "");
KSYMTAB_FUNC(serio_close, "", "");
KSYMTAB_FUNC(serio_interrupt, "", "");
KSYMTAB_DATA(serio_bus, "", "");

SYMBOL_CRC(serio_rescan, 0x6de0c8ed, "");
SYMBOL_CRC(serio_reconnect, 0x612bec7c, "");
SYMBOL_CRC(__serio_register_port, 0x6d9de2ac, "");
SYMBOL_CRC(serio_unregister_port, 0xfb579c8e, "");
SYMBOL_CRC(serio_unregister_child_port, 0xebd7d091, "");
SYMBOL_CRC(__serio_register_driver, 0x3d2deda3, "");
SYMBOL_CRC(serio_unregister_driver, 0x429ac205, "");
SYMBOL_CRC(serio_open, 0x36bb6003, "");
SYMBOL_CRC(serio_close, 0x1f2d1566, "");
SYMBOL_CRC(serio_interrupt, 0x6af0d2b9, "");
SYMBOL_CRC(serio_bus, 0x791ec101, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9d9e8944, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x36dc6ece, "put_device" },
	{ 0x73f49957, "device_del" },
	{ 0x4074d816, "device_release_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd8940511, "__module_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x16965a52, "device_initialize" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0xf2772c4e, "driver_register" },
	{ 0x92893115, "driver_unregister" },
	{ 0x1b367b9c, "bus_register" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x7cf0ae3e, "device_attach" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2b2f871b, "driver_find" },
	{ 0xd76a4dbd, "device_bind_driver" },
	{ 0xb651c51e, "driver_attach" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x669c413b, "_dev_err" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8E830790ADA247B5E1D9E16");
