//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PKPackage;

@interface PKComponent : NSObject
{
    NSString *identifier;
    NSString *version;
    NSString *prefixPath;
    BOOL relocatable;
    BOOL versionChecked;
    BOOL strictIdentifier;
    NSArray *subpaths;
    PKPackage *package;
    NSString *destinationPath;
    NSMutableDictionary *_scriptsDictionary;
    NSMutableDictionary *_pathToPatchInfoDictionary;
    NSMutableDictionary *_pathToRequiredFilesDictionary;
    NSMutableArray *_deferredInstallPaths;
    NSMutableSet *_doNotObsoletePaths;
    NSMutableSet *_doNotObsoletePrefixes;
}

+ (BOOL)isInstallablePath:(id)arg1;
+ (id)findComponentsWithIdentifier:(id)arg1 version:(id)arg2 destination:(id)arg3;
+ (id)findComponentsWithIdentifier:(id)arg1 destination:(id)arg2;
+ (id)_findComponentsViaSpotlightWithIdentifier:(id)arg1 version:(id)arg2 destination:(id)arg3;
+ (id)_findComponentViaLaunchServicesWithIdentifier:(id)arg1 version:(id)arg2 destination:(id)arg3;
+ (BOOL)_bundleAtPath:(id)arg1 matchesVersion:(id)arg2;
+ (BOOL)_componentPath:(id)arg1 matchesDestination:(id)arg2;
@property(retain) NSArray *subpaths; // @synthesize subpaths;
@property BOOL strictIdentifier; // @synthesize strictIdentifier;
@property BOOL versionChecked; // @synthesize versionChecked;
@property BOOL relocatable; // @synthesize relocatable;
@property(retain) NSString *prefixPath; // @synthesize prefixPath;
@property(retain) NSString *version; // @synthesize version;
@property(retain) NSString *identifier; // @synthesize identifier;
- (long long)versionCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setScript:(id)arg1 forType:(id)arg2;
- (id)scriptForType:(id)arg1;
@property(retain) NSString *destinationPath; // @synthesize destinationPath;
@property __weak PKPackage *package; // @synthesize package;
- (id)description;
- (id)componentKey;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;
- (id)_doNotObsoletePrefixes;
- (id)_doNotObsoletePaths;
- (id)_pathToRequiredFilesDictionary;
- (id)_pathToPatchInfoDictionary;
- (id)_deferredInstallPaths;
- (id)_scriptsDictionary;

@end

