//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString, PKBundleComponentVersion;

@interface BOSBrainBundle : NSObject
{
    NSString *_bundleIdentifier;
    PKBundleComponentVersion *_bundleVersion;
    NSBundle *_bundle;
}

@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) PKBundleComponentVersion *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly) NSString *payloadArchivePath;
- (id)description;
- (id)initWithBundleURL:(id)arg1;

@end

