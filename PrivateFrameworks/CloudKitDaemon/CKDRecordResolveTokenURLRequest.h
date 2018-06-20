//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDRecordResolveTokenURLRequest : CKDURLRequest
{
    BOOL _shouldFetchRootRecord;
    NSSet *_rootRecordDesiredKeySet;
    CDUnknownBlockType _tokenResolveBlock;
    NSArray *_lookupInfos;
    NSMutableDictionary *_lookupInfosByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID; // @synthesize lookupInfosByRequestID=_lookupInfosByRequestID;
@property(retain, nonatomic) NSArray *lookupInfos; // @synthesize lookupInfos=_lookupInfos;
@property(copy, nonatomic) CDUnknownBlockType tokenResolveBlock; // @synthesize tokenResolveBlock=_tokenResolveBlock;
@property(nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSSet *rootRecordDesiredKeySet; // @synthesize rootRecordDesiredKeySet=_rootRecordDesiredKeySet;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)sourceApplicationBundleIdentifier;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithShortTokenLookupInfos:(id)arg1;

@end

