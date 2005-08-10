int dm_prereq (char *, int, int, int);
int dm_simplecmd (int, const char *);
int dm_addmap (int, const char *, const char *, const char *,
	       unsigned long long);
int dm_map_present (char *);
int dm_get_map(char *, unsigned long long *, char *);
int dm_get_status(char *, char *);
int dm_type(char *, char *);
int dm_flush_map (char *, char *);
int dm_flush_maps (char *);
int dm_fail_path(char * mapname, char * path);
int dm_reinstate(char * mapname, char * path);
int dm_switchgroup(char * mapname, int index);
int dm_enablegroup(char * mapname, int index);
int dm_disablegroup(char * mapname, int index);
int dm_get_maps (vector mp, char * type);
int dm_geteventnr (char *name);
int dm_get_minor (char *name);
char * dm_mapname(int major, int minor);
int dm_remove_partmaps (char * mapname);

#if 0
int dm_rename (char * old, char * new);
#endif
