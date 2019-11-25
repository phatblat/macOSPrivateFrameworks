//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

#import "MSVSegmentedSubEncoder.h"

@class NSData, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface MSVOPACKEncoder : NSCoder <MSVSegmentedSubEncoder>
{
    BOOL _hasFinished;
    NSData *_encodedData;
    NSMutableArray *_objects;
    NSMapTable *_objectLookupTable;
    NSMutableArray *_wrapperStack;
    NSDictionary *_userInfo;
}

+ (id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
+ (id)encodedDataWithRootObject:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSMutableArray *wrapperStack; // @synthesize wrapperStack=_wrapperStack;
@property(readonly, nonatomic) NSMapTable *objectLookupTable; // @synthesize objectLookupTable=_objectLookupTable;
@property(readonly, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) BOOL hasFinished; // @synthesize hasFinished=_hasFinished;
- (void).cxx_destruct;
- (id)_convertObject:(id)arg1;
- (id)_convertNumber:(id)arg1;
- (void)_encodeNumber:(id)arg1 forKey:(id)arg2;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (void)finishEncodingPartialTopLevelObject;
- (void)beginEncodingPartialTopLevelObject:(id)arg1;
@property(readonly, nonatomic) BOOL hasTopLevelData;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (BOOL)requiresSecureCoding;
- (id)encodedDataWithError:(id *)arg1;
@property(readonly, nonatomic) NSData *encodedData; // @synthesize encodedData=_encodedData;
- (void)finishEncodingWithError:(id *)arg1;
- (void)finishEncoding;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

