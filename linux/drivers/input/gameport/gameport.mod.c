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

KSYMTAB_FUNC(gameport_start_polling, "", "");
KSYMTAB_FUNC(gameport_stop_polling, "", "");
KSYMTAB_FUNC(gameport_set_phys, "", "");
KSYMTAB_FUNC(__gameport_register_port, "", "");
KSYMTAB_FUNC(gameport_unregister_port, "", "");
KSYMTAB_FUNC(__gameport_register_driver, "", "");
KSYMTAB_FUNC(gameport_unregister_driver, "", "");
KSYMTAB_FUNC(gameport_open, "", "");
KSYMTAB_FUNC(gameport_close, "", "");

SYMBOL_CRC(gameport_start_polling, 0xd6ec992a, "");
SYMBOL_CRC(gameport_stop_polling, 0xf5cfec2b, "");
SYMBOL_CRC(gameport_set_phys, 0x4ba42c76, "");
SYMBOL_CRC(__gameport_register_port, 0xb524c8f6, "");
SYMBOL_CRC(gameport_unregister_port, 0xf3187d8b, "");
SYMBOL_CRC(__gameport_register_driver, 0xe07ad122, "");
SYMBOL_CRC(gameport_unregister_driver, 0xe8022a4b, "");
SYMBOL_CRC(gameport_open, 0xd3d296b7, "");
SYMBOL_CRC(gameport_close, 0xfa7f5433, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x148653, "vsnprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d9e8944, "module_put" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3aaa0000, "try_module_get" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd8940511, "__module_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x16965a52, "device_initialize" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf2772c4e, "driver_register" },
	{ 0x92893115, "driver_unregister" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x1b367b9c, "bus_register" },
	{ 0xbf8790c5, "bus_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x36dc6ece, "put_device" },
	{ 0x73f49957, "device_del" },
	{ 0x4074d816, "device_release_driver" },
	{ 0x7cf0ae3e, "device_attach" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb651c51e, "driver_attach" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x669c413b, "_dev_err" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x5a921311, "strncmp" },
	{ 0x2b2f871b, "driver_find" },
	{ 0xd76a4dbd, "device_bind_driver" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A80E694E5AE4D831D88B290");
