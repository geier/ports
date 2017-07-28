--- src/musikcube/Main.cpp.orig	2017-07-28 00:21:14 UTC
+++ src/musikcube/Main.cpp
@@ -98,7 +98,7 @@ int main(int argc, char* argv[]) {
     /* the following allows boost::filesystem to use utf8 on Windows */
     std::locale locale = std::locale();
     std::locale utf8Locale(locale, new boost::filesystem::detail::utf8_codecvt_facet);
-    boost::filesystem::path::imbue(utf8Locale);
+//    boost::filesystem::path::imbue(utf8Locale);
 
     /* ensure we have the correct locale loaded */
     musik::core::i18n::Locale::Instance().Initialize(musik::core::GetApplicationDirectory() + "/locales/");
