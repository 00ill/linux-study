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
	{ 0x233c6727, "__register_mtd_parser" },
	{ 0x469438cc, "of_node_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7e06ef47, "of_n_size_cells" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a1c2aba, "of_get_property" },
	{ 0x122c3a7e, "_printk" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x66f331d0, "deregister_mtd_parser" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0xa8a523fe, "of_match_node" },
	{ 0x1173758f, "of_n_addr_cells" },
	{ 0x98cf60b3, "strlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("of:N*T*Cfixed-partitions");
MODULE_ALIAS("of:N*T*Cfixed-partitionsC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-partitions");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-partitionsC*");
MODULE_ALIAS("of:N*T*Clinksys,ns-partitions");
MODULE_ALIAS("of:N*T*Clinksys,ns-partitionsC*");

MODULE_INFO(srcversion, "7F9179D325655D211208771");
