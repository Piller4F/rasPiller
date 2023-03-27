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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xfaa4e9a8, "fb_sys_read" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x825e7cc5, "backlight_device_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9679f83b, "register_framebuffer" },
	{ 0x6b175961, "pwm_get" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xfd718ca0, "fb_deferred_io_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xaa6da2f1, "device_property_read_u8_array" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xae6e839b, "framebuffer_alloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc36f103a, "sys_fillrect" },
	{ 0xe959efc0, "sys_copyarea" },
	{ 0x4aecd2c9, "sys_imageblit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3a472801, "pwm_apply_state" },
	{ 0xf333f55c, "pwm_put" },
	{ 0xfdf2e6db, "framebuffer_release" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x90e76313, "fb_deferred_io_cleanup" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x4aae3e5d, "unregister_framebuffer" },
	{ 0x24f393f0, "backlight_device_unregister" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
};

MODULE_INFO(depends, "fb_sys_fops,backlight,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "DCE343CC59270E3FBF56BA5");
