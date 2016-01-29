#############################################################################
# Makefile for building: game
# Generated by qmake (3.0) (Qt 5.2.1)
# Project:  game.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt5/bin/qmake -o Makefile game.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = 
CFLAGS        = -m64 -pipe -O2 -Wall -W -fPIE $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++11 -O2 -Wall -W -fPIE $(DEFINES)
INCPATH       = -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS) -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt5/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		utils.cpp \
		Resources.cpp \
		Game.cpp \
		Scene.cpp \
		SceneMenu.cpp \
		ScenePlayable.cpp \
		DungeonScene.cpp \
		LightedDungeonScene.cpp \
		Map.cpp \
		Background.cpp \
		Tile.cpp \
		SceneChanger.cpp \
		Player.cpp \
		Enemy.cpp \
		Octorok.cpp \
		Weapon.cpp \
		RockProjectile.cpp \
		Projectile.cpp \
		Collisionable.cpp \
		Prop.cpp \
		Object.cpp \
		Fairy.cpp \
		Effect.cpp \
		Light.cpp \
		LightSprite.cpp \
		DungeonDoor.cpp \
		GUI/Button.cpp \
		GUI/Container.cpp \
		GUI/Frame.cpp \
		GUI/ImgButton.cpp \
		GUI/ImgTextButton.cpp \
		GUI/Label.cpp \
		GUI/Layout.cpp \
		GUI/TextButton.cpp \
		GUI/VLayout.cpp \
		GUI/HLayout.cpp \
		GUI/Widget.cpp \
		TextBox.cpp \
		SoundManager.cpp \
		DataManager.cpp \
		StatsBar.cpp \
		FairyShoot.cpp \
		TextBoxManager.cpp \
		InputManager.cpp \
		Speaker.cpp \
		EnemyPenguin.cpp \
		SceneCutScene.cpp 
OBJECTS       = main.o \
		utils.o \
		Resources.o \
		Game.o \
		Scene.o \
		SceneMenu.o \
		ScenePlayable.o \
		DungeonScene.o \
		LightedDungeonScene.o \
		Map.o \
		Background.o \
		Tile.o \
		SceneChanger.o \
		Player.o \
		Enemy.o \
		Octorok.o \
		Weapon.o \
		RockProjectile.o \
		Projectile.o \
		Collisionable.o \
		Prop.o \
		Object.o \
		Fairy.o \
		Effect.o \
		Light.o \
		LightSprite.o \
		DungeonDoor.o \
		Button.o \
		Container.o \
		Frame.o \
		ImgButton.o \
		ImgTextButton.o \
		Label.o \
		Layout.o \
		TextButton.o \
		VLayout.o \
		HLayout.o \
		Widget.o \
		TextBox.o \
		SoundManager.o \
		DataManager.o \
		StatsBar.o \
		FairyShoot.o \
		TextBoxManager.o \
		InputManager.o \
		Speaker.o \
		EnemyPenguin.o \
		SceneCutScene.o
DIST          = /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/shell-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		game.pro \
		game.pro
QMAKE_TARGET  = game
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = game


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: game.pro /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/shell-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		game.pro
	$(QMAKE) -o Makefile game.pro
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/shell-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
game.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile game.pro

qmake_all: FORCE

dist: 
	@test -d .tmp/game1.0.0 || mkdir -p .tmp/game1.0.0
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/game1.0.0/ && (cd `dirname .tmp/game1.0.0` && $(TAR) game1.0.0.tar game1.0.0 && $(COMPRESS) game1.0.0.tar) && $(MOVE) `dirname .tmp/game1.0.0`/game1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/game1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main.o: main.cpp Game.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		SceneMenu.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		Fairy.hpp \
		Effect.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/HLayout.hpp \
		FairyShoot.hpp \
		LightedDungeonScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

utils.o: utils.cpp utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o utils.o utils.cpp

Resources.o: Resources.cpp Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Resources.o Resources.cpp

