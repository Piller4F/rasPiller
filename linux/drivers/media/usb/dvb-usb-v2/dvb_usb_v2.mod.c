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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b6fc2a5, "rc_unregister_device" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x52ef1333, "dvb_create_media_graph" },
	{ 0xacd66670, "dvb_frontend_suspend" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0x1ff97ca9, "dvb_frontend_resume" },
	{ 0x2b89adb2, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3457e2a1, "dvb_net_release" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa4235824, "dvb_dmx_swfilter_raw" },
	{ 0x8606f399, "rc_free_device" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x3fe65da2, "dvb_net_init" },
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x6a9f708a, "dvb_dmx_swfilter_204" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "A3219B7B33EB0CE87B87D03");
