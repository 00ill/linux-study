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
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xb3955e11, "flexcop_device_exit" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0x98434f46, "usb_alloc_coherent" },
	{ 0xa728742c, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfacfb8bf, "flexcop_wan_set_speed" },
	{ 0x4da53bef, "flexcop_pass_dmx_packets" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb5e54bee, "flexcop_sram_set_dest" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0xd8f2fce2, "usb_free_coherent" },
	{ 0xfb035c97, "flexcop_device_kmalloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0xfb09bc80, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1e5b8225, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c004dff, "flexcop_sram_ctrl" },
	{ 0x8d267607, "flexcop_device_kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x72f88567, "flexcop_device_initialize" },
	{ 0x473aa263, "usb_kill_urb" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3DA445E9D00519899A57BC9");
