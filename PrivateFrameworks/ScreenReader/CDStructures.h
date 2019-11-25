//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int _field1;
    struct OpaqueAEDataStorageType **_field2;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct AudioStreamPacketDescription;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct IONotificationPort;

struct NSArray {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct OpaqueAEDataStorageType;

struct OpaqueAudioConverter;

struct OpaqueAudioFileID;

struct ProcessSerialNumber {
    unsigned int highLongOfPSN;
    unsigned int lowLongOfPSN;
};

struct SCRBrowserInfo {
    unsigned long long totalColumns;
    unsigned long long currColumn;
    unsigned long long totalRows;
    unsigned long long currRow;
};

struct SCRDataCell {
    unsigned long long row;
    unsigned long long column;
};

struct SCRPageInfo {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct SpeechChannelRecord {
    long long _field1[1];
};

struct VoiceSpec {
    unsigned int _field1;
    unsigned int _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct nssound_info {
    struct OpaqueAudioConverter *_field1;
    struct AudioBuffer _field2;
    struct ComponentInstanceRecord *_field3;
    struct OpaqueAudioFileID *_field4;
    struct AudioStreamBasicDescription _field5;
    long long _field6;
    unsigned long long _field7;
    unsigned int _field8;
    struct AudioStreamPacketDescription *_field9;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
} CDStruct_d20431f8;

typedef struct {
    long long type;
    struct {
        long long direction;
        long long granularity;
    } selection;
} CDStruct_97f7034d;

// Ambiguous groups
typedef struct {
    unsigned int :1;
    unsigned int :1;
} CDStruct_d7010776;

