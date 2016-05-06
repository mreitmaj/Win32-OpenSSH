
#ifndef PUBKEYFD_H
#define PUBKEYFD_H

#define PK_REQUEST_ADD "add"
#define PK_REQUEST_LIST "list"
#define PK_REQUEST_REMOVE "remove"
#define PK_REQUEST_REMOVE_ALL "removeall"
#define PK_REQUEST_REMOVE_BY_FP "removebyfp"

#define	SSH_PUBLICKEY_SUCCESS                      0
#define	SSH_PUBLICKEY_ACCESS_DENIED                1
#define	SSH_PUBLICKEY_STORAGE_EXCEEDED             2
#define	SSH_PUBLICKEY_VERSION_NOT_SUPPORTED        3
#define	SSH_PUBLICKEY_KEY_NOT_FOUND                4
#define	SSH_PUBLICKEY_KEY_NOT_SUPPORTED            5
#define	SSH_PUBLICKEY_KEY_ALREADY_PRESENT          6
#define	SSH_PUBLICKEY_GENERAL_FAILURE              7
#define	SSH_PUBLICKEY_REQUEST_NOT_SUPPORTED        8
#define	SSH_PUBLICKEY_ATTRIBUTE_NOT_SUPPORTED      9

int	ssh_add_pubkey(int sock, struct sshkey *key, const char *comment, const char* password);
int	ssh_list_pubkeys(int sock, struct ssh_identitylist **idlp);
int	ssh_remove_pubkey(int sock, struct sshkey *key);
int	ssh_remove_pubkey_by_fp(int sock, const char *fingerprint);
int	ssh_remove_all_pubkeys(int sock);

#endif
