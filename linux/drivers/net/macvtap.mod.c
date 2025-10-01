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
	{ 0xbdbcf7e8, "tap_create_cdev" },
	{ 0xa42d469b, "class_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7143a676, "class_unregister" },
	{ 0x66c13dc, "tap_destroy_cdev" },
	{ 0x87c9c9e0, "macvlan_link_register" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x646ffded, "netdev_rx_handler_unregister" },
	{ 0x4002b708, "tap_del_queues" },
	{ 0xa129e053, "macvlan_dellink" },
	{ 0x170425fb, "netdev_update_features" },
	{ 0xc9c464d1, "macvlan_common_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x512bb636, "tap_get_minor" },
	{ 0xc80788af, "tap_queue_resize" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0xa6dd9149, "device_destroy" },
	{ 0x3d4c14da, "tap_free_minor" },
	{ 0x4ae7394, "device_create" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x987c0c99, "rtnl_link_unregister" },
	{ 0xa4d22035, "tap_handle_frame" },
	{ 0x68cdc97, "netdev_rx_handler_register" },
	{ 0x40f9aa15, "macvlan_common_newlink" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1bae0bab, "net_ns_type_operations" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tap,macvlan");


MODULE_INFO(srcversion, "4F7250910963D9DF3D0EC11");
