//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNContactStoreNotificationInfo : NSObject
{
    NSMutableDictionary *_publicUserInfo;
    NSMutableDictionary *_privateUserInfo;
    NSArray *_affectedSources;
    NSDate *_modificationDate;
    BOOL _couldAffectSync;
    BOOL _shouldSyncWhenSaved;
    BOOL _privateTablesChanged;
    BOOL _successfullyPrepared;
}

@property BOOL successfullyPrepared; // @synthesize successfullyPrepared=_successfullyPrepared;
@property BOOL privateTablesChanged; // @synthesize privateTablesChanged=_privateTablesChanged;
@property BOOL shouldSyncWhenSaved; // @synthesize shouldSyncWhenSaved=_shouldSyncWhenSaved;
@property BOOL couldAffectSync; // @synthesize couldAffectSync=_couldAffectSync;
@property(copy) NSArray *affectedSources; // @synthesize affectedSources=_affectedSources;
@property(copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSMutableDictionary *privateUserInfo; // @synthesize privateUserInfo=_privateUserInfo;
@property(retain) NSMutableDictionary *publicUserInfo; // @synthesize publicUserInfo=_publicUserInfo;
- (void).cxx_destruct;
- (id)init;

@end

