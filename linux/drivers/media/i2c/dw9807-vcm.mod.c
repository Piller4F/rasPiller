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
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xa14764e4, "i2c_of_match_device" },
	{ 0x9b2a11aa, "regulator_register_notifier" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xe512e240, "regulator_unregister_notifier" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "v4l2-async,mc,videodev");

MODULE_ALIAS("of:N*T*Cdongwoon,dw9807-vcm");
MODULE_ALIAS("of:N*T*Cdongwoon,dw9807-vcmC*");
MODULE_ALIAS("of:N*T*Cdongwoon,dw9817-vcm");
MODULE_ALIAS("of:N*T*Cdongwoon,dw9817-vcmC*");

MODULE_INFO(srcversion, "6BD43A107A22618FE55C6A9");
