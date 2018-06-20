//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCVersion.h>

#import "PQLValuable.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface BRCDesiredVersion : BRCVersion <PQLValuable>
{
    union {
        unsigned int value;
        struct {
            unsigned int isFault:1;
            unsigned int startDownload:1;
            unsigned int wantsThumbnail:1;
            unsigned int userInitiated:1;
            unsigned int wantsContentForThumbnail:1;
        } ;
    } _flags;
    NSError *_downloadError;
    NSString *_serverName;
}

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
- (void).cxx_destruct;
- (BOOL)isStillValidForEtag:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (id)initWithDesiredVersion:(id)arg1;
- (void)markLiveAsFault;
@property(nonatomic) unsigned int options;
@property(readonly, nonatomic) BOOL wantsContentForThumbnail;
@property(readonly, nonatomic) BOOL userInitiated;
@property(readonly, nonatomic) BOOL wantsThumbnail;
@property(readonly, nonatomic) BOOL wantsContent;
@property(readonly, nonatomic) BOOL isFault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

