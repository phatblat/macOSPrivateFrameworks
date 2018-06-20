//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, OSActivityStream, OSLogDevice;

@interface CSKDevice : NSObject
{
    BOOL _supportsLogsPersistenceReading;
    BOOL __isHostDevice;
    NSString *_UDID;
    NSString *_name;
    NSString *_build;
    NSString *_version;
    long long _state;
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_trustConnectionSerialQueue;
    OSActivityStream *__defaultStream;
    OSLogDevice *__deviceRef;
}

+ (unsigned long long)_deviceTypeForProductModel:(id)arg1;
+ (id)_persistenceStreamForDevice:(id)arg1;
+ (id)_activityStreamForDevice:(id)arg1;
+ (id)_hostMachineModel;
+ (id)iconForDeviceType:(unsigned long long)arg1;
+ (id)hostDevice;
@property(nonatomic) BOOL _isHostDevice; // @synthesize _isHostDevice=__isHostDevice;
@property(retain, nonatomic) OSLogDevice *_deviceRef; // @synthesize _deviceRef=__deviceRef;
@property(retain, nonatomic) OSActivityStream *_defaultStream; // @synthesize _defaultStream=__defaultStream;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *trustConnectionSerialQueue; // @synthesize trustConnectionSerialQueue=_trustConnectionSerialQueue;
@property(nonatomic) BOOL supportsLogsPersistenceReading; // @synthesize supportsLogsPersistenceReading=_supportsLogsPersistenceReading;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *build; // @synthesize build=_build;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)establishTrustWithFailingHandler:(CDUnknownBlockType)arg1;
- (id)typeIcon;
- (BOOL)isEqualToDevice:(id)arg1;
- (id)initWithUDID:(id)arg1 name:(id)arg2;
- (id)init;

@end
