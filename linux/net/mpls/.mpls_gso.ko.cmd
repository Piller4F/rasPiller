cmd_net/mpls/mpls_gso.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/mpls/mpls_gso.ko net/mpls/mpls_gso.o net/mpls/mpls_gso.mod.o;  true
