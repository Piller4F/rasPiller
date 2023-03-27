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
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xf51c0f66, "hid_compare_device_paths" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x44239691, "_dev_info" },
	{ 0x18e5f27f, "hid_add_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe9ae30fc, "hid_allocate_device" },
	{ 0xce714e14, "hid_destroy_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc023c02, "hid_input_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x762a3fb4, "__hid_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xbad9fd19, "hid_parse_report" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5495392, "hid_debug" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C537");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C713");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");

MODULE_INFO(srcversion, "1EDBA919DEC7B92DE057E86");
