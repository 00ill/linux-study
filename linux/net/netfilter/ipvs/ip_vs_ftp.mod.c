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
	{ 0xa7aa86ad, "register_pernet_subsys" },
	{ 0xe2c47745, "unregister_ip_vs_app" },
	{ 0x7957b64e, "register_ip_vs_app" },
	{ 0x9f485720, "register_ip_vs_app_inc" },
	{ 0x786ff15d, "unregister_pernet_subsys" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x60abba40, "skb_ensure_writable" },
	{ 0xdcb764ad, "memset" },
	{ 0x9d11793d, "ip_vs_conn_out_get" },
	{ 0x98cf60b3, "strlen" },
	{ 0xcc2bd9b0, "ip_vs_tcp_conn_listen" },
	{ 0x3031016e, "ip_vs_conn_put" },
	{ 0xdf2b2b87, "__nf_nat_mangle_tcp_packet" },
	{ 0x3a020a07, "ip_vs_nfct_expect_related" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73e44def, "ip_vs_conn_new" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa47ebf0, "ip_vs_conn_in_get" },
	{ 0x15b9f3f1, "param_ops_ushort" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "29616A20CEF386F7CC3C17E");
