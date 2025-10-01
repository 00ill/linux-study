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
	{ 0x570c1267, "input_register_handler" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8d9bb4d2, "kill_fasync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa4f9007c, "input_close_device" },
	{ 0x70c69a78, "cdev_device_del" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x5a9883e, "input_unregister_handle" },
	{ 0x36dc6ece, "put_device" },
	{ 0xb06eee1f, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e687b63, "input_match_device_id" },
	{ 0xdcb764ad, "memset" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe98a713e, "input_unregister_handler" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe0ff878f, "stream_open" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x988e769a, "input_open_device" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x99ed6ef6, "get_device" },
	{ 0xabff194d, "input_class" },
	{ 0x16965a52, "device_initialize" },
	{ 0x6ca668f7, "input_register_handle" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0xcb9c0934, "cdev_device_add" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "CE993111714CE347F7F937D");
