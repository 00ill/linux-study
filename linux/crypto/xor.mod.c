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

KSYMTAB_FUNC(xor_blocks, "", "");

SYMBOL_CRC(xor_blocks, 0x5b6c00e6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xdb786e41, "xor_block_inner_neon" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x122c3a7e, "_printk" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xor-neon");


MODULE_INFO(srcversion, "D45378EA1AEAC89FACA820A");
