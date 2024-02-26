#### Prerequisites
sudo apt-get install autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev

####
sudo apt-get install python3-pyelftools

#### Clone 
$ git clone https://github.com/riscv/riscv-gnu-toolchain

#### Installation (Newlib multilib)
<p align="justify"> To build the Newlib cross-compiler, pick an install path (that is writeable). If you choose, say, /opt/riscv, then add /opt/riscv/bin to your PATH. Then, simply run the following command:</p>

./configure --prefix=/opt/riscv --enable-multilib
<br>make

<p align="justify">The multilib compiler will have the prefix riscv64-unknown-elf- or riscv64-unknown-linux-gnu- but will be able to target both 32-bit and 64-bit systems. It will support the most common -march/-mabi options, which can be seen by using the --print-multi-lib flag on either cross-compiler.</p>
<br><b>example:</b> riscv64-unknown-elf-gcc -print-multi-lib
