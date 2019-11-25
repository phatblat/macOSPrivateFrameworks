//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHAsset, PHAssetResource;

__attribute__((visibility("hidden")))
@interface MiroAssetRequest : NSObject
{
    BOOL _isLocal;
    int _requestID;
    PHAsset *_asset;
    PHAssetResource *_resource;
    double _progress;
    double _sizeFactor;
}

@property(nonatomic) double sizeFactor; // @synthesize sizeFactor=_sizeFactor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) PHAssetResource *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)description;

@end

