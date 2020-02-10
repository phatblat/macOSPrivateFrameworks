//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAAVAssetResponse.h"

@class AVAsset, NSError, NSString, NSURL;

@interface PAAVAssetResponse : NSObject <PAAVAssetResponse>
{
    AVAsset *_asset;
    NSURL *_assetURL;
    NSError *_error;
    unsigned long long _state;
}

@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_failRequest:(id)arg1 withError:(id)arg2;
- (void)fulfillValidatedRequest:(id)arg1;
- (BOOL)canceled;
- (BOOL)successful;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
