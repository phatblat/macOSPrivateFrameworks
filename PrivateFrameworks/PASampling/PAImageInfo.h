//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSString, NSUUID;

@interface PAImageInfo : NSObject <PASerializable>
{
    BOOL _isTextExecSegment;
    unsigned long long _loadAddress;
    unsigned long long _size;
    NSUUID *_imageUUID;
    NSString *_path;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
@property(readonly) BOOL isTextExecSegment; // @synthesize isTextExecSegment=_isTextExecSegment;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSUUID *imageUUID; // @synthesize imageUUID=_imageUUID;
@property(readonly) unsigned long long size; // @synthesize size=_size;
@property(readonly) unsigned long long loadAddress; // @synthesize loadAddress=_loadAddress;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)addNewInformationFromImageInfo:(id)arg1;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 isTextExecSegment:(BOOL)arg5;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andPath:(id)arg3;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2;
- (id)initWithImageInfo:(const void *)arg1 is64Bit:(BOOL)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithSerializedImageInfo:(const CDStruct_51667c10 *)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

