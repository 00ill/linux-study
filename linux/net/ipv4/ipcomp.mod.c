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
	{ 0x531165c6, "xfrm_register_type" },
	{ 0xc4cedc03, "xfrm4_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x912bab41, "xfrm_unregister_type" },
	{ 0xd8fd32aa, "xfrm4_protocol_deregister" },
	{ 0xfb1180f4, "ipcomp_init_state" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x80c49265, "xfrm_state_lookup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xb3e8f935, "xfrm_state_alloc" },
	{ 0x6b21f196, "xfrm_init_state" },
	{ 0x2ba3ccd1, "xfrm_state_insert" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xacdfe229, "__xfrm_state_destroy" },
	{ 0x43323257, "ipv4_redirect" },
	{ 0x38e36658, "ipv4_update_pmtu" },
	{ 0xae3dcfca, "ipcomp_destroy" },
	{ 0x630c5d03, "ipcomp_input" },
	{ 0x85c624a9, "ipcomp_output" },
	{ 0xfc473bd, "xfrm4_rcv" },
	{ 0x16c05666, "xfrm_input" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "06D5E3DCEC23794056480B1");
