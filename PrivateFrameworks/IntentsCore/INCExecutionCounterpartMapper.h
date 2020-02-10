//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSApplicationWorkspace, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface INCExecutionCounterpartMapper : NSObject
{
    BOOL _filled;
    struct os_unfair_lock_s _lock;
    LSApplicationWorkspace *_workspace;
    NSMutableDictionary *_mapping;
}

@property(readonly, nonatomic) struct os_unfair_lock_s _lock; // @synthesize _lock;
@property(readonly, nonatomic) BOOL _filled; // @synthesize _filled;
@property(readonly, copy, nonatomic) NSMutableDictionary *_mapping; // @synthesize _mapping;
@property(readonly, nonatomic) LSApplicationWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1;
- (void)reset;
- (void)installedApplicationsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

@end