Game.o: Game.cpp Game.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		SceneMenu.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		Fairy.hpp \
		Effect.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/HLayout.hpp \
		FairyShoot.hpp \
		LightedDungeonScene.hpp \
		SceneCutScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Game.o Game.cpp

Scene.o: Scene.cpp Scene.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		SceneChanger.hpp \
		Game.hpp \
		Resources.hpp \
		SceneMenu.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		Fairy.hpp \
		Effect.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/HLayout.hpp \
		FairyShoot.hpp \
		LightedDungeonScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Scene.o Scene.cpp

SceneMenu.o: SceneMenu.cpp SceneMenu.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		Game.hpp \
		Resources.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		Fairy.hpp \
		Effect.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/HLayout.hpp \
		FairyShoot.hpp \
		LightedDungeonScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SceneMenu.o SceneMenu.cpp

ScenePlayable.o: ScenePlayable.cpp ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp \
		Game.hpp \
		SceneMenu.hpp \
		DungeonScene.hpp \
		LightedDungeonScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ScenePlayable.o ScenePlayable.cpp

DungeonScene.o: DungeonScene.cpp DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp \
		Game.hpp \
		SceneMenu.hpp \
		LightedDungeonScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DungeonScene.o DungeonScene.cpp

LightedDungeonScene.o: LightedDungeonScene.cpp LightedDungeonScene.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Light.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LightedDungeonScene.o LightedDungeonScene.cpp

Map.o: Map.cpp Map.hpp \
		Prop.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		ScenePlayable.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Map.o Map.cpp

Background.o: Background.cpp Background.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Resources.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Background.o Background.cpp

Tile.o: Tile.cpp Tile.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Resources.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Tile.o Tile.cpp

SceneChanger.o: SceneChanger.cpp SceneChanger.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SceneChanger.o SceneChanger.cpp

Player.o: Player.cpp Player.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Enemy.hpp \
		Weapon.hpp \
		Object.hpp \
		FairyShoot.hpp \
		RockProjectile.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Player.o Player.cpp

Enemy.o: Enemy.cpp Enemy.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Weapon.hpp \
		Object.hpp \
		ScenePlayable.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Enemy.o Enemy.cpp

Octorok.o: Octorok.cpp Octorok.hpp \
		Enemy.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		ScenePlayable.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Octorok.o Octorok.cpp

Weapon.o: Weapon.cpp Weapon.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Fairy.hpp \
		Effect.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Weapon.o Weapon.cpp

RockProjectile.o: RockProjectile.cpp RockProjectile.hpp \
		Weapon.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RockProjectile.o RockProjectile.cpp

Projectile.o: Projectile.cpp Projectile.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Resources.hpp \
		LightSprite.hpp \
		Light.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Projectile.o Projectile.cpp

Collisionable.o: Collisionable.cpp Collisionable.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Collisionable.o Collisionable.cpp

Prop.o: Prop.cpp Prop.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Prop.o Prop.cpp

Object.o: Object.cpp Object.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Resources.hpp \
		Collisionable.hpp \
		Player.hpp \
		Map.hpp \
		Prop.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Scene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Object.o Object.cpp

Fairy.o: Fairy.cpp Fairy.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Effect.hpp \
		Resources.hpp \
		Collisionable.hpp \
		Enemy.hpp \
		Map.hpp \
		Prop.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp \
		Weapon.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Fairy.o Fairy.cpp

Effect.o: Effect.cpp Effect.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Effect.o Effect.cpp

Light.o: Light.cpp Light.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Light.o Light.cpp

LightSprite.o: LightSprite.cpp LightSprite.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Light.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LightSprite.o LightSprite.cpp

DungeonDoor.o: DungeonDoor.cpp DungeonDoor.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		Resources.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		SceneChanger.hpp \
		Fairy.hpp \
		Effect.hpp \
		Scene.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		FairyShoot.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DungeonDoor.o DungeonDoor.cpp

Button.o: GUI/Button.cpp GUI/Button.hpp \
		GUI/Widget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Button.o GUI/Button.cpp

