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

KSYMTAB_DATA(nf_nat_pptp_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_pptp_hook, 0xedee54bf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3d0fe93d, "nf_conntrack_helper_register" },
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0x521b2f16, "nf_ct_expect_find_get" },
	{ 0x7212cd50, "nf_ct_unexpect_related" },
	{ 0x2d10edf5, "nf_ct_expect_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x951f365e, "nf_conntrack_helper_unregister" },
	{ 0x90cb3152, "nf_conntrack_find_get" },
	{ 0xda16d8d5, "nf_ct_delete" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x76e331cf, "nf_ct_expect_alloc" },
	{ 0xfeb7f1cc, "nf_ct_expect_init" },
	{ 0x8b0e920e, "nf_ct_expect_related_report" },
	{ 0x7e131036, "nf_ct_gre_keymap_add" },
	{ 0xd4380b85, "nf_ct_gre_keymap_destroy" },
	{ 0x414d8c6e, "__nf_ct_ext_find" },
	{ 0xdcb764ad, "memset" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xeb43153, "nf_ct_ext_add" },
	{ 0x26b8ed73, "skb_copy_bits" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "4A4B466E18CACF118891BD5");
