//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class PAImageRequestCacheHint, PAImageRequestTileHint;

@interface PAImageRequest : NSObject <NSCopying>
{
    id <PAImageRequestService> _requestService;
    unsigned char _loadMode;
    PAImageRequestCacheHint *_cacheHint;
    PAImageRequestTileHint *_tileHint;
}

+ (void)setDefaultRequestService:(id)arg1;
+ (id)defaultRequestService;
@property unsigned char loadMode; // @synthesize loadMode=_loadMode;
@property(retain) PAImageRequestTileHint *tileHint; // @synthesize tileHint=_tileHint;
@property(retain) PAImageRequestCacheHint *cacheHint; // @synthesize cacheHint=_cacheHint;
- (void).cxx_destruct;
- (id)description;
- (id)submitSynchronous:(id)arg1;
- (id)requestService;
- (id)copyForReplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setRequestService:(id)arg1;

@end

