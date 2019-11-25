//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEODBReader : NSObject
{
    BOOL _defunct;
    BOOL _closed;
    int _editionUpdating;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSString *_path;
    NSDictionary *_pragmaOverrides;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_tileQuery;
    struct sqlite3_stmt *_versionQuery;
    CDStruct_e4886f83 *_expirationRecords;
    unsigned long long _expirationRecordCount;
}

- (void).cxx_destruct;
- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned long long)arg2;
- (void)dataForKeys:(struct GEOTileKeyList *)arg1 callbackQueue:(id)arg2 asyncHandler:(CDUnknownBlockType)arg3;
- (id)dataForKey:(struct _GEOTileKey *)arg1 isCurrent:(char *)arg2 eTag:(id *)arg3;
- (id)_dataForKey:(struct _GEOTileKey)arg1 isCurrent:(char *)arg2 eTag:(id *)arg3;
- (id)_dataForA:(unsigned int)arg1 andB:(unsigned int)arg2 andC:(unsigned int)arg3 andD:(unsigned int)arg4 isCurrent:(char *)arg5 eTag:(id *)arg6;
@property BOOL closed;
- (void)_openDB;
- (void)_closeDB;
- (void)_editionUpdateEnd:(id)arg1;
- (void)_editionUpdateBegin:(id)arg1;
- (void)_databaseReset:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

