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
	{ 0xbbf4dfbe, "phy_basic_t1_features" },
	{ 0x94e32250, "genphy_handle_interrupt_no_ack" },
	{ 0xff110be2, "genphy_write_mmd_unsupported" },
	{ 0xfb905e9, "genphy_read_mmd_unsupported" },
	{ 0x794391fd, "phy_drivers_unregister" },
	{ 0xeeaaf56b, "phy_drivers_register" },
	{ 0xc45f01e2, "genphy_read_abilities" },
	{ 0xfc3de5fc, "genphy_read_status" },
	{ 0xc598f876, "phy_write_paged" },
	{ 0xbf068305, "genphy_update_link" },
	{ 0xdb5a1045, "phy_restore_page" },
	{ 0x89948c62, "__phy_modify" },
	{ 0xa46544de, "phy_select_page" },
	{ 0x674a154b, "phy_modify_paged" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d0bfa6a, "__genphy_config_aneg" },
	{ 0x42495862, "phy_modify_paged_changed" },
	{ 0xca42775e, "phy_read_paged" },
	{ 0xc64861b1, "genphy_suspend" },
	{ 0x4ab037cb, "genphy_resume" },
	{ 0xfd66d501, "mdiobus_write" },
	{ 0x62aff400, "__mdiobus_read" },
	{ 0x3ec73439, "__mdiobus_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x99a624, "phy_modify" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x4c1b6591, "genphy_soft_reset" },
	{ 0x68f21009, "phy_modify_changed" },
	{ 0xf49af775, "phy_error" },
	{ 0xd2b64fa4, "phy_trigger_machine" },
	{ 0x8d8ff229, "mdiobus_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "13120F15C8BF436EBF7FD12");
