cmd_net/ipv4/tcp_htcp.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/tcp_htcp.ko net/ipv4/tcp_htcp.o net/ipv4/tcp_htcp.mod.o;  true
