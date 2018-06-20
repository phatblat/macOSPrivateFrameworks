//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSRemotePlistSnapshot.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WebsitesKnownToUsePlugInsSnapshot : NSObject <WBSRemotePlistSnapshot>
{
    NSDictionary *_mapOfPlugInBundleIdentifiersToSitesKnownToUsePlugIn;
}

+ (id)new;
- (void).cxx_destruct;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)knownSitesToUsePlugInWithIdentifier:(id)arg1;
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

