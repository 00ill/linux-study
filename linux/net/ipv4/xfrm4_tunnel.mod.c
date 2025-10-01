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
	{ 0xd50c1f64, "xfrm4_tunnel_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x912bab41, "xfrm_unregister_type" },
	{ 0xe3f7e2ea, "xfrm4_tunnel_deregister" },
	{ 0x16c05666, "xfrm_input" },
	{ 0x33b58322, "skb_push" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "91724CE11C02690E3FC1F61");
