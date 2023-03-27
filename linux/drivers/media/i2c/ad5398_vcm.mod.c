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
	{ 0xe512e240, "regulator_unregister_notifier" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x9b2a11aa, "regulator_register_notifier" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
};

MODULE_INFO(depends, "v4l2-async,mc,videodev");

MODULE_ALIAS("of:N*T*Cadi,ad5398");
MODULE_ALIAS("of:N*T*Cadi,ad5398C*");
MODULE_ALIAS("i2c:ad5398");

MODULE_INFO(srcversion, "33C338E84074529111F438D");
