/* make wave executable */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __linux__
#include <sys/utsname.h>
#endif

#define OS_LINUX_64BIT "x86_64"
#define OS_WIN_64BIT "PROGRAMFILES(x86)"

int main() {

#if defined __linux__

  struct utsname my_uname;
  if (uname( & my_uname) == 0 && strcmp(OS_LINUX_64BIT, my_uname.machine) == 0) {
    printf("64-bit system detected\n");
    system("runtime/jre_linux64/bin/java --module-path runtime/jre_win64/javafx-sdk-16/lib --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime/bin/wave > /dev/null 2>&1 &");
  } else {
    printf("32-bit system detected\n");
    system("runtime/jre_linux32/bin/java --module-path runtime/jre_win32/javafx-sdk-16/lib --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime/bin/wave > /dev/null 2>&1 &");
  }
  
#endif

#if defined _WIN32 || defined _WIN64

  char * env = getenv(OS_WIN_64BIT);
  if (env != NULL) {
    printf("64-bit system detected\n");
    system("start runtime\\jre_win64\\bin\\javaw.exe --module-path runtime\\jre_win64\\javafx-sdk-16\\lib --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime\\bin\\wave > nul 2>&1 &");
  } else {
    printf("32-bit system detected\n");
    system("start runtime\\jre_win32\\bin\\javaw.exe --module-path runtime\\jre_win32\\javafx-sdk-16\\lib --add-modules javafx.controls,javafx.fxml,javafx.web -jar runtime\\bin\\wave > nul 2>&1 &");
  }

#endif

  return 0;
}
