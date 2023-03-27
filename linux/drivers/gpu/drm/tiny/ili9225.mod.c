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
	{ 0x894a1895, "drm_gem_cma_dumb_create" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0xb22534a9, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x51ba04f9, "drm_dev_printk" },
	{ 0x1d307d95, "mipi_dbi_hw_reset" },
	{ 0x2b6fb543, "drm_atomic_helper_damage_merged" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x7d803c9e, "mipi_dbi_buf_copy" },
	{ 0x39ce7ce, "drm_dev_enter" },
	{ 0xfc654ab4, "drm_fb_cma_get_gem_obj" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd7b7772e, "mipi_dbi_command_buf" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xa9f34c05, "drm_fbdev_generic_setup" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0xe8e4f64d, "drm_mode_config_reset" },
	{ 0xe717b060, "mipi_dbi_dev_init" },
	{ 0x8ae12565, "mipi_dbi_spi_init" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0xd469d29d, "mipi_dbi_spi_transfer" },
	{ 0xb2fc9b62, "mipi_dbi_spi_cmd_max_speed" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x7ba27b50, "drm_dev_unplug" },
	{ 0xe2dd2a55, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm,drm_mipi_dbi,drm_kms_helper");

MODULE_ALIAS("spi:v220hf01a-t");
MODULE_ALIAS("of:N*T*Cvot,v220hf01a-t");
MODULE_ALIAS("of:N*T*Cvot,v220hf01a-tC*");

MODULE_INFO(srcversion, "4630E37955841CFD1C7F9BF");
