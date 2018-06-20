//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Mutex;

struct NSArray {
    Class _field1;
};

struct Options {
    int _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    long long _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
};

struct Prog;

struct RE2 {
    struct Mutex *_field1;
    struct StringPiece _field2;
    struct Options _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    _Bool _field5;
    struct Regexp *_field6;
    struct Regexp *_field7;
    struct Prog *_field8;
    struct Prog *_field9;
    _Bool _field10;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field11;
    int _field12;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field13;
    int _field14;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> *_field15;
    struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char>>>> *_field16;
};

struct Regexp;

struct SGDSuggestManagerCTSCriteriaState {
    char hasItemsHighPriority;
    char hasItemsLowPriority;
};

struct SGHistorySharedData {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
};

struct SGMContactDetailExtractionOutcome_ {
    unsigned long long _field1;
};

struct SGMContactDetailFoundIn_ {
    unsigned long long _field1;
};

struct SGMContactDetailOwner_ {
    unsigned long long _field1;
};

struct SGMContactDetailType_ {
    unsigned long long _field1;
};

struct SGMContactDetailUsedApp_ {
    unsigned long long _field1;
};

struct SGMDocumentType_ {
    unsigned long long _field1;
};

struct SGMEventICSSourceType_ {
    unsigned long long _field1;
};

struct SGMFoundInMailModelType_ {
    unsigned long long _field1;
};

struct SGMFoundInMailSupervisionType_ {
    unsigned long long _field1;
};

struct SGMSelfIdModelType_ {
    unsigned long long _field1;
};

struct SGMutexSynchronizedObject<SGHistorySharedData> {
    struct SGHistorySharedData *_field1;
    struct _opaque_pthread_mutex_t _field2;
};

struct SGMutexSynchronizedPtr<SGHistorySharedData> {
    struct SGMutexSynchronizedObject<SGHistorySharedData> *_field1;
};

struct SGUnixTimestamp_ {
    double secondsFromUnixEpoch;
};

struct StringPiece {
    char *_field1;
    int _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlDoc;

struct _xmlHashTable;

struct _xmlNode;

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlValidState;

struct adler32_t {
    unsigned long long _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct graph_t {
    unsigned int _field1;
    unsigned int _field2;
    struct _vertex_t *_field3;
};

struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char>>>>;

struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>>;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned short _field2;
    char _field3[3];
} CDStruct_e59a5d79;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :8;
    unsigned int :20;
} CDStruct_a2e78aaa;

typedef struct {
    int _field1;
    int _field2;
    unsigned int _field3;
} CDStruct_beb4cc23;

typedef struct {
    struct {
        unsigned short bom;
        unsigned short tag;
    } _featureType;
    char hasInhumanHeaders;
    char inhumanEmailAddress;
    char inhumanAuthorName;
    char inhumanBody;
    char isTemplate;
} CDStruct_b2968299;

typedef struct {
    struct {
        unsigned short _field1;
        unsigned short _field2;
    } _field1;
    int _field2;
    int _field3;
    int _field4;
    char _field5;
    char _field6;
    char _field7;
    char _field8;
    char _field9;
    float _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    char _field16;
} CDStruct_9bb40f6c;

// Ambiguous groups
typedef struct {
    unsigned short _field1;
    unsigned short _field2;
} CDStruct_d65e47c4;

typedef struct SGMutexSynchronizedPtr<SGHistorySharedData> {
    struct SGMutexSynchronizedObject<SGHistorySharedData> *_field1;
} SGMutexSynchronizedPtr_22985514;

#pragma mark Typedef'd Unions

typedef union {
    unsigned long long _field1;
    union {
        unsigned int _field1;
        unsigned int _field2;
    } _field2;
} CDUnion_e7c9147b;

