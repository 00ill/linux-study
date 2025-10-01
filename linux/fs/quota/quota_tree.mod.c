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

KSYMTAB_FUNC(qtree_entry_unused, "", "");
KSYMTAB_FUNC(qtree_write_dquot, "", "");
KSYMTAB_FUNC(qtree_delete_dquot, "", "");
KSYMTAB_FUNC(qtree_read_dquot, "", "");
KSYMTAB_FUNC(qtree_release_dquot, "", "");
KSYMTAB_FUNC(qtree_get_next_id, "", "");

SYMBOL_CRC(qtree_entry_unused, 0x1946fd23, "");
SYMBOL_CRC(qtree_write_dquot, 0x40e829e7, "");
SYMBOL_CRC(qtree_delete_dquot, 0x10cf5ea6, "");
SYMBOL_CRC(qtree_read_dquot, 0x7d2d949e, "");
SYMBOL_CRC(qtree_release_dquot, 0xd34fc51d, "");
SYMBOL_CRC(qtree_get_next_id, 0x8359a555, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb349246, "__quota_error" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x771f0565, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x8d732959, "make_kuid" },
	{ 0x8966d145, "make_kprojid" },
	{ 0x796c3d7, "make_kgid" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcf3ea605, "mark_info_dirty" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "99FF2A63256301B3C4628F1");
