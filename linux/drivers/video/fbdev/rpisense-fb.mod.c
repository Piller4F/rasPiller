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
	{ 0xfaa4e9a8, "fb_sys_read" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x653fa646, "fb_sys_write" },
	{ 0x4aecd2c9, "sys_imageblit" },
	{ 0xe959efc0, "sys_copyarea" },
	{ 0xc36f103a, "sys_fillrect" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92997ed8, "_printk" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9679f83b, "register_framebuffer" },
	{ 0xfd718ca0, "fb_deferred_io_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae6e839b, "framebuffer_alloc" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xea67229b, "rpisense_get_dev" },
	{ 0x5772dde7, "rpisense_block_write" },
	{ 0x999e8297, "vfree" },
	{ 0xfdf2e6db, "framebuffer_release" },
	{ 0x90e76313, "fb_deferred_io_cleanup" },
	{ 0x4aae3e5d, "unregister_framebuffer" },
};

MODULE_INFO(depends, "fb_sys_fops,sysimgblt,syscopyarea,sysfillrect,rpisense-core");

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "BA8465552677687B0951966");
