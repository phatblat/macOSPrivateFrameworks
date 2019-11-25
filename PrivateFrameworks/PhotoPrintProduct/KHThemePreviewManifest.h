//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSNumber, NSSet, NSString, NSURL;

@interface KHThemePreviewManifest : NSObject
{
    NSURL *_url;
    NSMutableDictionary *_manifest;
}

@property(retain, nonatomic) NSMutableDictionary *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *version;
@property(readonly, nonatomic) NSNumber *catalogVersion;
@property(readonly, nonatomic) NSString *packageIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSSet *themePreviewIdentifiers;
@property(readonly, nonatomic) NSDate *compilationDate;
- (id)initWithContentsOfURL:(id)arg1;

@end

