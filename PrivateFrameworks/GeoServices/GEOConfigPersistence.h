//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODefaultsDBDict, GEOSQLiteDB, geo_isolater;

@interface GEOConfigPersistence : NSObject
{
    GEOSQLiteDB *_db;
    GEODefaultsDBDict *_cache;
    geo_isolater *_cacheIsolator;
}

+ (BOOL)_setup:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)defaultForKeyPath:(id)arg1;
- (void)setDefault:(id)arg1 forKeyPath:(id)arg2;
- (id)_valueForKeyPath:(id)arg1 key:(id *)arg2 createOrUpdate:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)tearDown;
- (id)initWithDBPath:(id)arg1;

@end

