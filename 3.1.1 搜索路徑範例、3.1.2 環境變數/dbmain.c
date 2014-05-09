#include <stdio.h>
#include <gdbm.h>

int
main (void)
{
  GDBM_FILE dbf;
  datum key = { "測試 key", 7 };     /* key, length */
  datum value = { "測試值(value)", 9 }; /* value, length */

  printf ("正在儲存 key-value 配對(pair)……");
  dbf = gdbm_open ("測試用", 0, GDBM_NEWDB, 0644, 0);
  gdbm_store (dbf, key, value, GDBM_INSERT);
  gdbm_close (dbf);
  printf ("完成。\n");
  return 0;
}
