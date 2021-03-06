#ifndef __COMMOM_H__
#define __COMMON_H__

#define BUFFER_LEN_MAX 4096
#define SBUFFER_LEN_MAX 512

#define HERE_SHOULD_NEVER_HAPPEN "Here should never happen"

/* built-in commands */
#define VERSION_COMMAND "VERSION"
#define API_KEY_COMMAND "API_KEY"
#define UPDATE_COMMAND "UPDATE"
#define RESET_COMMAND "RESET"
#define QUIT_COMMAND "QUIT"

/* meta-data commands */
#define DATA_NAME_COMMAND "DATA_NAME"
#define DATA_LENGTH_COMMAND "DATA_LENGTH"

/* execution commands */
#define REGISTER_COMMAND "REGISTER"


/* configurable */
#define PROJECT_NAME "shukp"
#define VERSION "0.01"
#define API_KEY "2ce99f5c-9a01-4c24-95e6-1515eaf58e56"

#define RAM_DIR_PATH "/dev/shm"
#define TEMP_DIR_PATH "/tmp"
#define SERVER_INSTALL_PATH "/usr/local/bin/server"
#define CLIENT_INSTALL_PATH "/usr/local/bin/client"
#define SERVER_LOG_PATH "/tmp/server.log"
#define EXTERNAL_COMMAND_PATH "/usr/local/bin/external_commands"

#define COMMON_ACCOUNT_USERNAME "shukp"
#define COMMON_ACCOUNT_PUBLIC_KEY "ssh-rsa AAAAB3NzaC1yc2EAAAABIwAAAQEAo6Fmbu7rod71oLaM29tQdoyJfp8LyNtrdN6ieWx03ceeC58K/KaTFsvTyLV7jd1zuRbK/I9Lo4gQ8gsGg1TsCQ+g65RW2/Ypu4BCq0oA+GLv6Q22L+6acYzsb9TCQGEjJQ5OxWNko6RVj3rZae9dY7Enhdj1ROHuPWpg8+3qBQ9NXnI8b2v7/vuhlZh5JRO/stcHJweYr82zHWlpZj4YmWsTz6SgpJPDfVX70U1iSskfbtLoz40M8HRMxpbLJoIPU5x1LtR2deM/N17uoQPw6mIjGK0j0tRInAUuD8sslx3PddILe3vFQJsuE961OsgSqatrBSA59nhoP29SPFavZw=="
#define COMMON_ACCOUNT_PRIVATE_KEY "-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEAo6Fmbu7rod71oLaM29tQdoyJfp8LyNtrdN6ieWx03ceeC58K\n/KaTFsvTyLV7jd1zuRbK/I9Lo4gQ8gsGg1TsCQ+g65RW2/Ypu4BCq0oA+GLv6Q22\nL+6acYzsb9TCQGEjJQ5OxWNko6RVj3rZae9dY7Enhdj1ROHuPWpg8+3qBQ9NXnI8\nb2v7/vuhlZh5JRO/stcHJweYr82zHWlpZj4YmWsTz6SgpJPDfVX70U1iSskfbtLo\nz40M8HRMxpbLJoIPU5x1LtR2deM/N17uoQPw6mIjGK0j0tRInAUuD8sslx3PddIL\ne3vFQJsuE961OsgSqatrBSA59nhoP29SPFavZwIBIwKCAQEAh5RcMAfKjW+YUfZX\ndFahwU/fo23WkHtKaCYu2aMBvxMcjUlDniOecflXtO4ki3z5fBozKQkEKGltIFJH\nOZ4iqGwI/bVsil4/1d9NLtbq3G87z7rnaYsvgqf3GtTbdyvp64DiLoWN5qy76+ly\nUHXfql+Vxqxzc5ag080rwsxxcebIVS+BxCKR34kd6OYS2n9tC9DVxejMblyVTMq0\n920f7LL/KbubORdXQyz4JS70UVBIhSxTmyVF7eUxZmg69sZNwoTRZYWxZX7JjmpL\nMKOfNLUY5P4G6yvu2Kl4okdIjXXfqqWdmdWYzPct04E1TOCSpeYfw2I6cNYVxdkb\nPfqi4wKBgQDPqU1+b8oRwauL4Nxm5T4Mhqf2TR/h9P62l0LfPtU1H4riogZK8NeV\nNoPFmHwlOXa0ffdGYFpV9kYwQxoPXqvQrvEW5+raEsi1JnY6G+aRQNSdkwyJoPo4\nB9MYzbau5f4pRBtyj0ZY8qR7by9mMeNFb6QVRuprHFfG6mxOgr3npQKBgQDJuEOu\noCi+mXWiKOQwdex2L5QggR4ywtrVk2bb4k8eDMGKdtZlZgEdPF4lOBQn21KgqGhY\nA2bVVqa9lSI/ptVB5gsSG9V/qtD36XE/SmmN3LL0t+DGz2c/w6wrY751k6MLAqgY\ngf6rD/iEKdWTHt6X0ujFeiBcLqKqXWbrrJZtGwKBgQCIdpICoTulRMEwCMtZj1Sp\nJUnNvac8tvCGneodrPKB/sj7VIfK2Mgu2q5dRvJ+3J52m+ujRqHDdfOcDtacYsit\ntMpQ4Yuz4HVD13JDcWuhR9wtCNxacRl1RvhvYpye0acFLMGUbMfUDSpCfEO4L2l2\nxbT4CgfCutqYqK2Sra/+nwKBgGH6agRca4/G4V1kUZPhgXs7rljuQd4kISXogmrN\nAdtlSBAN1dl6sBWDuLL9+ylNRWP6Bsup4X2QfN+9dwj5QwLAMUNPWRIfxJWr5ox0\nmatN8IV94jSt4bFByKdcVTHLXdIl3J4wgwKhW3NkxtJuFFhfIJpuhL8PVlK/pwTB\niuSJAoGBALs6YpjsUAEkzxEB3Dcp0Ylo3QV/SkYL9cE0hrwgy/09956vtK7mXTWO\napN9lsc53D/aWZ4OPNqFSajF5jWzuuDHfEqhyynDlaHhbUXuQoaOdEXEWi26Yas1\nBgGzVxTCtnrduZe6jX8b8xCTyKqr+/lxnqLkQaH1hzzZxHhv5WPr\n-----END RSA PRIVATE KEY-----"


int create_directory(const char * directory);
int validInteger(const char * int_string);

#endif

