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
	{ 0x27339f09, "param_ops_int" },
	{ 0x3ebd70ca, "v4l2_ctrl_subdev_log_status" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e604e58, "au8522_readreg" },
	{ 0xf58088f0, "au8522_writereg" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xc89e8515, "au8522_get_state" },
	{ 0x55f20e6d, "au8522_release_state" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "23150F46184763180E1D7C2");
