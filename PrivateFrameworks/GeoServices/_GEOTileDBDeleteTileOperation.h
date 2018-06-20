//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_GEOTileDBWriteOperation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBDeleteTileOperation : NSObject <_GEOTileDBWriteOperation>
{
    struct _GEOTileKey _key;
}

- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(char *)arg4;
- (BOOL)isSupercededByOperation:(id)arg1;
- (void)performWithDB:(id)arg1;
- (BOOL)canIncreaseDataSizeInDB;
@property(readonly) unsigned long long sizeInBytes;
@property(readonly) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

