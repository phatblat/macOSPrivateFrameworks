//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SAJSONSerialization.h"

@class NSArray, NSString, NSUUID;

@interface SAKernelCache : NSObject <SAJSONSerialization>
{
    NSUUID *_uuid;
    unsigned long long _loadAddress;
    NSArray *_binaryLoadInfos;
}

+ (void)clearCaches;
+ (id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
+ (void)_doKernelCachesWork:(CDUnknownBlockType)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(retain) NSArray *binaryLoadInfos; // @synthesize binaryLoadInfos=_binaryLoadInfos;
@property(readonly) unsigned long long loadAddress; // @synthesize loadAddress=_loadAddress;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long textSegmentsEndAddress;
@property(readonly) unsigned long long textSegmentsStartAddress;
- (BOOL)matchesUUID:(unsigned char [16])arg1 loadAddress:(unsigned long long)arg2;
- (id)initWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (void)populateReferencesUsingBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

