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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x6e25d87d, "v4l2_ctrl_handler_log_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:saa7115_auto");
MODULE_ALIAS("i2c:saa7111");
MODULE_ALIAS("i2c:saa7113");
MODULE_ALIAS("i2c:saa7114");
MODULE_ALIAS("i2c:saa7115");
MODULE_ALIAS("i2c:saa7118");
MODULE_ALIAS("i2c:gm7113c");

MODULE_INFO(srcversion, "8E6C97A9BB0C9BE0164F26E");
