//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOrderedSet, NSURL;

@protocol WFURLCoercion <NSObject>
+ (NSDictionary *)urlItem_sharingItemClassesByBundleIdentifier;
+ (void)urlItem_generateObjectRepresentations:(void (^)(NSArray *, NSError *))arg1 fromURL:(NSURL *)arg2 forClass:(Class)arg3;
+ (BOOL)urlItem_canCoerceFromURL:(NSURL *)arg1;
+ (NSOrderedSet *)urlItem_outputClasses;
@end
