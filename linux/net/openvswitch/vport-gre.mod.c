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
	{ 0xe5630b95, "__ovs_vport_ops_register" },
	{ 0x341d7aad, "__dev_queue_xmit" },
	{ 0x6dbf751, "ovs_vport_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5f3a0377, "gretap_fb_dev_create" },
	{ 0x86c98d4d, "dev_change_flags" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x86edfa48, "ovs_netdev_link" },
	{ 0xc573432a, "rtnl_delete_link" },
	{ 0x663a8361, "ovs_vport_free" },
	{ 0x53429707, "ovs_vport_ops_unregister" },
	{ 0xa2cd2f3, "ovs_netdev_tunnel_destroy" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "F2B467BFDE74BE154559F2C");
