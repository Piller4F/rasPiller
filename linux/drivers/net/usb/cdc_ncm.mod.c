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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba7a88df, "ethtool_op_get_ts_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0xe5d5c9d1, "usbnet_link_change" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1c1ba8fc, "usbnet_get_link_ksettings_internal" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x9760f20, "usbnet_update_max_qlen" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x681d8fba, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd17f6bb8, "usbnet_nway_reset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0xd7b2180f, "usbnet_get_drvinfo" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x85a9bdc5, "usbnet_get_link" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0x44239691, "_dev_info" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd4c0debd, "cdc_parse_cdc_header" },
	{ 0x1f54cb6, "usbnet_get_ethernet_addr" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x5991d21d, "usbnet_get_msglevel" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd8db473b, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xd0c4fb08, "usbnet_cdc_update_filter" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x57d2679, "usbnet_manage_power" },
	{ 0x1ee6ef1e, "usbnet_write_cmd" },
	{ 0xfed896, "usbnet_set_msglevel" },
	{ 0x8ec78da, "usbnet_set_rx_mode" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "17C700A69DC1019D5872541");
