//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _bundleIDsFetchedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)sourceApplicationBundleIdentifier;
- (BOOL)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;

@end

