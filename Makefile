#############################################################################
# Makefile for building: game
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  game.pro
# Template: app
# Command: /usr/lib/qt/bin/qmake -o Makefile game.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = 
CFLAGS        = -pipe -O2 -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong -Wall -W -fPIC $(DEFINES)
CXXFLAGS      = -pipe -std=c++11 -g -O2 -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong -Wall -W -fPIC $(DEFINES)
INCPATH       = -I. -I/usr/lib/qt/mkspecs/linux-g++
QMAKE         = /usr/lib/qt/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = game1.0.0
DISTDIR = /home/marcecoll/Projects/Games/GameJam16/.tmp/game1.0.0
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-O1,--sort-common,--as-needed,-z,relro
LIBS          = $(SUBLIBS) -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		utils.cpp \
		Resources.cpp \
		Game.cpp \
		Scene.cpp \
		SceneChanger.cpp \
		Effect.cpp \
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
		SoundManager.cpp \
		InputManager.cpp \
		SceneTest.cpp \
		SceneGame.cpp \
		Background.cpp \
		Player.cpp \
		GlyphContainer.cpp \
		BasicReagents.cpp \
		MoveEffect.cpp \
		GlyphManager.cpp \
		Recipes.cpp 
OBJECTS       = main.o \
		utils.o \
		Resources.o \
		Game.o \
		Scene.o \
		SceneChanger.o \
		Effect.o \
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
		SoundManager.o \
		InputManager.o \
		SceneTest.o \
		SceneGame.o \
		Background.o \
		Player.o \
		GlyphContainer.o \
		BasicReagents.o \
		MoveEffect.o \
		GlyphManager.o \
		Recipes.o
DIST          = /usr/lib/qt/mkspecs/features/spec_pre.prf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/common/sanitize.conf \
		/usr/lib/qt/mkspecs/common/gcc-base.conf \
		/usr/lib/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt/mkspecs/common/g++-base.conf \
		/usr/lib/qt/mkspecs/common/g++-unix.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/linux-g++/qmake.conf \
		/usr/lib/qt/mkspecs/features/spec_post.prf \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		/usr/lib/qt/mkspecs/features/resolve_config.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/testcase_targets.prf \
		/usr/lib/qt/mkspecs/features/exceptions.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		game.pro utils.hpp \
		Resources.cpp \
		Game.cpp \
		Scene.hpp \
		SceneChanger.hpp \
		Effect.hpp \
		GUI/Button.hpp \
		GUI/Container.hpp \
		GUI/ImgButton.hpp \
		GUI/ImgTextButton.hpp \
		GUI/Label.hpp \
		GUI/Layout.hpp \
		GUI/TextButton.hpp \
		GUI/VLayout.hpp \
		GUI/HLayout.hpp \
		GUI/Widget.hpp \
		GUI/Frame.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		SceneTest.hpp \
		SceneGame.hpp \
		Background.h \
		Player.h \
		GlyphContainer.h \
		BasicReagents.hpp \
		MoveEffect.hpp \
		GlyphManager.hpp \
		Recipes.hpp main.cpp \
		utils.cpp \
		Resources.cpp \
		Game.cpp \
		Scene.cpp \
		SceneChanger.cpp \
		Effect.cpp \
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
		SoundManager.cpp \
		InputManager.cpp \
		SceneTest.cpp \
		SceneGame.cpp \
		Background.cpp \
		Player.cpp \
		GlyphContainer.cpp \
		BasicReagents.cpp \
		MoveEffect.cpp \
		GlyphManager.cpp \
		Recipes.cpp
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

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: game.pro /usr/lib/qt/mkspecs/linux-g++/qmake.conf /usr/lib/qt/mkspecs/features/spec_pre.prf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/common/sanitize.conf \
		/usr/lib/qt/mkspecs/common/gcc-base.conf \
		/usr/lib/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt/mkspecs/common/g++-base.conf \
		/usr/lib/qt/mkspecs/common/g++-unix.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/linux-g++/qmake.conf \
		/usr/lib/qt/mkspecs/features/spec_post.prf \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		/usr/lib/qt/mkspecs/features/resolve_config.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/testcase_targets.prf \
		/usr/lib/qt/mkspecs/features/exceptions.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		game.pro
	$(QMAKE) -o Makefile game.pro
