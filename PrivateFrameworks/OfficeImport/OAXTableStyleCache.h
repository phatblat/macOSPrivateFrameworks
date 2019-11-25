//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject
{
    OCPPackagePart *mStylesPart;
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}

- (void).cxx_destruct;
- (struct _xmlNode *)defaultStyleNode;
- (struct _xmlNode *)styleNodeForId:(id)arg1;
- (void)setStyleNode:(struct _xmlNode *)arg1 forId:(id)arg2;
- (void)setDefaultStyleId:(id)arg1;
- (id)defaultStyleId;
- (void)setStylesPart:(id)arg1;
- (id)init;

@end

