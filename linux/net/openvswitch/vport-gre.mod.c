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
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x6da36d81, "ovs_netdev_tunnel_destroy" },
	{ 0x7c1ae88c, "ovs_vport_ops_unregister" },
	{ 0x44c5cd13, "__ovs_vport_ops_register" },
	{ 0xaa88612, "ovs_vport_free" },
	{ 0x28b222d8, "rtnl_delete_link" },
	{ 0x958f8319, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7e97eb37, "dev_change_flags" },
	{ 0xfc5afc6, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc9ff541, "ovs_vport_alloc" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "B62E520D2C4516FC37B1E5C");
