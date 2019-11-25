//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PODSecureCoding.h"

@class NSArray, NSString, PODContentAnchor, PODLibrarySettings;

@interface PODContentChangeSet : NSObject <PODSecureCoding>
{
    NSArray *_changes;
    PODContentAnchor *_anchor;
    PODLibrarySettings *_librarySettings;
    NSArray *_libraryStationSyncDictionaries;
}

+ (BOOL)supportsSecureCoding;
+ (id)nullChangeSetForDomain:(id)arg1;
@property(retain, nonatomic) NSArray *libraryStationSyncDictionaries; // @synthesize libraryStationSyncDictionaries=_libraryStationSyncDictionaries;
@property(retain, nonatomic) PODLibrarySettings *librarySettings; // @synthesize librarySettings=_librarySettings;
@property(retain, nonatomic) PODContentAnchor *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isNull;
- (id)initWithChanges:(id)arg1 anchor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

