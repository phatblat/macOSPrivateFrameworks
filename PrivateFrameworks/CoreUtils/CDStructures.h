//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LogCategory {
    int _field1;
    int _field2;
    char *_field3;
    unsigned int _field4;
    char *_field5;
    char *_field6;
    int _field7;
    struct LogCategory *_field8;
    struct LogOutput *_field9;
    struct LogOutput *_field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned int _field13;
    unsigned int _field14;
    char *_field15;
    struct LogCategoryPrivate *_field16;
};

struct LogCategoryPrivate;

struct LogOutput;

struct NSMutableArray {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSMutableSet {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct buffer {
    char *x;
    unsigned int p;
    unsigned int n;
    int fd;
    CDUnknownFunctionPointerType op;
};

struct cdb {
    char *map;
    int fd;
    unsigned int size;
    unsigned int loop;
    unsigned int khash;
    unsigned int kpos;
    unsigned int hpos;
    unsigned int hslots;
    unsigned int dpos;
    unsigned int dlen;
};

struct cdb_hp;

struct cdb_hplist;

struct cdb_make {
    char bspace[8192];
    char final[2048];
    unsigned int count[256];
    unsigned int start[256];
    struct cdb_hplist *head;
    struct cdb_hp *split;
    struct cdb_hp *hash;
    unsigned int numentries;
    struct buffer b;
    unsigned int pos;
    int fd;
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr {
    unsigned int s_addr;
};

struct iovec {
    void *iov_base;
    unsigned long long iov_len;
};

struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_in6 {
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short sin6_port;
    unsigned int sin6_flowinfo;
    struct in6_addr sin6_addr;
    unsigned int sin6_scope_id;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char bytes[6];
} CDStruct_83abfce7;

#pragma mark Typedef'd Unions

typedef union {
    struct sockaddr sa;
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
} CDUnion_fab80606;

