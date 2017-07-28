--- src/musikcube/cursespp/curses_config.h.orig	2017-07-28 00:20:48 UTC
+++ src/musikcube/cursespp/curses_config.h
@@ -45,6 +45,9 @@
 #elif defined __APPLE__
     #include <curses.h>
     #include <panel.h>
+#elif defined __FreeBSD__
+    #include <curses.h>
+    #include <panel.h>
 #else
     #include <ncursesw/curses.h>
     #include <ncursesw/panel.h>
