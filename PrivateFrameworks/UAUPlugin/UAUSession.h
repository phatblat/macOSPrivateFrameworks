//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, UpdaterSessionParameters;

@interface UAUSession : NSObject
{
    UpdaterSessionParameters *_sessionParams;
    NSMutableArray *_asyncSafePlugins;
    NSMutableArray *_plugins;
    NSMutableSet *_optedOutPluginIDs;
    NSMutableDictionary *_pluginToBundleIDMap;
}

@property(retain) NSMutableDictionary *pluginToBundleIDMap; // @synthesize pluginToBundleIDMap=_pluginToBundleIDMap;
@property(retain) NSMutableSet *optedOutPluginIDs; // @synthesize optedOutPluginIDs=_optedOutPluginIDs;
@property(retain) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(retain) NSMutableArray *asyncSafePlugins; // @synthesize asyncSafePlugins=_asyncSafePlugins;
@property(retain) UpdaterSessionParameters *sessionParams; // @synthesize sessionParams=_sessionParams;
- (void).cxx_destruct;
- (id)formatNumberForPrivacy:(id)arg1;
- (void)processPluginsWithPrivilege:(BOOL)arg1;
- (void)runOnePlugin:(id)arg1 withPrivilege:(BOOL)arg2 withCompletedSet:(id)arg3 andQueue:(id)arg4;
- (void)loadPlugins;
- (void)loadOnePlugin:(id)arg1 fromBundle:(id)arg2 withOverrideID:(id)arg3;
- (id)initWithParameters:(id)arg1;

@end

