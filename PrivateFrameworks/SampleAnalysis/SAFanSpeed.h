//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SASerializable.h"

@class NSString, SATimestamp;

@interface SAFanSpeed : NSObject <SASerializable>
{
    int _fanSpeed;
    SATimestamp *_timestamp;
}

+ (int)numFans;
+ (id)fanSpeedWithPAStyleSerializedFanSpeed:(const CDStruct_fc10d2b4 *)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_931ec236 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(readonly) int fanSpeed; // @synthesize fanSpeed=_fanSpeed;
@property(readonly) SATimestamp *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly) BOOL fanSpeedIsValid;
- (id)initWithTimestamp:(id)arg1;
- (id)init;
- (void)populateReferencesUsingBuffer:(CDStruct_931ec236 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (id)initEmpty;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_931ec236 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

