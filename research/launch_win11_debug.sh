virsh -c qemu:///system start win11
virsh -c qemu:///system qemu-monitor-command win11 --hmp 'stop'