Container.o: GUI/Container.cpp GUI/Container.hpp \
		GUI/Widget.hpp \
		GUI/Layout.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Container.o GUI/Container.cpp

Frame.o: GUI/Frame.cpp GUI/Frame.hpp \
		GUI/Widget.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Frame.o GUI/Frame.cpp

ImgButton.o: GUI/ImgButton.cpp GUI/ImgButton.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Button.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ImgButton.o GUI/ImgButton.cpp

ImgTextButton.o: GUI/ImgTextButton.cpp GUI/ImgTextButton.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Button.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ImgTextButton.o GUI/ImgTextButton.cpp

Label.o: GUI/Label.cpp GUI/Label.hpp \
		GUI/Widget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Label.o GUI/Label.cpp

Layout.o: GUI/Layout.cpp GUI/Layout.hpp \
		GUI/Widget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Layout.o GUI/Layout.cpp

TextButton.o: GUI/TextButton.cpp GUI/TextButton.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Button.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TextButton.o GUI/TextButton.cpp

VLayout.o: GUI/VLayout.cpp GUI/VLayout.hpp \
		GUI/Layout.hpp \
		GUI/Widget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o VLayout.o GUI/VLayout.cpp

HLayout.o: GUI/HLayout.cpp GUI/HLayout.hpp \
		GUI/Layout.hpp \
		GUI/Widget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o HLayout.o GUI/HLayout.cpp

Widget.o: GUI/Widget.cpp GUI/Widget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Widget.o GUI/Widget.cpp

TextBox.o: TextBox.cpp TextBox.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TextBox.o TextBox.cpp

SoundManager.o: SoundManager.cpp SoundManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SoundManager.o SoundManager.cpp

DataManager.o: DataManager.cpp DataManager.hpp \
		utils.hpp \
		windirent.h \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DataManager.o DataManager.cpp

StatsBar.o: StatsBar.cpp StatsBar.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o StatsBar.o StatsBar.cpp

FairyShoot.o: FairyShoot.cpp FairyShoot.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Weapon.hpp \
		Collisionable.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o FairyShoot.o FairyShoot.cpp

TextBoxManager.o: TextBoxManager.cpp TextBoxManager.hpp \
		TextBox.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TextBoxManager.o TextBoxManager.cpp

InputManager.o: InputManager.cpp InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InputManager.o InputManager.cpp

Speaker.o: Speaker.cpp Speaker.hpp \
		Prop.hpp \
		Resources.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Collisionable.hpp \
		TextBoxManager.hpp \
		TextBox.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Speaker.o Speaker.cpp

EnemyPenguin.o: EnemyPenguin.cpp EnemyPenguin.hpp \
		Enemy.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Map.hpp \
		Prop.hpp \
		Resources.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		SceneChanger.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EnemyPenguin.o EnemyPenguin.cpp

SceneCutScene.o: SceneCutScene.cpp SceneCutScene.hpp \
		utils.hpp \
		windirent.h \
		DataManager.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		GUI/Label.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/Layout.hpp \
		GUI/VLayout.hpp \
		GUI/ImgButton.hpp \
		GUI/TextButton.hpp \
		GUI/ImgTextButton.hpp \
		Game.hpp \
		Resources.hpp \
		SceneMenu.hpp \
		DungeonScene.hpp \
		ScenePlayable.hpp \
		Map.hpp \
		Prop.hpp \
		Collisionable.hpp \
		Tile.hpp \
		Speaker.hpp \
		Background.hpp \
		DungeonDoor.hpp \
		Fairy.hpp \
		Effect.hpp \
		Enemy.hpp \
		Octorok.hpp \
		RockProjectile.hpp \
		Weapon.hpp \
		EnemyPenguin.hpp \
		Player.hpp \
		Projectile.hpp \
		LightSprite.hpp \
		Light.hpp \
		TextBoxManager.hpp \
		TextBox.hpp \
		Object.hpp \
		StatsBar.hpp \
		GUI/HLayout.hpp \
		FairyShoot.hpp \
		LightedDungeonScene.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SceneCutScene.o SceneCutScene.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

