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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0x92997ed8, "_printk" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:ov7640");

MODULE_INFO(srcversion, "6E6553808C92331C921213F");
