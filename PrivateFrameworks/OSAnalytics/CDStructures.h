//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct dyld_uuid_info_64 {
    unsigned long long _field1;
    unsigned char _field2[16];
};

struct jetsam_snapshot {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct memorystatus_kernel_stats _field4;
    unsigned long long _field5;
    struct jetsam_snapshot_entry _field6[0];
};

struct jetsam_snapshot_entry {
    int _field1;
    char _field2[33];
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned char _field6[16];
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    struct timeval64 _field26;
    unsigned long long _field27;
};

struct kcdata_item;

struct kcdata_iter {
    struct kcdata_item *_field1;
    void *_field2;
};

struct memorystatus_kernel_stats {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    char _field17[80];
};

struct stackshot_thread_turnstileinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned long long _field5;
};

struct stackshot_thread_waitinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned char _field4;
};

struct timeval64 {
    long long _field1;
    long long _field2;
};

