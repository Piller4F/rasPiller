#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb692785d, "dvb_module_probe" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe1bfdd9d, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b4dd2cb, "cx2341x_fill_defaults" },
	{ 0xdd64e639, "strscpy" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xe1fe1432, "cx2341x_log_status" },
	{ 0x3457e2a1, "dvb_net_release" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x28240e61, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x193dc230, "v4l2_s_ctrl" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c289ab5, "device_register" },
	{ 0xd46d47d2, "usb_lock_device_for_reset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdbc5583a, "cx2341x_update" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x6e1fa6b9, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x3fe65da2, "dvb_net_init" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1b52e3b1, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5b9b2b36, "usb_urb_ep_type_check" },
	{ 0xa353aef4, "device_create_file" },
	{ 0xc4015a7, "dvb_module_release" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0x15ac1bd0, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb18f4e29, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x96848186, "scnprintf" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0xb2b9efb7, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
	{ 0xfe97813e, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "dvb-core,videodev,tveeprom,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FED340024B700F381034686");
