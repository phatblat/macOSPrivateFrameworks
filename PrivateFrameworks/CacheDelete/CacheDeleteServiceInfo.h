//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject
{
    BOOL _doNotQuery;
    NSExtensionContext *_extensionContext;
}

+ (id)serviceInfoWithExtensionContext:(id)arg1;
@property BOOL doNotQuery; // @synthesize doNotQuery=_doNotQuery;
@property(readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)arg1;

@end

