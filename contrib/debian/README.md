
Debian
====================
This directory contains files used to package rogued/rogue-qt
for Debian-based Linux systems. If you compile rogued/rogue-qt yourself, there are some useful files here.

## rogue: URI support ##


rogue-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install rogue-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your rogue-qt binary to `/usr/bin`
and the `../../share/pixmaps/rogue128.png` to `/usr/share/pixmaps`

rogue-qt.protocol (KDE)

