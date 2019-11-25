//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PXGMediaRequest : NSObject
{
    BOOL _gotAnyResult;
    id <PXDisplayAsset> _asset;
    id <PXGDisplayAssetRequestObserver> _observer;
    unsigned long long _postProcessOptions;
    struct CGSize _bestReceivedSize;
}

@property(nonatomic) BOOL gotAnyResult; // @synthesize gotAnyResult=_gotAnyResult;
@property(nonatomic) struct CGSize bestReceivedSize; // @synthesize bestReceivedSize=_bestReceivedSize;
@property(readonly, nonatomic) unsigned long long postProcessOptions; // @synthesize postProcessOptions=_postProcessOptions;
@property(readonly, nonatomic) id <PXGDisplayAssetRequestObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 observer:(id)arg2 postProcessOptions:(unsigned long long)arg3;

@end

