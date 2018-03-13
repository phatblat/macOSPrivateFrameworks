//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, _GEOSimpleTileRequesterOperation;

@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
- (NSData *)verifyDataIntegrity:(NSData *)arg1 checksumMethod:(int)arg2;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (void)operationFailed:(_GEOSimpleTileRequesterOperation *)arg1 error:(NSError *)arg2;
- (void)operationFinished:(_GEOSimpleTileRequesterOperation *)arg1;
@end

