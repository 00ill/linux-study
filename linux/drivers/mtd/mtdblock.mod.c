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
	{ 0xc3af2299, "register_mtd_blktrans" },
	{ 0x9a18736, "del_mtd_blktrans_dev" },
	{ 0xc210fe65, "mtd_erase" },
	{ 0xf1fdd10c, "mtd_write" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3a165f00, "deregister_mtd_blktrans" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xcdc6bf01, "mtd_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xf2434fb4, "add_mtd_blktrans_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "20C3AE4100340216AD81100");
