//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SASerializable.h"

@class NSString, SABinary, SASourceInfo, SASymbol;

@interface SAInstruction : NSObject <SASerializable>
{
    SASymbol *_symbol;
    unsigned long long _offsetIntoTextSegment;
    SABinary *_binary;
    SASourceInfo *_sourceInfo;
}

+ (id)instructionWithBinary:(id)arg1 offsetIntoTextSegment:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_e7a0f457 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(retain) SASourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property __weak SABinary *binary; // @synthesize binary=_binary;
@property unsigned long long offsetIntoTextSegment; // @synthesize offsetIntoTextSegment=_offsetIntoTextSegment;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(retain) SASymbol *symbol;
- (BOOL)symbolicateWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (void)populateReferencesUsingBuffer:(const CDStruct_e7a0f457 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_e7a0f457 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
