#include <sqlite3.h>
#include <stdio.h>

#define DB_FILENAME "students.db"

int main(void)
{
    sqlite3 *ppDb = NULL;
    sqlite3_stmt *stmt = NULL;
    int return_code;

    char *zSqls[] = {
        "CREATE TABLE IF NOT EXISTS 'students' (\
            'name' TEXT,\
            'number' TEXT,\
            'email' TEXT)",
        "SELECT * FROM students",
        NULL
    };


    // Version numbers
    printf("SQLite3 version: %s\n", sqlite3_version);
    printf("SQLite3 library version: %s\n", sqlite3_libversion());


    // Open DB
    return_code = sqlite3_open(DB_FILENAME, &ppDb);

    if (return_code != SQLITE_OK)
    {
        fprintf(stderr, "Error opening database: %s.\n", sqlite3_errmsg(ppDb));

        sqlite3_close(ppDb);
        return 1;
    }


    int i = 0;
    char *zSql = NULL;

    while ((zSql = zSqls[i]) != NULL)
    {
        // Prepare queries
        // Queries must be compiled into byte code before being executed.
        return_code = sqlite3_prepare_v2(ppDb,
                                        zSql,
                                        -1,
                                        &stmt,
                                        0);

        if (return_code != SQLITE_OK)
        {
            fprintf(stderr, "Error compiling query: %s.\n", sqlite3_errmsg(ppDb));

            sqlite3_close(ppDb);
            return 1;
        }

        return_code = sqlite3_step(stmt);

        if (return_code != SQLITE_OK)
        {
            fprintf(stderr, "Error executing query: %s.\n", sqlite3_errmsg(ppDb));

            sqlite3_close(ppDb);
            return 1;
        }

        printf("%s\n", sqlite3_column_text(stmt, 0));

        i++;
    }

    sqlite3_finalize(stmt);
    sqlite3_close(ppDb);
    return 0;
}
