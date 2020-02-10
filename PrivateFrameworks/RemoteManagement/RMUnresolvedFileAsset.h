//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMUnresolvedAsset.h"

@class NSString, NSURL, RMAsset;

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset>
{
    RMAsset *_asset;
    NSURL *_downloadToFileURL;
}

@property(retain, nonatomic) NSURL *downloadToFileURL; // @synthesize downloadToFileURL=_downloadToFileURL;
@property(retain, nonatomic) RMAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)resolveWithAssetResolver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithAsset:(id)arg1 downloadToFileURL:(id)arg2;

@end