/usr/lib/qt/mkspecs/features/spec_pre.prf:
/usr/lib/qt/mkspecs/common/unix.conf:
/usr/lib/qt/mkspecs/common/linux.conf:
/usr/lib/qt/mkspecs/common/sanitize.conf:
/usr/lib/qt/mkspecs/common/gcc-base.conf:
/usr/lib/qt/mkspecs/common/gcc-base-unix.conf:
/usr/lib/qt/mkspecs/common/g++-base.conf:
/usr/lib/qt/mkspecs/common/g++-unix.conf:
/usr/lib/qt/mkspecs/qconfig.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_core.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_network.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/qt/mkspecs/features/qt_functions.prf:
/usr/lib/qt/mkspecs/features/qt_config.prf:
/usr/lib/qt/mkspecs/linux-g++/qmake.conf:
/usr/lib/qt/mkspecs/features/spec_post.prf:
/usr/lib/qt/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt/mkspecs/features/default_pre.prf:
/usr/lib/qt/mkspecs/features/resolve_config.prf:
/usr/lib/qt/mkspecs/features/default_post.prf:
/usr/lib/qt/mkspecs/features/warn_on.prf:
/usr/lib/qt/mkspecs/features/testcase_targets.prf:
/usr/lib/qt/mkspecs/features/exceptions.prf:
/usr/lib/qt/mkspecs/features/yacc.prf:
/usr/lib/qt/mkspecs/features/lex.prf:
game.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile game.pro

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


####### Sub-libraries

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
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		Resources.hpp \
		SceneTest.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

utils.o: utils.cpp utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o utils.o utils.cpp

Resources.o: Resources.cpp Resources.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		GlyphManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Resources.o Resources.cpp

Game.o: Game.cpp Game.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		Resources.hpp \
		SceneTest.hpp \
		SceneGame.hpp \
		Player.h \
		Background.h \
		MoveEffect.hpp \
		GlyphContainer.hpp \
		GlyphManager.hpp \
		Recipes.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Game.o Game.cpp

Scene.o: Scene.cpp Scene.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		SceneChanger.hpp \
		Game.hpp \
		Resources.hpp \
		SceneTest.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Scene.o Scene.cpp

SceneChanger.o: SceneChanger.cpp SceneChanger.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SceneChanger.o SceneChanger.cpp

Effect.o: Effect.cpp Effect.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Effect.o Effect.cpp

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

SoundManager.o: SoundManager.cpp SoundManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SoundManager.o SoundManager.cpp

InputManager.o: InputManager.cpp InputManager.hpp \
		utils.hpp \
		SoundManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InputManager.o InputManager.cpp

SceneTest.o: SceneTest.cpp SceneTest.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		Resources.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SceneTest.o SceneTest.cpp

SceneGame.o: SceneGame.cpp SceneGame.hpp \
		Player.h \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp \
		Scene.hpp \
		SceneChanger.hpp \
		Background.h \
		Resources.hpp \
		MoveEffect.hpp \
		GlyphContainer.hpp \
		GlyphManager.hpp \
		Recipes.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SceneGame.o SceneGame.cpp

Background.o: Background.cpp Background.h \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Background.o Background.cpp

Player.o: Player.cpp Player.h \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Player.o Player.cpp

GlyphContainer.o: GlyphContainer.cpp GlyphContainer.hpp \
		GlyphManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GlyphContainer.o GlyphContainer.cpp

BasicReagents.o: BasicReagents.cpp BasicReagents.hpp \
		GlyphManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BasicReagents.o BasicReagents.cpp

MoveEffect.o: MoveEffect.cpp MoveEffect.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MoveEffect.o MoveEffect.cpp

GlyphManager.o: GlyphManager.cpp GlyphManager.hpp \
		Resources.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GlyphManager.o GlyphManager.cpp

Recipes.o: Recipes.cpp Recipes.hpp \
		GlyphContainer.hpp \
		GlyphManager.hpp \
		Resources.hpp \
		utils.hpp \
		SoundManager.hpp \
		InputManager.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Recipes.o Recipes.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

