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
	{ 0x4ab037cb, "genphy_resume" },
	{ 0xc64861b1, "genphy_suspend" },
	{ 0x794391fd, "phy_drivers_unregister" },
	{ 0xeeaaf56b, "phy_drivers_register" },
	{ 0x9594a883, "phy_resolve_aneg_linkmode" },
	{ 0x6f3cbed, "genphy_read_lpa" },
	{ 0x8d8ff229, "mdiobus_read" },
	{ 0xbf068305, "genphy_update_link" },
	{ 0x9d8d141d, "phy_start_aneg" },
	{ 0xdf108eea, "phy_init_hw" },
	{ 0x4c1b6591, "genphy_soft_reset" },
	{ 0xfd66d501, "mdiobus_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");

MODULE_INFO(srcversion, "9C5FBC9EFAE0F3C543A5C0D");
