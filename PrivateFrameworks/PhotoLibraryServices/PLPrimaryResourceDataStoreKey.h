//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLTaggedPointerDataStoreKey.h"

@class NSString;

@interface PLPrimaryResourceDataStoreKey : NSObject <PLTaggedPointerDataStoreKey>
{
}

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)strategyFromExternalResource:(id)arg1 asset:(id)arg2;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
- (id)descriptionForAssetID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)_initWithKeyStruct:(const void *)arg1;
- (id)_init;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)arg1;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

