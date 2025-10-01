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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd3c6d03a, "hdlcdrv_unregister" },
	{ 0x349cba85, "strchr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9606a40a, "hdlcdrv_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x59028a15, "hdlcdrv_arbitrate" },
	{ 0xb0ed152b, "hdlcdrv_transmitter" },
	{ 0x46e1b95c, "hdlcdrv_receiver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdcb764ad, "memset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x99cd0788, "param_ops_charp" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "hdlcdrv");


MODULE_INFO(srcversion, "741655F3CB5E2F3AD96471D");
