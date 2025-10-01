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
	{ 0x122c3a7e, "_printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xa42d469b, "class_register" },
	{ 0xb76aa100, "i2c_bus_type" },
	{ 0x777b5d93, "bus_register_notifier" },
	{ 0xe9bbff37, "i2c_for_each_dev" },
	{ 0x7143a676, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad5afda, "i2c_put_adapter" },
	{ 0xfb656668, "i2c_adapter_type" },
	{ 0x27f3cf56, "device_for_each_child" },
	{ 0x82539880, "i2c_verify_client" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x835dd75d, "bus_unregister_notifier" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x16965a52, "device_initialize" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0xcb9c0934, "cdev_device_add" },
	{ 0x36dc6ece, "put_device" },
	{ 0x70c69a78, "cdev_device_del" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6b9b40e, "i2c_get_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xccd654e1, "i2c_smbus_xfer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "00C0C4E4A16B02B72E80647");
