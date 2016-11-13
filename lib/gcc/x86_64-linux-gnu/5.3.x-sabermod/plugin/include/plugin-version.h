#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   5
#define GCCPLUGIN_VERSION_MINOR   3
#define GCCPLUGIN_VERSION_PATCHLEVEL   5.3.x-sabermod
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "5.3.x-sabermod";
static char datestamp[] = "20160402";
static char devphase[] = "experimental";
static char revision[] = "";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
