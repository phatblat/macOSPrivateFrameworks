//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TBFetchRequestDescriptor.h"

@class NSDate, NSPredicate, NSSet, NSString, PBCodable, TBLocalFetchRequestDescriptor;

@interface TBLocationFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>
{
    NSPredicate *_localFetchPredicate;
    PBCodable *_remoteRequest;
    unsigned long long _type;
    NSDate *_maxCacheAge;
    TBLocalFetchRequestDescriptor *_localFetchDescriptor;
    TBLocalFetchRequestDescriptor *_preferLocalFetchDescriptor;
    NSSet *_tileItems;
    unsigned long long _primaryTileKey;
    double _latitude;
    double _longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long primaryTileKey; // @synthesize primaryTileKey=_primaryTileKey;
@property(retain, nonatomic) NSSet *tileItems; // @synthesize tileItems=_tileItems;
@property(retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor; // @synthesize preferLocalFetchDescriptor=_preferLocalFetchDescriptor;
@property(retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor; // @synthesize localFetchDescriptor=_localFetchDescriptor;
@property(retain, nonatomic) NSDate *maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSPredicate *localFetchPredicate; // @synthesize localFetchPredicate=_localFetchPredicate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_preferLocalCacheFetchRequest;
- (id)_localFetchRequest;
@property(readonly, nonatomic) Class remoteRequestClass;
@property(readonly, nonatomic) PBCodable *remoteRequest; // @synthesize remoteRequest=_remoteRequest;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 maxCacheAge:(id)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 maxCacheAge:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
