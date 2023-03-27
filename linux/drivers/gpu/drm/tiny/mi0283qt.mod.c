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
	{ 0xe0cc4550, "drm_release" },
	{ 0x2fa803a0, "drm_open" },
	{ 0xd6168557, "drm_gem_mmap" },
	{ 0x9cb2b91b, "drm_compat_ioctl" },
	{ 0xd85dd0b7, "drm_ioctl" },
	{ 0x7a231395, "drm_poll" },
	{ 0x8e66549b, "drm_read" },
	{ 0x292268, "noop_llseek" },
	{ 0x2386dbf1, "mipi_dbi_pipe_update" },
	{ 0xc7851205, "mipi_dbi_pipe_disable" },
	{ 0x894a1895, "drm_gem_cma_dumb_create" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0xb22534a9, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0x84e21903, "mipi_dbi_debugfs_init" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xa9f34c05, "drm_fbdev_generic_setup" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0xe8e4f64d, "drm_mode_config_reset" },
	{ 0xe717b060, "mipi_dbi_dev_init" },
	{ 0x8ae12565, "mipi_dbi_spi_init" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x44fa4fc2, "devm_of_find_backlight" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x5499da2, "mipi_dbi_enable_flush" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f40a6e6, "mipi_dbi_command_stackbuf" },
	{ 0x783bb840, "mipi_dbi_poweron_conditional_reset" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x39ce7ce, "drm_dev_enter" },
	{ 0x7ba27b50, "drm_dev_unplug" },
	{ 0xe2dd2a55, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm,drm_mipi_dbi,drm_kms_helper,backlight");

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "0F2F5C4FB1AB6E5F82638EF");
