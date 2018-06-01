fakeroot debian/rules clean
#### # quicker build:
#### fakeroot debian/rules binary-headers binary-generic binary-perarch
#### # if you need linux-tools or lowlatency kernel, run instead:
#### fakeroot debian/rules binary
DEB_BUILD_OPTIONS=parallel=16 AUTOBUILD=1 NOEXTRAS=1 fakeroot debian/rules  binary-headers binary-generic binary-perarch

#sudo rm -r /home/charm/ardalan/ubuntu-xenial/debian/linux-image-extra-4.10.0-28-generic/lib/modules/4.10.0-28-generic/kernel/kernel
#rm debian/stamps/stamp-build-generic
#DEB_BUILD_OPTIONS=parallel=16 AUTOBUILD=1 NOEXTRAS=1 fakeroot debian/rules  binary-generic
