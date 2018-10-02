//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct NSMutableDictionary {
    Class _field1;
};

struct _CSArchitecture {
    int cpu_type;
    int cpu_subtype;
};

struct _CSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

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

struct instrs_cycles_snapshot {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct micro_snapshot {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned char _field5;
    unsigned short _field6;
};

struct netfs_status {
    unsigned int _field1;
    char _field2[512];
    unsigned int _field3;
    unsigned int _field4;
    unsigned long long _field5[0];
};

struct os_activity_breadcrumb_s {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    char *_field6;
};

struct os_activity_create_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    unsigned long long _field11;
    unsigned long long _field12;
};

struct os_activity_loss_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned int _field12;
};

struct os_activity_statedump_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    unsigned long long _field11;
};

struct os_activity_stream_activity_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
};

struct os_activity_stream_common_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct os_activity_stream_common_with_name_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
};

struct os_activity_stream_entry_s {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    unsigned long long _field6;
    unsigned long long _field7;
    union {
        struct os_activity_stream_common_s _field1;
        struct os_activity_stream_common_with_name_s _field2;
        struct os_activity_create_s _field3;
        struct os_activity_transition_s _field4;
        struct os_log_message_s _field5;
        struct os_trace_message_s _field6;
        struct os_activity_useraction_s _field7;
        struct os_activity_statedump_s _field8;
        struct os_activity_timesync_s _field9;
        struct os_activity_loss_s _field10;
        struct os_activity_breadcrumb_s _field11;
        struct os_activity_stream_activity_s _field12;
        struct os_trace_message_s _field13;
    } _field8;
};

struct os_activity_timesync_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned char _field10[16];
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned char _field14;
};

struct os_activity_transition_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned long long _field10;
};

struct os_activity_useraction_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    _Bool _field11;
};

struct os_log_message_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    char *_field11;
    unsigned long long _field12;
    char *_field13;
    unsigned long long _field14;
    char *_field15;
    char *_field16;
    unsigned int _field17;
    unsigned char _field18;
    _Bool _field19;
    unsigned long long _field20;
    char *_field21;
    unsigned char _field22;
    unsigned char _field23;
    char *_field24;
};

struct os_trace_message_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    void *_field11;
    unsigned long long _field12;
    id _field13;
};

struct pa_stack_frame {
    unsigned long long _field1;
    char _field2;
};

struct stack_snapshot_frame32 {
    unsigned int _field1;
    unsigned int _field2;
};

struct stack_snapshot_frame64 {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct stackshot_thread_waitinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned char _field4;
};

struct task_delta_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
};

struct task_snapshot {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned char _field6[16];
    unsigned long long _field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    unsigned int _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    char _field17[17];
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25[4];
    unsigned long long _field26[4];
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    unsigned long long _field30;
    unsigned long long _field31;
    unsigned long long _field32;
    unsigned long long _field33;
    unsigned long long _field34;
    unsigned int _field35;
};

struct task_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    int _field15;
    char _field16[32];
};

struct thread_delta_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    short _field7;
    short _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
};

struct thread_delta_snapshot_v3 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    short _field7;
    short _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

struct thread_snapshot {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    char _field13;
    char _field14;
    char _field15;
    char _field16;
    char _field17;
    char _field18[3];
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23[4];
    unsigned long long _field24[4];
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    unsigned long long _field30;
    unsigned long long _field31;
    unsigned long long _field32;
    unsigned long long _field33;
    unsigned long long _field34;
    char _field35[64];
};

struct thread_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned int _field12;
    unsigned int _field13;
    short _field14;
    short _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
};

struct thread_snapshot_v4 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned int _field12;
    unsigned int _field13;
    short _field14;
    short _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
};

struct timeval {
    long long _field1;
    int _field2;
};

struct timezone {
    int _field1;
    int _field2;
};

struct trace_point {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    struct timeval _field9;
    char *_field10;
    char *_field11;
    int _field12;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    long long _field4;
    unsigned int _field5;
    unsigned int _field6;
} CDStruct_8e6a935a;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
    char _field4;
    unsigned long long _field5;
    long long _field6;
} CDStruct_a7511cde;

typedef struct {
    unsigned long long _field1;
    double _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_55f67497;

typedef struct {
    unsigned long long _field1;
    double _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    long long _field5;
    unsigned int _field6;
    unsigned long long _field7;
} CDStruct_727c8412;

typedef struct {
    unsigned long long _field1;
    double _field2;
    unsigned long long _field3;
    long long _field4;
} CDStruct_65528fa5;

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    unsigned int _field4;
} CDStruct_92c9c886;

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    unsigned long long _field4;
} CDStruct_74e41edf;

typedef struct {
    unsigned long long _field1;
    double _field2;
    int _field3;
} CDStruct_fc10d2b4;

typedef struct {
    unsigned long long _field1;
    long long _field2;
    unsigned long long _field3;
} CDStruct_51667c10;

typedef struct {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
} CDStruct_1ca4b1b0;

typedef struct {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    unsigned long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    unsigned long long _field10;
    char _field11;
} CDStruct_cad9ac55;

typedef struct {
    unsigned long long _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    long long _field6;
    long long _field7;
    unsigned long long _field8;
    long long _field9;
    char _field10;
    char _field11;
    char _field12;
    char _field13;
    double _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    struct _CSArchitecture _field17;
    double _field18;
    char _field19;
} CDStruct_837e78c1;

